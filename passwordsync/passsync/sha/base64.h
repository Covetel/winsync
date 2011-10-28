#include <string>
#include "hl_hashwrapper.h"
#include "hl_sha1wrapper.h"

std::string base64_encode(unsigned char const* , unsigned int len);
std::string base64_decode(std::string const& s);
char* passwordEnBase64(char *password);
