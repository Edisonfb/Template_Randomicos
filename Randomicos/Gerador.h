#pragma once
#include <math.h>
class Gerador
{
private:
	unsigned int seed, a, c, m;

public:

	Gerador();
	~Gerador();

	double Random();
	double Uniforme(double limite_inferior, double limite_superior);
	double Exponencial(double media);
	double normal(double media, double desviopadrao);
	
	inline void ChangeSeed(int x) { seed = x; }

};

