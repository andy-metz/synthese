#include "PasseSimple.h"



const /*static*/ char PasseSimple::aAccentCirconflexe = 131; // �
const /*static*/ char PasseSimple::iAccentCirconflexe = 140; // �

/**

conjugue les verbes � la 1�re personne du pluriel du pass� simple.

Ex : pour le verbe "danser", on obtient "nous dans�mes"
pour le verbe "grandir", on obtient "nous grand�mes"

*/
const string PasseSimple::visite(const Verbe1erGroupe * verbe) const
{
return "nous "+verbe->getRadical()+PasseSimple::aAccentCirconflexe+"mes";
}
const string PasseSimple::visite(const Verbe2emeGroupe * verbe) const
{
return "nous "+verbe->getRadical()+PasseSimple::iAccentCirconflexe+"mes";
}