#include "Block.hpp"

namespace sb
{
	namespace blockchain
	{
		Block::Block(unsigned int id, std::string previousHash, std::string data) noexcept
			: id_(id), previousHash_(previousHash), data_(data)
		{
			sb::logger::log('[' + std::to_string(id) + "] Block created.", sb::logger::LoggerType::INFO);
		}
	}
}