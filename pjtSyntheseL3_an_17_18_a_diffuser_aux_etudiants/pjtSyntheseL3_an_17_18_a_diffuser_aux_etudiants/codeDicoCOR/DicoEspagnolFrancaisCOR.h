#pragma once
#include <vector>
using namespace std;

#include "DicoEtrangerFrancaisCOR.h"

class DicoEspagnolFrancaisCOR : public  DicoEtrangerFrancaisCOR
{
vector<char *>  l1, l2;

public :
	
DicoEspagnolFrancaisCOR(DicoEtrangerFrancaisCOR * suivant);


/**
convertit uniquement ce maillon
*/
virtual const string toString1() const;

/**
 * savoir-faire de ce traducteur de la chaîne
 * */
protected:
virtual const char * traduit1(const char * texte) const;
};
