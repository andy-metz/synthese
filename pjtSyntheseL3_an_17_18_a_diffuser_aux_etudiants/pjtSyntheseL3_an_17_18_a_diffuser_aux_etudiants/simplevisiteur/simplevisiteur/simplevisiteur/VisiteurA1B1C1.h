#pragma once
#include "A1.h"
#include "B1.h"
#include "C1.h"

/**
Classe de base des nouvelles fonctionnalit�s "oubli�es" qu'on va ajouter � la hi�rarchie ( A1, B1, C1)

*/

class VisiteurA1B1C1
{
public:
virtual void visite(A1 * a1) = 0;
virtual void visite(B1 * b1) = 0;
virtual void visite(C1 * c1) = 0;
};

