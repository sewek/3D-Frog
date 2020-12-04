#include "Transform.h"

Transform::Transform()
{
}

Transform::Transform(float x, float y, float z)
{
	this->position = new Vector3(x, y, z);
}
