#ifndef TABLERO_H
#define TABLERO_H

#include "Pieza.h"
#include "Caballo.h"
#include "Raja.h"
#include "Ratha.h"
#include "Infanteria.h"
#include "Elefante.h"
#include "Ministro.h"

class Tablero
{
	public:
		Tablero();
		
		void marcarCasilla(int,int,Pieza*);
		void printTablero();
		bool Check(int, int);
		
		~Tablero();
	protected:
		//matriz de apuntadores a casillas
		Pieza*** matriz; 
		int size;
};

#endif
