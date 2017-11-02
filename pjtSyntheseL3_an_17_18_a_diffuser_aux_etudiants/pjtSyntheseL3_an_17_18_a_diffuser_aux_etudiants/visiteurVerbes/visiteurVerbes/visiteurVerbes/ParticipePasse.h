#pragma once

#include "VisiteurVerbe.h"

/**

conjugue les verbes au participe passé

Ex : pour le verbe "danser", on obtient "dansé"
pour le verbe "grandir", on obtient "grandi"

*/
class ParticipePasse : public VisiteurVerbe
{

public:
const static char eAccentAigu; // é
const string visite(const Verbe1erGroupe * verbe) const;
const string visite(const Verbe2emeGroupe * verbe) const;
};

