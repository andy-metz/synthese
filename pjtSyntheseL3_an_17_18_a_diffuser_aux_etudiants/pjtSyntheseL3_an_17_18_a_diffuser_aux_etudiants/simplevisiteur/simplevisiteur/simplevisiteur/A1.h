#pragma once
class VisiteurA1B1C1;
/**
(A1, B1, C1) est la hi�rarchie de classes � laquelle on ajoute de nouvelles fonctionnalit�s gr�ce � VisiteurA1B1C1

*/
class A1
{
public:
virtual void f();
virtual void accepte(VisiteurA1B1C1 * v);
};

