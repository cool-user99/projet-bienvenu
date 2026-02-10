#include "fonction.h"
#include <iostream>
#include <string>
#include <cstdlib> // atoi

int main(int argc, char* argv[])
{
    std::string message = "Bienvenue le monde !";
    int nbAffichage = 1;

    if (argc >= 2)
        message = argv[1];

    if (argc >= 3)
        nbAffichage = std::atoi(argv[2]);

    afficherBienvenue(message, nbAffichage);

    return 0;
}