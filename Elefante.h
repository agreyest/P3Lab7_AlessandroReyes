#ifndef ELEFANTE_H
#define ELEFANTE_H
#include "Pieza.h"

class Elefante: public Pieza{
	public:
		
		Elefante(int, int, bool, char);
		bool valido(int, int, Tablero*);
		
	protected:
};

#endif
