#include "MathStuffLib.h"
#include "math.h"
namespace MathFuncs
{
	// Vector2
	// vectorA + vectorB
	Vector2 Vector2::operator+ (Vector2& Other)
	{
		Vector2 temp;
		temp.x = x + Other.x;
		temp.y = y + Other.y;
		return temp;
	}
	Vector2 Vector2::operator- (Vector2& Other)
	{
		Vector2 temp;
		temp.x = x - Other.x;
		temp.y = y - Other.y;
		return temp;
	}
	Vector2 Vector2::operator* (Vector2& Other)
	{
		Vector2 temp;
		temp.x = x * Other.x;
		temp.y = y * Other.y;
		return temp;
	}
	//Vector3
	Vector3 Vector3::operator+ (Vector3& Other)
	{
		Vector3 temp;
		temp.x = x + Other.x;
		temp.y = y + Other.y;
		temp.z = z + Other.z;
		temp.m = sqrt(((x)+(y)+(z))*2);
		return temp;
	}
	Vector3 Vector3::operator- (Vector3& Other)
	{
		Vector3 temp;
		temp.x = x - Other.x;
		temp.y = y - Other.y;
		temp.z = z - Other.z;
		temp.m = sqrt(((x)+(y)+(z))*2);
		return temp;
	}
	Vector3 Vector3::operator* (Vector3& Other)
	{
		Vector3 temp;
		temp.x = x * Other.x;
		temp.y = y * Other.y;
		temp.z = z * Other.z;
		temp.m = sqrt(((x)+(y)+(z))*2);
		return temp;
	}
	//Vector4
	Vector4 Vector4::operator+ (Vector4& Other)
	{
		Vector4 temp;
		temp.w = w + Other.w;
		temp.x = x + Other.x;
		temp.y = y + Other.y;
		temp.z = z + Other.z;
		return temp;
	}
	Vector4 Vector4::operator- (Vector4& Other)
	{
		Vector4 temp;
		temp.w = w - Other.w;
		temp.x = x - Other.x;
		temp.y = y - Other.y;
		temp.z = z - Other.z;
		return temp;
	}
	Vector4 Vector4::operator* (Vector4& Other)
	{
		Vector4 temp;
		temp.w = w * Other.w;
		temp.x = x * Other.x;
		temp.y = y * Other.y;
		temp.z = z * Other.z;
		return temp;
	}

	matrix3 matrix3::operator +(matrix3 other)
	{
		matrix3 temp;
		temp.matrix[0][0] = matrix[0][0] + other.matrix[0][0];
		temp.matrix[0][1] = matrix[0][1] + other.matrix[0][1];
		temp.matrix[0][2] = matrix[0][2] + other.matrix[0][2];
		temp.matrix[1][0] = matrix[1][0] + other.matrix[1][0];
		temp.matrix[1][1] = matrix[1][1] + other.matrix[1][1];
		temp.matrix[1][2] = matrix[1][2] + other.matrix[1][2];
		temp.matrix[2][0] = matrix[2][0] + other.matrix[2][0];
		temp.matrix[2][1] = matrix[2][1] + other.matrix[2][1];
		temp.matrix[2][2] = matrix[2][2] + other.matrix[2][2];
		return temp;
	}
	matrix3 matrix3::operator -(matrix3 other)
	{
		matrix3 temp;
		temp.matrix[0][0] = matrix[0][0] - other.matrix[0][0];
		temp.matrix[0][1] = matrix[0][1] - other.matrix[0][1];
		temp.matrix[0][2] = matrix[0][2] - other.matrix[0][2];
		temp.matrix[1][0] = matrix[1][0] - other.matrix[1][0];
		temp.matrix[1][1] = matrix[1][1] - other.matrix[1][1];
		temp.matrix[1][2] = matrix[1][2] - other.matrix[1][2];
		temp.matrix[2][0] = matrix[2][0] - other.matrix[2][0];
		temp.matrix[2][1] = matrix[2][1] - other.matrix[2][1];
		temp.matrix[2][2] = matrix[2][2] - other.matrix[2][2];
		return temp;
	}
	matrix3 matrix3::operator *(matrix3 other)
	{
		matrix3 temp;
		temp.matrix[0][0] = ((matrix[0][0] * other.matrix[0][0]) + (matrix[0][1] * other.matrix[0][1]) + (matrix[0][2] + other.matrix[0][2]));
		temp.matrix[0][1] = ((matrix[0][0] * other.matrix[1][0]) + (matrix[0][1] * other.matrix[1][1]) + (matrix[0][2] + other.matrix[1][2]));
		temp.matrix[0][2] = ((matrix[0][0] * other.matrix[2][0]) + (matrix[0][1] * other.matrix[2][1]) + (matrix[0][2] + other.matrix[2][2]));
		temp.matrix[1][0] = ((matrix[1][0] * other.matrix[0][0]) + (matrix[1][1] * other.matrix[0][1]) + (matrix[1][2] + other.matrix[0][2]));
		temp.matrix[1][1] = ((matrix[1][0] * other.matrix[1][0]) + (matrix[1][1] * other.matrix[1][1]) + (matrix[1][2] + other.matrix[1][2]));
		temp.matrix[1][2] = ((matrix[1][0] * other.matrix[2][0]) + (matrix[1][1] * other.matrix[2][1]) + (matrix[1][2] + other.matrix[2][2]));
		temp.matrix[2][0] = ((matrix[2][0] * other.matrix[0][0]) + (matrix[2][1] * other.matrix[0][1]) + (matrix[2][2] + other.matrix[0][2]));
		temp.matrix[2][1] = ((matrix[2][0] * other.matrix[1][0]) + (matrix[2][1] * other.matrix[1][1]) + (matrix[2][2] + other.matrix[1][2]));
		temp.matrix[2][2] = ((matrix[2][0] * other.matrix[2][0]) + (matrix[2][1] * other.matrix[2][1]) + (matrix[2][2] + other.matrix[2][2]));
		return temp;
	}
	matrix4 matrix4::operator +(matrix4 other)
	{
		matrix4 temp;
		temp.matrix[0][0] = matrix[0][0] + other.matrix[0][0];
		temp.matrix[0][1] = matrix[0][1] + other.matrix[0][1];
		temp.matrix[0][2] = matrix[0][2] + other.matrix[0][2];
		temp.matrix[0][3] = matrix[0][3] + other.matrix[0][3];
		temp.matrix[1][0] = matrix[1][0] + other.matrix[1][0];
		temp.matrix[1][1] = matrix[1][1] + other.matrix[1][1];
		temp.matrix[1][2] = matrix[1][2] + other.matrix[1][2];
		temp.matrix[1][3] = matrix[1][3] + other.matrix[1][3];
		temp.matrix[2][0] = matrix[2][0] + other.matrix[2][0];
		temp.matrix[2][1] = matrix[2][1] + other.matrix[2][1];
		temp.matrix[2][2] = matrix[2][2] + other.matrix[2][2];
		temp.matrix[2][3] = matrix[2][3] + other.matrix[2][3];
		temp.matrix[3][0] = matrix[3][0] + other.matrix[3][0];
		temp.matrix[3][1] = matrix[3][1] + other.matrix[3][1];
		temp.matrix[3][2] = matrix[3][2] + other.matrix[3][2];
		temp.matrix[3][3] = matrix[3][3] + other.matrix[3][3];
		return temp;
	}
	matrix4 matrix4::operator -(matrix4 other)
	{
		matrix4 temp;
		temp.matrix[0][0] = matrix[0][0] - other.matrix[0][0];
		temp.matrix[0][1] = matrix[0][1] - other.matrix[0][1];
		temp.matrix[0][2] = matrix[0][2] - other.matrix[0][2];
		temp.matrix[0][3] = matrix[0][3] - other.matrix[0][3];
		temp.matrix[1][0] = matrix[1][0] - other.matrix[1][0];
		temp.matrix[1][1] = matrix[1][1] - other.matrix[1][1];
		temp.matrix[1][2] = matrix[1][2] - other.matrix[1][2];
		temp.matrix[1][3] = matrix[1][3] - other.matrix[1][3];
		temp.matrix[2][0] = matrix[2][0] - other.matrix[2][0];
		temp.matrix[2][1] = matrix[2][1] - other.matrix[2][1];
		temp.matrix[2][2] = matrix[2][2] - other.matrix[2][2];
		temp.matrix[2][3] = matrix[2][3] - other.matrix[2][3];
		temp.matrix[3][0] = matrix[3][0] - other.matrix[3][0];
		temp.matrix[3][1] = matrix[3][1] - other.matrix[3][1];
		temp.matrix[3][2] = matrix[3][2] - other.matrix[3][2];
		temp.matrix[3][3] = matrix[3][3] - other.matrix[3][3];
		return temp;
	}
	matrix4 matrix4::operator *(matrix4 other)
	{
		matrix4 temp;
		temp.matrix[0][0] = ((matrix[0][0] * other.matrix[0][0]) + (matrix[0][1] * other.matrix[0][1]) + (matrix[0][2] + other.matrix[0][2]) + (matrix[0][3] + other.matrix[0][3]));
		temp.matrix[0][1] = ((matrix[0][0] * other.matrix[1][0]) + (matrix[0][1] * other.matrix[1][1]) + (matrix[0][2] + other.matrix[1][2]) + (matrix[0][3] + other.matrix[1][3]));
		temp.matrix[0][2] = ((matrix[0][0] * other.matrix[2][0]) + (matrix[0][1] * other.matrix[2][1]) + (matrix[0][2] + other.matrix[2][2]) + (matrix[0][3] + other.matrix[2][3]));
		temp.matrix[0][3] = ((matrix[0][0] * other.matrix[3][0]) + (matrix[0][1] * other.matrix[3][1]) + (matrix[0][2] + other.matrix[3][2]) + (matrix[0][3] + other.matrix[3][3]));
		temp.matrix[1][0] = ((matrix[1][0] * other.matrix[0][0]) + (matrix[1][1] * other.matrix[0][1]) + (matrix[1][2] + other.matrix[0][2]) + (matrix[1][3] + other.matrix[0][3]));
		temp.matrix[1][1] = ((matrix[1][0] * other.matrix[1][0]) + (matrix[1][1] * other.matrix[1][1]) + (matrix[1][2] + other.matrix[1][2]) + (matrix[1][3] + other.matrix[1][3]));
		temp.matrix[1][2] = ((matrix[1][0] * other.matrix[2][0]) + (matrix[1][1] * other.matrix[2][1]) + (matrix[1][2] + other.matrix[2][2]) + (matrix[1][3] + other.matrix[2][3]));
		temp.matrix[1][3] = ((matrix[1][0] * other.matrix[3][0]) + (matrix[1][1] * other.matrix[3][1]) + (matrix[1][2] + other.matrix[3][2]) + (matrix[1][3] + other.matrix[3][3]));
		temp.matrix[2][0] = ((matrix[2][0] * other.matrix[0][0]) + (matrix[2][1] * other.matrix[0][1]) + (matrix[2][2] + other.matrix[0][2]) + (matrix[2][3] + other.matrix[0][3]));
		temp.matrix[2][1] = ((matrix[2][0] * other.matrix[1][0]) + (matrix[2][1] * other.matrix[1][1]) + (matrix[2][2] + other.matrix[1][2]) + (matrix[2][3] + other.matrix[1][3]));
		temp.matrix[2][2] = ((matrix[2][0] * other.matrix[2][0]) + (matrix[2][1] * other.matrix[2][1]) + (matrix[2][2] + other.matrix[2][2]) + (matrix[2][3] + other.matrix[2][3]));
		temp.matrix[2][3] = ((matrix[2][0] * other.matrix[3][0]) + (matrix[2][1] * other.matrix[3][1]) + (matrix[2][2] + other.matrix[3][2]) + (matrix[2][3] + other.matrix[3][3]));
		temp.matrix[3][0] = ((matrix[3][0] * other.matrix[0][0]) + (matrix[3][1] * other.matrix[0][1]) + (matrix[3][2] + other.matrix[0][2]) + (matrix[3][3] + other.matrix[0][3]));
		temp.matrix[3][1] = ((matrix[3][0] * other.matrix[1][0]) + (matrix[3][1] * other.matrix[1][1]) + (matrix[3][2] + other.matrix[1][2]) + (matrix[3][3] + other.matrix[1][3]));
		temp.matrix[3][2] = ((matrix[3][0] * other.matrix[2][0]) + (matrix[3][1] * other.matrix[2][1]) + (matrix[3][2] + other.matrix[2][2]) + (matrix[3][3] + other.matrix[2][3]));
		temp.matrix[3][3] = ((matrix[3][0] * other.matrix[3][0]) + (matrix[3][1] * other.matrix[3][1]) + (matrix[3][2] + other.matrix[3][2]) + (matrix[3][3] + other.matrix[3][3]));
		return temp;
	}
}