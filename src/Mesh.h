#pragma once
#include <vector>
#include "Vertex.h"

namespace Frog {

	class Mesh
	{
	public:
		std::vector<Vertex>			vertices;
		std::vector<unsigned int>	indices;

		Mesh();
		Mesh(std::vector<Vertex> vertices, std::vector<unsigned int> indices);


	private:
		unsigned int VAO, VBO, EBO;

		void setupMesh();
	};

};