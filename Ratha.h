#ifndef RATHA_H
#define RATHA_H
#include "Pieza.h"
//torre
class Ratha: public Pieza{
	public:
		
		Ratha(int, int, bool, char);
		bool valido(int, int, Tablero*);
		
	protected:
		
};

#endif
