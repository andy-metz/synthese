#include <iostream>
/**
Test des fonctionnalit�s de la hi�rarchie (Expression, Variable, Constante, OpBinaire, Plus, Fois).
Cette hi�rarchie sert � repr�senter, sous forme d'arbre, des fonctions maths de la forme :
x |---> x
x |---> -7
x |---> 18*x
x |---> 4*x*x + 11*x +- 6
x |---> (x - 2)*(x + 3)
etc.

Cette hi�rarchie est munie des fonctionnalit�s : �valuer et conversion en string

Elle est munie d'un visiteur qui permet d'ajouter d'autres fonctionnalit�s. 
Ce visiteur permet d'ajouter le calcul de d�riv�e

*/
using namespace std;

#include "Expression.h"
#include "Variable.h"
#include "Constante.h"
#include "Plus.h"
#include "Fois.h"

int main()
{
Expression * e, * e1, * e2, * e3, * e4, * e5, * e6;

// on va construire la fct f : x |--->  f(x) = x^2 + x - 6
// on va la construire sous forme factoris�e : f(x) = (x - 2)(x + 3)

e1 = new Variable;
e2 = new Constante(-2);
e3 = new Plus(e1,e2);		// on a construit x |---> x - 2

e4 = new Variable;
e5 = new Constante(3);
e6 = new Plus(e4,e5);		// on a construit x |--> x + 3

e = new Fois(e3,e6); // on a construit x |---> (x - 2)(x + 3)

cout << "e1 = " << e1 << endl;		// doit afficher e1 = x
cout << "e2 = " << e2 << endl;		// doit afficher e2 = -2
cout << "e = " << e << endl;		// doit afficher e = ((x+-2)*(x+3))

//------------ on teste l'�valuation de l'expression construite ------------------------------

double x = 7; 
double y = e->evaluer(x); // doit obtenir (7-2)(7+3) = 5*10 = 50

cout << "Evaluation pour x = " << x <<", on obtient : " << y << endl;

// -------------------- on teste le clonage -----------------------------

Expression * copie = e->clone();

// on modifie l'arbre original
((Constante *)e2)->valeur = -4;
((Constante *)e5)->valeur = 1;

cout << "copie = " << copie << endl;	// doit afficher copie = ((x+-2)*(x+3))
cout << "e = " << e << endl;			// doit afficher e = ((x+-4)*(x+1))

// -------------------------- on teste le destructeur virtuel --------------------

delete copie;

cout << "la copie a �t� effac�e, e = " << e << endl;			// doit afficher e = ((x+-4)*(x+1))1

//-------------- la suite doit faire planter le pgm car l'arbre copie n'existe plus --------------------------

char ch; cin >> ch;

// cout << "copie = " << copie << endl;	// se plante

return 0;
}