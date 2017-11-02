#include <iostream>
#include "Fraction.h"
#include "ParseurFraction.h"
#include "ParseurFractionCOR.h"
#include "ParseurFractionCORVirgule.h"
#include "ParseurFractionCORSlash.h"
#include "ParseurFractionCORPourcent.h"



int main2()
{
ParseurFractionCOR * pV, *pS, * pP;

pV = new ParseurFractionCORVirgule(NULL);
pS = new ParseurFractionCORSlash(pV);
pP = new ParseurFractionCORPourcent(pS);

ParseurFraction * parseur = pP;

char * texte = "   (    2  , -3  )  ";

Fraction * x = parseur->parse(texte);

cout << " texte à parser : "<< texte <<", fraction obtenue : x = " << *x << endl;

texte = "  -17  /  12";

x = parseur->parse(texte);

cout << " texte à parser : "<< texte <<", fraction obtenue : x = " << *x << endl;


texte = "  23  %";

x = parseur->parse(texte);

cout << " texte à parser : "<< texte <<", fraction obtenue : x = " << *x << endl;


texte = "  blabla";

x = parseur->parse(texte);

char * reponse = (x ? (x->operator std::string().c_str()) : "format non reconnu");
cout << " texte à parser : "<< texte <<", fraction obtenue : x = " << reponse << endl;


char ch; cin >> ch;
return 0;
}