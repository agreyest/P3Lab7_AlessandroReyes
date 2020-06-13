#ifndef INFANTERIA_H
#define INFANTERIA_H
#include "Pieza.h"

class Infanteria  : public Pieza{
	public:
		
		Infanteria(int, int, bool, char);
		bool valido(int, int, Tablero*);
		
	protected:
		
};

#endif
