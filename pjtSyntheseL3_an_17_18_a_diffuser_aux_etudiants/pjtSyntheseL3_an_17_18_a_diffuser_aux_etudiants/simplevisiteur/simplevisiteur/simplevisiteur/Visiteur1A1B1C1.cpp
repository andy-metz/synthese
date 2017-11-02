#include <iostream>

using namespace std;

#include "Visiteur1A1B1C1.h"




/*virtual*/ void Visiteur1A1B1C1::visite(A1 * a1)
{
cout << "bonjour, petit a1" << endl;
}

/*virtual*/ void Visiteur1A1B1C1::visite(B1 * b1)
{
cout << "salut, petit b1" << endl;
}

/*virtual*/ void Visiteur1A1B1C1::visite(C1 * c1)
{
cout << "ciao, petit c1" << endl;
}