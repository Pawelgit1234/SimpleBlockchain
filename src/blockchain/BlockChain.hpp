#pragma once

#include <vector>
#include <memory>
#include <string>

#include "../utils/Utils.hpp"
#include "Block.hpp"

namespace sb
{
	namespace blockchain
	{
		class BlockChain
		{
		public:
			BlockChain() noexcept;

			void addBlock(const std::string& data);

			Block getBlockById(unsigned int id);
			Block getBlockByHash(const std::string& hash);
			unsigned int getBlockNum() { blockchain_.size(); }

		private:
			std::vector<std::unique_ptr<Block>> blockchain_;
		};
	}
}
