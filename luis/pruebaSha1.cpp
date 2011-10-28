#include <iostream>
#include "./src/base64.h"
#include "./src/hashlibpp.h"
#include <cstring>

char* passwordEnBase64(char *password)
{
    hashwrapper *h = new sha1wrapper();
    std::string sha1 = h->getHashFromString(password);
    std::string encabezado = "{SHA}";
    sha1 = encabezado + sha1;
    delete h;
    char *valor = new char[sha1.size() + 1];
    strcpy(valor, sha1.c_str());
    return valor;
}

int main ( int argc, char **argv)
{
    char *password = new char[21];
    std::cin >> password;
    std::cout << passwordEnBase64(password) << std::endl;
    return 0;
}

