#include "Caballo.h"
#include "Tablero.h"

Caballo::Caballo(int i, int j, bool jug, char type):Pieza(i, j, jug, type){
	
}

bool Caballo::valido(int i, int j, Tablero* tab){
	if( ( (this->fila-2)==i && ( (this->columna-1)==j || (this->columna+1)==j) ) ||
	    ( (this->columna-2)==j && ( (this->fila-1)==j || (this->fila+1)==j) )|| 
	    ( (this->fila+2)==i && ( (this->columna-1)==j || (this->columna+1)==j) )  ||
	    ( (this->columna+2)==j && ( (this->fila-1)==j || (this->fila+1)==j))){
		
		if(tab->Check(i,j)){
			return true;
		}
	}else{
		return false;
	}
}
