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


//on construit la cha�ne de responsabilit�. 
// Dans une version d�finitive, ceci devrait �tre r�alis� ailleurs � l'aide du design pattern FACADE

dicoAnglaisFrancais = new DicoAnglaisFrancaisCOR(NULL);

dicoAllemandFrancais = new DicoAllemandFrancaisCOR(dicoAnglaisFrancais);

dicoEspagnolFrancais = new DicoEspagnolFrancaisCOR(dicoAllemandFrancais);


dicoEtrangerFrancais = dicoEspagnolFrancais;


cout << "cha�ne de responsabilit� construite : " << dicoEtrangerFrancais << endl << endl;


// le dictionnaire sera utilis� par l'interm�diaire de dicoEtrangerFran�ais qui pointe sur le 1er maillon de la cha�ne

// Dans la suite, le client (c-�-d main()) ignore la nature du dictionnaire, il ne doit conna�tre que l'interface 

cout <<"Tapez la cha�ne � traduire en Fran�ais : ";
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

