
/*
Test des fonctionnalit�s de la hi�rarchie des verbes
*/

#include <iostream>

#include "Erreur.h"
#include "Verbe.h"
#include "Verbe1erGroupe.h"
#include "Verbe2emeGroupe.h"

#include "PasseSimple.h"
#include "ParticipePasse.h"

using namespace std;

int main()
{
try
{
Verbe * v1, *v2, *v3;


char nomVerbe[7];
strcpy(nomVerbe,"fr�mir");
nomVerbe[2] = ParticipePasse::eAccentAigu;

v1 = new Verbe1erGroupe("danser");
v2 = new Verbe2emeGroupe(nomVerbe);	// fr�mir

cout << v1->conjugue1erePersonneSingulier() << endl;
cout << v2->conjugue1erePersonneSingulier() << endl;
cout << v1->conjugue1erePersonnePluriel() << endl;
cout << v2->conjugue1erePersonnePluriel() << endl;

cout << v1->accepte(new PasseSimple) << endl;
cout << v2->accepte(new PasseSimple) << endl;

cout << v1->accepte(new ParticipePasse) << endl;
cout << v2->accepte(new ParticipePasse) << endl;

v3 = new Verbe1erGroupe("dissoudre");	// lance une Erreur

}
catch(Erreur erreur)
	{
	cerr << erreur << endl;
	}

char ch;
cin >> ch;

return 0;
}