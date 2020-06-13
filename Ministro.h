#ifndef MINISTRO_H
#define MINISTRO_H
#include "Pieza.h"

class Ministro : public Pieza{
	public:
		
		Ministro(int, int, bool, char);
		bool valido(int, int, Tablero*);
		
	protected:
		
};

#endif
