#pragma once
#include "Vector3.h"

namespace Frog {
	
	class Vertex
	{
	public:
		Vector3 Position;
		Vector3 Normal;
		Vector3 TexCoords;

		Vertex();
		Vertex(Vector3 position);
		Vertex(Vector3 position, Vector3 normal, Vector3 coords);
		~Vertex();
	};
};
