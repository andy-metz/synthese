#pragma once

#include "VisiteurVerbe.h"

/**

conjugue les verbes au participe pass�

Ex : pour le verbe "danser", on obtient "dans�"
pour le verbe "grandir", on obtient "grandi"

*/
class ParticipePasse : public VisiteurVerbe
{

public:
const static char eAccentAigu; // �
const string visite(const Verbe1erGroupe * verbe) const;
const string visite(const Verbe2emeGroupe * verbe) const;
};

