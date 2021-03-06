#pragma once
class Vec3		// vList, nList, tList �� structure
{
public:
	float ptr[3];
	Vec3()
	{
		for (int i = 0; i < 3; ++i)
		{
			ptr[i] = 0;
		}
	}
	Vec3(float *v)
	{
		for (size_t i = 0; i<3; i++)
			ptr[i] = v[i];
	}
	inline float& operator[](size_t index)
	{
		return ptr[index];
	}
	Vec3 operator +=(Vec3 a)
	{
		ptr[0] += a[0];
		ptr[1] += a[1];
		ptr[2] += a[2];
		return *this;
	}
	Vec3 operator -=(Vec3 a)
	{
		ptr[0] -= a[0];
		ptr[1] -= a[1];
		ptr[2] -= a[2];
		return *this;
	}

};