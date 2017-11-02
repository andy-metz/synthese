#pragma once
#include "VisiteurVerbe.h"

/**

conjugue les verbes à la 1ère personne du pluriel du passé simple.

Ex : pour le verbe "danser", on obtient "nous dansâmes"
pour le verbe "grandir", on obtient "nous grandîmes"

*/
class PasseSimple : public VisiteurVerbe
{
public:
const static char aAccentCirconflexe; // â
const static char iAccentCirconflexe; // î
const string visite(const Verbe1erGroupe * verbe) const;
const string visite(const Verbe2emeGroupe * verbe) const;
};

