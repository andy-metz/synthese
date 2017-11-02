#pragma once
class VisiteurA1B1C1;
/**
(A1, B1, C1) est la hiérarchie de classes à laquelle on ajoute de nouvelles fonctionnalités grâce à VisiteurA1B1C1

*/
class A1
{
public:
virtual void f();
virtual void accepte(VisiteurA1B1C1 * v);
};

