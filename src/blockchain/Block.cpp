#include "Block.hpp"

namespace sb
{
	namespace blockchain
	{
        Block::Block(unsigned int id, std::string previousHash, std::string data) noexcept
            : id_(id), previousHash_(previousHash), data_(data), timestamp_(std::time(nullptr))
        {
            char buffer[80];
            std::tm timeInfo;
            localtime_s(&timeInfo, &timestamp_);
            std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &timeInfo);
            hash_ = sb::hash::sha256(previousHash + buffer + std::to_string(id) + data);
            sb::logger::log('[' + std::to_string(id) + ' ' + buffer + "] Block created.", sb::logger::LoggerType::INFO);
        }
	}
}