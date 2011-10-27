#include <iostream>
#include "./src/base64.h"
#include "./src/hashlibpp.h"
#include <cstring>

std::string base(std::string str) {
    int tamano = str.length();
    char *cadena = new char[tamano + 1];
    strcpy(cadena, str.c_str());
    //std::cout << "cadena[]: ";
    //for (int i = 0; i < tamano; i++){
    //    std::cout << cadena[i];
    //}
    return base64_encode((unsigned char*)cadena, (unsigned int)tamano);
}

int main ( int argc, char **argv)
{
    hashwrapper *h = new sha1wrapper();
    //h->test();
    std::string sha1 = h->getHashFromString("123321...");
    std::cout << "sha1-hex: " << sha1 << std::endl;
    //sha1 = base(sha1);
    std::cout << std::endl;
    //std::cout << "base64: " << sha1 << std::endl;
    delete h;
}

//EOF
