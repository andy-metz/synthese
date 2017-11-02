#include "PasseSimple.h"



const /*static*/ char PasseSimple::aAccentCirconflexe = 131; // â
const /*static*/ char PasseSimple::iAccentCirconflexe = 140; // î

/**

conjugue les verbes à la 1ère personne du pluriel du passé simple.

Ex : pour le verbe "danser", on obtient "nous dansâmes"
pour le verbe "grandir", on obtient "nous grandîmes"

*/
const string PasseSimple::visite(const Verbe1erGroupe * verbe) const
{
return "nous "+verbe->getRadical()+PasseSimple::aAccentCirconflexe+"mes";
}
const string PasseSimple::visite(const Verbe2emeGroupe * verbe) const
{
return "nous "+verbe->getRadical()+PasseSimple::iAccentCirconflexe+"mes";
}