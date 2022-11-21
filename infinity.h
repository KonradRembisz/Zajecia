#ifndef __INFINITY_H__
#define __INFINITY_H__

class Infinity
{
//! \brief konstruktor domyślny
//! Konstruktor z parametrem domyślnym 
//! ciag zer o zadanej dlugosci.
//! param[in] n - dlugosc tworzonego ciagu zer.
public:
Infinity(int n=0);

private:
int mN;
double mT;
};
#endif