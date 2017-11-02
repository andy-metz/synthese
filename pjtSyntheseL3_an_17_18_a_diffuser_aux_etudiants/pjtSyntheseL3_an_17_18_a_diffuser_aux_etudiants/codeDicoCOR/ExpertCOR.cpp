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
//S * s = this->resoudre1(d);        // cet expert tente de résoudre le
//									//  problème
//
//if  (s != NULL) 			// cet expert a trouvé une solution 
//	return s;
//
//else            			// échec de cet expert
//
//	if  (this->suivant != NULL)  		// le problème est transmis à   
//										// l’expert suivant
//		return this->suivant->resoudre(d);
//
//	else    // cet expert est le dernier de la chaîne
//		return NULL; // donc échec de la chaîne
//}
//
//
//
