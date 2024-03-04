#include "blockchain/BlockChain.hpp"

int main(int argc, char* argv)
{
	sb::blockchain::BlockChain blockchain;
	blockchain.addBlock("HEllo");

	return 0;
}