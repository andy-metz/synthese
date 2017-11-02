#include <iostream>

using namespace std;

#include "Visiteur2A1B1C1.h"


/*virtual*/ void Visiteur2A1B1C1::visite(A1 * a1)
{
cout << "visiteur 2 de la classe A1" << endl;
}

/*virtual*/ void Visiteur2A1B1C1::visite(B1 * b1)
{
cout << "Visiteur 2 de la classe B1" << endl;
}

/*virtual*/ void Visiteur2A1B1C1::visite(C1 * c1)
{
cout << "Visiteur 2 de la classe C1" << endl;
}