//#include "ExpertCOR.h"
//
//
//#pragma once
//
//#include <stdlib.h>
//#include "ExpertCOR.h"
//	
//ExpertCOR::ExpertCOR(ExpertCOR * expertSuivant):suivant(suivant) { }
//
//
//S * ExpertCOR::resoudre (const D & d) const
//{
//S * s = this->resoudre1(d);        // cet expert tente de r�soudre le
//									//  probl�me
//
//if  (s != NULL) 			// cet expert a trouv� une solution 
//	return s;
//
//else            			// �chec de cet expert
//
//	if  (this->suivant != NULL)  		// le probl�me est transmis �   
//										// l�expert suivant
//		return this->suivant->resoudre(d);
//
//	else    // cet expert est le dernier de la cha�ne
//		return NULL; // donc �chec de la cha�ne
//}
//
//
//
