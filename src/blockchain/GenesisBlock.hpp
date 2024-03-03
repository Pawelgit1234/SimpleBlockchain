#pragma once

#include <string>
#include <ctime>

#include "VirtualBlock.hpp"
#include "../utils/Utils.hpp"

namespace sb
{
	namespace blockchain
	{
		class GenesisBlock : public VirtualBlock
		{
		public:
			GenesisBlock() noexcept;

			unsigned int getId() const noexcept { return id_; }
			std::string getHash() const noexcept { return hash_; }
			std::string getData() const noexcept { return data_; }
			time_t getTimestamp() const noexcept { return timestamp_; }

		private:
			unsigned int id_;
			std::string hash_;
			std::string data_;
			time_t timestamp_;
		};
	}
}
