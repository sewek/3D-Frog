#include "Vertex.h"

Frog::Vertex::Vertex()
{
}

Frog::Vertex::Vertex(Vector3 position)
{
	this->Position = position;
}

Frog::Vertex::Vertex(Vector3 position, Vector3 normal, Vector3 coords)
{
	this->Position = position;
	this->Normal = normal;
	this->TexCoords = coords;
}

Frog::Vertex::~Vertex()
{
}
