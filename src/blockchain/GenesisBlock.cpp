#include "GenesisBlock.hpp"

namespace sb
{
	namespace blockchain
	{
		GenesisBlock::GenesisBlock() noexcept
			: id_(1), data_("Genesis Block"), timestamp_(std::time(nullptr))
		{
			char buffer[80];
			std::tm timeInfo;
			localtime_s(&timeInfo, &timestamp_);
			std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &timeInfo);
			hash_ = sb::hash::sha256(buffer + std::to_string(id_) + data_);
			sb::logger::log("[Genesis Block] Block created.", sb::logger::LoggerType::INFO);
		}
	}
}