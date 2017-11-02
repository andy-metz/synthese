#include <stdio.h>
#include <iostream>
#include <vector>
#include "Fraction.h"
#include "ParseurFraction.h"
#include "ParseurFractionCOR.h"
#include "ParseurFractionCORVirgule.h"
#include "ParseurFractionCORSlash.h"
#include "ParseurFractionCORPourcent.h"
#include "ChargeurListeFraction.h"

using namespace std;

int main3()
{
cout << "essai du parsing d'un fichier texte contenant une fraction par ligne" << endl;

ParseurFractionCOR * pV, *pS, * pP;

pV = new ParseurFractionCORVirgule(NULL);
pS = new ParseurFractionCORSlash(pV);
pP = new ParseurFractionCORPourcent(pS);

ParseurFraction * parseur = pP;

//FILE * file;

FILE * file = fopen("F:\\Dom\\enseignement\\projet_synthese_L3\\exo_parseur_fractions\\riri.txt","rt");

//FILE * file = fopen_("riri.txt","rt");

if (file == NULL) cerr << "fichier non ouvert";


vector<Fraction> liste = ChargeurListeFraction::charge(file,parseur);
fclose(file);

cout << "liste de fraction obtenue : la liste est parcourue sans itérateur" << endl;

unsigned int i;
cout <<"( ";

for (i = 0; i < liste.size(); ++i)
	cout << liste[i] << ", ";

cout <<")";

char ch; cin >> ch;

return 0;
}