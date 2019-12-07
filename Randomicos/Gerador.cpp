#include "Gerador.h"



Gerador::Gerador()
{
	m = 2147483647;
	c = 0;
	a = 48271;
	seed = 100;
}


Gerador::~Gerador()
{
}

double Gerador::Random()
{
	unsigned int x = (a*seed + c) % m;
	seed = x;
	return ( (double)x / ( (double)m - 1) );
}

double Gerador::Uniforme(double limite_inferior, double limite_superior)
{
	return limite_inferior + (limite_superior - limite_inferior) * Random();
}


double Gerador::Exponencial(double media)
{
	

	return -media * log(1- Random());
}

double Gerador::normal(double media, double desviopadrao)
{
	double v1, v2;
	double W;

	do {
		v1 = 2 * Random() - 1;
		v2 = 2 * Random() - 1;

		W = pow(v1, 2) + pow(v2, 2);
	} while (W > 1);

	double y = pow((-2 * log(W) / W),1/2);
	v1 = v1 * y;

	return media + desviopadrao * v1;
}
