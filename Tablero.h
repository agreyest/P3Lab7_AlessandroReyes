#ifndef TABLERO_H
#define TABLERO_H

#include "Casilla.h"

class Tablero
{
	public:
		Tablero();
		
		void marcarCasilla(int,int,char);
		void printTablero();
		bool Check(int, int);
		
		~Tablero();
	protected:
		//matriz de apuntadores a casillas
		Casilla*** matriz; 
		int size;
};

#endif
