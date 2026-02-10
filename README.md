$ make rebuild
Fabrication du programme : bienvenue
rm -f *.o
g++ -c -Wall -std=c++11 bienvenue.cpp
g++ -c -Wall -std=c++11 fonction-bienvenue.cpp
g++ -o bienvenue bienvenue.o fonction-bienvenue.o
$ ./bienvenue
Bienvenue le monde !
$ ./bienvenue Bienvenue
Bienvenue
$ ./bienvenue Bienvenue 
Bienvenue
Bienvenue
$ ./bienvenue "Bonjour le monde" 3
Bonjour le monde
Bonjour le monde
Bonjour le monde