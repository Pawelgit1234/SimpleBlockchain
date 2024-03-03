#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

#include <openssl/sha.h>
#include <openssl/evp.h>

#pragma comment(lib, "Ws2_32.Lib")
#pragma comment(lib, "Crypt32.Lib")

namespace sb
{
	namespace hash
    {
		std::string sha256(const std::string str);
	}
}