#pragma once
#include <string>

#include "FreeImage.h"

namespace Frog {

	class Texture
	{
	public:
		std::string path;
		typedef enum { Diffuse, Normal, Specular} type;

		Texture();
		Texture(const std::string&& file);

	private:
		FREE_IMAGE_FORMAT	image_format;
		FIBITMAP*			image;
		void loadFile();
	};

};
