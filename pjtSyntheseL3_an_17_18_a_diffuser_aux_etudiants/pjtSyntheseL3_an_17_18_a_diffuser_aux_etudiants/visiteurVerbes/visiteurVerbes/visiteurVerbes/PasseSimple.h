#pragma once
#include "VisiteurVerbe.h"

/**

conjugue les verbes � la 1�re personne du pluriel du pass� simple.

Ex : pour le verbe "danser", on obtient "nous dans�mes"
pour le verbe "grandir", on obtient "nous grand�mes"

*/
class PasseSimple : public VisiteurVerbe
{
public:
const static char aAccentCirconflexe; // �
const static char iAccentCirconflexe; // �
const string visite(const Verbe1erGroupe * verbe) const;
const string visite(const Verbe2emeGroupe * verbe) const;
};

