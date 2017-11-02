#include <iostream>
#include <string>


using namespace std;

#include "Fraction.h"
#include "Erreur.h"

int main1()
{
try
{
Fraction x1(2,3);

int a = x1.getNum();
unsigned int b = x1.getDen();

cout << "x1 = "<< x1 << endl;
cout << "a = "<< a << endl;
cout << "b = "<< b << endl;
char ch; cin >> ch;
}
catch(Erreur e)
{
cerr << e << endl;
}
try
{
Fraction x1(2,-3);

int a = x1.getNum();
unsigned int b = x1.getDen();

cout << "x1 = "<< x1 << endl;
cout << "a = "<< a << endl;
cout << "b = "<< b << endl;
char ch; cin >> ch;
}
catch(Erreur e)
{
cerr << e << endl;
}
try
{
Fraction x1(-2,-3);

int a = x1.getNum();
unsigned int b = x1.getDen();

cout << "x1 = "<< x1 << endl;
cout << "a = "<< a << endl;
cout << "b = "<< b << endl;
char ch; cin >> ch;
}
catch(Erreur e)
{
cerr << e << endl;
}

try
{
Fraction x1(2,0);

int a = x1.getNum();
unsigned int b = x1.getDen();

cout << "x1 = "<< x1 << endl;
cout << "a = "<< a << endl;
cout << "b = "<< b << endl;
char ch; cin >> ch;
}
catch(Erreur e)
{
cerr << e << endl;
}

char ch; cin >> ch;
return 0;
}