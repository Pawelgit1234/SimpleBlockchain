#include "BlockChain.hpp"

namespace sb
{
	namespace blockchain
	{
		BlockChain::BlockChain() noexcept
		{
			blockchain_.push_back(std::make_unique<Block>(0));
		}

		void BlockChain::addBlock(const std::string& data)
		{
			unsigned int id = blockchain_.size();
			std::string prevHash = blockchain_[id - 1]->getHash();
			blockchain_.push_back(std::make_unique<Block>(id, prevHash, data));
		}

		Block BlockChain::getBlockById(unsigned int id)
		{
			for (int i = 0; i < blockchain_.size(); i++)
				if (blockchain_[i]->getId() == id)
					return *(blockchain_[i]);

			sb::logger::log("Id does not exist.", sb::logger::LoggerType::WARNING);
			throw std::invalid_argument("Index does not exist.");
		}

		Block BlockChain::getBlockByHash(const std::string& hash)
		{
			if (hash.size() != 32)
			{
				sb::logger::log("Hash does not exist.", sb::logger::LoggerType::WARNING);
				throw std::invalid_argument("Hash does not exist.");
			}

			for (int i = 0; i < blockchain_.size(); i++)
				if (blockchain_[i]->getHash() == hash)
					return *(blockchain_[i]);

			sb::logger::log("Hash does not exist.", sb::logger::LoggerType::WARNING);
			throw std::invalid_argument("Hash does not exist.");
		}
	}
}