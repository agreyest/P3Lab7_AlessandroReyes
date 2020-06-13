#ifndef CABALLO_H
#define CABALLO_H
#include "Pieza.h"

class Caballo : public Pieza{
	public:
		
		Caballo(int, int, bool, char);
		bool valido(int, int, Tablero*);
		
	protected:
};

#endif
