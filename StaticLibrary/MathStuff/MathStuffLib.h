namespace MathFuncs
{
	class Vector2
	{
		// 2 numbers direction
		float x;
		float y;

		Vector2 operator+ (Vector2& Other);
		Vector2 operator- (Vector2& Other);
		Vector2 operator* (Vector2& Other);
	};
	class Vector3
	{
		float x;
		float y;
		float z;
		float m;

		Vector3 operator+ (Vector3& Other);
		Vector3 operator- (Vector3& Other);
		Vector3 operator* (Vector3& Other);
	};
	class Vector4
	{
		float w;
		float x;
		float y;
		float z;

		unsigned long createRGB(int r, int g, int b)
		{
			return ((r & 0xff) << 16) + ((g & 0xff) << 8) + (b & 0xff);
		}
		Vector4 operator+ (Vector4& Other);
		Vector4 operator- (Vector4& Other);
		Vector4 operator* (Vector4& Other);
	};
	class matrix3
	{
		matrix3();

		float matrix[3][3];
		// Vector4 position;
		// position.x = 5.f;
		// matrix[0][0] = position.x;

		matrix3 operator +(matrix3 other);
		matrix3 operator -(matrix3 other);
		matrix3 operator *(matrix3 other);
	};
	class matrix4
	{
		matrix4();

		float matrix[4][4];

		matrix4 operator +(matrix4 m2);
		matrix4 operator -(matrix4 m2);
		matrix4 operator *(matrix4 m2);
	};
}