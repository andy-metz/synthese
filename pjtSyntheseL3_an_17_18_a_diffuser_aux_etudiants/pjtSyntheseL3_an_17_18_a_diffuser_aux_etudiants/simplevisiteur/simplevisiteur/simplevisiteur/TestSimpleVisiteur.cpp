/**
Exemple pédagogique pour comprendre le fonctionnement du Design Pattern "Visitor"
*/
#include <iostream>
#include "A1.h"
#include "B1.h"
#include "C1.h"
#include "VisiteurA1B1C1.h"
#include "Visiteur1A1B1C1.h"
#include "Visiteur2A1B1C1.h"


using namespace std;

int main()
{
A1 * a1, *b1, *c1;

a1 = new A1;
b1 = new B1;
c1 = new C1;

a1->f();	// quelle méthode f est appelée ?
b1->f();	// quelle méthode f est appelée ?
c1->f();	// quelle méthode f est appelée ?

VisiteurA1B1C1 * v1, *v2;

v1 = new Visiteur1A1B1C1;
v2 = new Visiteur2A1B1C1;

a1->accepte(v1);		// quelle méthode  est finalement exécutée ?
b1->accepte(v1);		// quelle méthode  est finalement exécutée ?
c1->accepte(v1);		// quelle méthode  est finalement exécutée ?

a1->accepte(v2);		// quelle méthode  est finalement exécutée ?
b1->accepte(v2);		// quelle méthode  est finalement exécutée ?
c1->accepte(v2);		// quelle méthode  est finalement exécutée ?


char ch;
cin >> ch;
return 0;
}