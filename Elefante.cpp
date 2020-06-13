#include "Elefante.h"
#include "Tablero.h"

Elefante::Elefante(int i, int j, bool jug, char type):Pieza(i, j, jug, type){
	
}

bool Elefante::valido(int i, int j, Tablero* tab){
	if( ( (this->fila-2)==i && ( (this->columna-2)==j || (this->columna+2)==j) ) || 
	    ( (this->fila+2)==i && ( (this->columna-2)==j || (this->columna+2)==j) ) ){
		
		
			return true;
		
	}else{
		return false;
	}
}
