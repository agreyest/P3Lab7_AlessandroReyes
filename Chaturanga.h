#ifndef CHATURANGA_H
#define CHATURANGA_H

#include "Tablero.h"
#include "Pieza.h"

class Chaturanga
{
	public:
		Chaturanga();
		
		void Play();
		
		~Chaturanga();
	protected:
		Tablero* tablero;
};

#endif
