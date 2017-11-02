#include "DicoEtrangerFrancais.h"


ostream & operator << (ostream & os, const DicoEtrangerFrancais * dicoEtrangerFrancais)
{
	return os << dicoEtrangerFrancais->toString();
}
