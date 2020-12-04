#pragma once
#include "Vector3.h"
class Transform
{
public:
	Vector3* position = new Vector3();
	Vector3* rotation = new Vector3();
	Vector3* scale = new Vector3(1.0f, 1.0f, 1.0f);

	Transform();
	Transform(float x, float y, float z);
};

