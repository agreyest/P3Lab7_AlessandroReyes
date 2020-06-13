#ifndef RAJA_H
#define RAJA_H
#include "Pieza.h"
//rey
class Raja: public Pieza{
	public:
		
		Raja(int, int, bool, char);
		bool valido(int, int, Tablero*);
		
	protected:
		
};

#endif
