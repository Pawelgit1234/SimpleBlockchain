#pragma once

#include <string>
#include <ctime>

#include "../utils/Hash.hpp"
#include "../utils/Logger.hpp"

namespace sb
{
	namespace blockchain
	{
		class Block
		{
		public:
			Block(unsigned int id, std::string previousHash, std::string data) noexcept;

		private:
			unsigned int id_;
			std::string hash_;
			std::string previousHash_;
			std::string data_;
			time_t timestamp_;
		};
	}
}

