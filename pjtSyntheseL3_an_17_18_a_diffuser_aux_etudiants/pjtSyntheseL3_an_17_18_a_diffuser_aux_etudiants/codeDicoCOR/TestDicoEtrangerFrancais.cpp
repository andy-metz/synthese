#include <string>
#include <iostream>

#include "DicoEtrangerFrancais.h"
#include "DicoEtrangerFrancaisCOR.h"
#include "DicoAnglaisFrancaisCOR.h"
#include "DicoEspagnolFrancaisCOR.h"
#include "DicoAllemandFrancaisCOR.h"

#define LONGUEUR_DONNEE 500
using namespace std;

int main()
{
DicoEtrangerFrancais * dicoEtrangerFrancais ;
DicoEtrangerFrancaisCOR * dicoAnglaisFrancais, * dicoAllemandFrancais, * dicoEspagnolFrancais;


//on construit la chaîne de responsabilité. 
// Dans une version définitive, ceci devrait être réalisé ailleurs à l'aide du design pattern FACADE

dicoAnglaisFrancais = new DicoAnglaisFrancaisCOR(NULL);

dicoAllemandFrancais = new DicoAllemandFrancaisCOR(dicoAnglaisFrancais);

dicoEspagnolFrancais = new DicoEspagnolFrancaisCOR(dicoAllemandFrancais);


dicoEtrangerFrancais = dicoEspagnolFrancais;


cout << "chaîne de responsabilité construite : " << dicoEtrangerFrancais << endl << endl;


// le dictionnaire sera utilisé par l'intermédiaire de dicoEtrangerFrançais qui pointe sur le 1er maillon de la chaîne

// Dans la suite, le client (c-à-d main()) ignore la nature du dictionnaire, il ne doit connaître que l'interface 

cout <<"Tapez la chaîne à traduire en Français : ";
char donnee[LONGUEUR_DONNEE];
const char *  resultat;

cin.getline(donnee,LONGUEUR_DONNEE-1,'\n');

resultat = dicoEtrangerFrancais->traduit(donnee);

const char * reponse = resultat ? resultat : "non connue dans notre dictionnaire";

cout << "La traduction de : " <<  donnee <<" est : " <<reponse << endl;

char ch; cin >> ch;

DicoEtrangerFrancaisCOR::effaceTout((DicoEtrangerFrancaisCOR*&)dicoEtrangerFrancais);

return 0;
}

