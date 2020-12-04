#include "Texture.h"

Frog::Texture::Texture()
{
}

Frog::Texture::Texture(const std::string&& file)
{
	this->path = file;
}

void Frog::Texture::loadFile()
{
	image_format = FreeImage_GetFileType(this->path.c_str(), 0);
	image = FreeImage_Load(this->image_format, this->path.c_str());
}

