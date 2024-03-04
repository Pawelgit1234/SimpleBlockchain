#pragma once

#include <string>
#include <ctime>

#include "../utils/Utils.hpp"

namespace sb
{
	namespace blockchain
	{
		class Block
		{
		public:
			Block(unsigned int id, const std::string& previousHash, const std::string& data) noexcept;
			Block(unsigned int id) noexcept;

			unsigned int getId() const noexcept { return id_; }
			std::string getPreviousHash() const noexcept { return previousHash_; }
			std::string getHash() const noexcept { return hash_; }
			std::string getData() const noexcept { return data_; }
			time_t getTimestamp() const noexcept { return timestamp_; }

		private:
			unsigned int id_;
			std::string hash_;
			std::string previousHash_;
			std::string data_;
			time_t timestamp_;
		};
	}
}

