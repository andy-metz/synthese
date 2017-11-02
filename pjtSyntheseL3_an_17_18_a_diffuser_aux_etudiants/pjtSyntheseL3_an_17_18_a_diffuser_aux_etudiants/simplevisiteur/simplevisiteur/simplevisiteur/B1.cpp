#include <iostream>
#include <typeinfo>

using namespace std;

#include "VisiteurA1B1C1.h"
#include "B1.h"


void B1::f()
{
cout << typeid(*this).name() << endl;	// *this est de quel type ?
}

void B1::accepte(VisiteurA1B1C1 * v)
{
v->visite(this);						// Quelle méthode visite(...) de la classe VisiteurA1B1C1 est appelée ?
}