//#pragma once
#ifndef DICOETRANGERFRANCAIS_H_
#define DICOETRANGERFRANCAIS_H_

#include <string>
#include <iostream>

using namespace std;

class DicoEtrangerFrancais
{
/**
 * 
 * traduit texte en fran�ais. texte peut �tre un mot, un groupe nominal, une phrase, etc. �crite dans une langue �trang�re
 * 
 * en cas d'�chec, retourne NULL
 *
 * */
public:
	
virtual const string toString() const = 0;
virtual const char * traduit(const char *  texte) const = 0;
};

ostream & operator << (ostream & os, const DicoEtrangerFrancais * dicoEtrangerFrancais);
#endif
