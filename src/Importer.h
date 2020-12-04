#pragma once

#include <string>

namespace Frog {

	class Importer
	{
	public:
		std::string path = "";

		Importer();
		Importer(const std::string);
		~Importer();

	private:
		void getInfo();
	};

};
