#include "Hash.hpp"

namespace sb
{
	namespace hash
	{
        std::string sha256(const std::string str)
        {
            unsigned char hash[SHA256_DIGEST_LENGTH];

            EVP_MD_CTX* mdctx;
            const EVP_MD* md;

            mdctx = EVP_MD_CTX_new();
            md = EVP_sha256();

            EVP_DigestInit_ex(mdctx, md, NULL);
            EVP_DigestUpdate(mdctx, str.c_str(), str.size());
            EVP_DigestFinal_ex(mdctx, hash, NULL);
            EVP_MD_CTX_free(mdctx);

            std::stringstream ss;

            for (int i = 0; i < SHA256_DIGEST_LENGTH; i++)
                ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(hash[i]);

            return ss.str();
        }

	}
}