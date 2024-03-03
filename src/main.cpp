#include "utils/Hash.hpp"
#include <iostream>

int main(int argc, char* argv)
{
	std::string hash = sb::hash::sha256("Hallo");
	std::cout << hash;
	return 0;
}