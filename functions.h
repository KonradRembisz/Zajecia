#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

//! \defgroup numFunctions Funkcje numeryczne

//! \defgroup StatFunctions Funkcje statystyczne
//! \addtogroup numFunctions
//! |{
//! \brief Funkcja wyznaczajaca pierwiastek trzeciego stopnia.
double fun3(double x);

//! \brief Funkcja wyznaczjaca trzecia potege.
//! Jezeli \f$ x \f$ jest argumentem funkcji to w wyniku jej dzialania
//! otrzymujemy wartosc \f$ x^3 \f$.
double pow3(double x);

//! \}

//! \addtogroup statFunctions
//! \{
//! \brief Funkcja wyznaczaja srednia arytmetyczna.
double avg(double *x, int n);

//! \brief Funkcja wyznaczaja wariancje.
double var(double *x, int n);

//! \}
#endif