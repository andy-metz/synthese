#include "ParticipePasse.h"


/**

conjugue les verbes au participe pass�

Ex : pour le verbe "danser", on obtient "dans�"
pour le verbe "grandir", on obtient "grandi"

*/

const /*static*/ char ParticipePasse::eAccentAigu = 130; // �

const string ParticipePasse::visite(const Verbe1erGroupe * verbe) const
{
return verbe->getRadical()+ParticipePasse::eAccentAigu;
}
const string ParticipePasse::visite(const Verbe2emeGroupe * verbe) const
{
return verbe->getRadical()+"i";
}
