#include <iostream>
#include <typeinfo>

using namespace std;

#include "VisiteurA1B1C1.h"
#include "C1.h"


void C1::f()
{
cout << typeid(*this).name() << endl;	// *this est de quel type ?
}

void C1::accepte(VisiteurA1B1C1 * v)
{
v->visite(this);						// Quelle m�thode visite(...) de la classe VisiteurA1B1C1 est appel�e ?
}