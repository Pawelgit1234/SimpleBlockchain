#pragma once

#include <iostream>
#include <string>
#include <chrono>
#include <ctime>

namespace sb
{
	namespace logger
	{
		enum class LoggerType
		{
			INFO,
			WARNING,
			CRITICAL,
		};

		void log(const std::string& msg, LoggerType msg_type);
	}
}