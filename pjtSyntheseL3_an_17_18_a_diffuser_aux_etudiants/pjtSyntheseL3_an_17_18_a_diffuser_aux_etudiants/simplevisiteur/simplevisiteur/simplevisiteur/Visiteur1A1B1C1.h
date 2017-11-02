#pragma once
#include "visiteura1b1c1.h"
/**
Représente une nouvelle fonctionnalité ajoutée à la hiérarchie (A1,B1,C1)
*/
class Visiteur1A1B1C1 : public VisiteurA1B1C1
{
public:
virtual void visite(A1 * a1);
virtual void visite(B1 * b1);
virtual void visite(C1 * c1);
};

