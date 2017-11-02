//#pragma once
#ifndef DICOETRANGERFRANCAISCOR_H_
#define DICOETRANGERFRANCAISCOR_H_

#include <string>
#include  "DicoEtrangerFrancais.h"

class DicoEtrangerFrancaisCOR : public DicoEtrangerFrancais
{
public:
DicoEtrangerFrancaisCOR * suivant;

protected:
DicoEtrangerFrancaisCOR(DicoEtrangerFrancaisCOR * suivant);

public :
virtual ~DicoEtrangerFrancaisCOR();
/**
efface tous les �l�ments de la cha�ne dico. En sortie dico == NULL
*/
static void effaceTout(DicoEtrangerFrancaisCOR * & dico);
/**
 * traduction utilisant la cha�ne de responsabilit�. algo r�cursif. parcourt la cha�ne
 * 
 * */
const char * traduit(const char * texte) const;


/** 
convertit toute la cha�ne en string donc parcourt la cha�ne
*/
const string toString() const; 

/**
convertit uniquement ce maillon
*/
virtual const string toString1() const = 0;

/**
 * savoir-faire de ce traducteur de la cha�ne
 * */
protected:
virtual const char * traduit1(const char * texte) const = 0;

}; // DictionnaireEtrangerVersFrancaisCOR

#endif

