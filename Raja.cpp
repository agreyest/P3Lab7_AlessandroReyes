#include "Raja.h"
#include "Tablero.h"

Raja::Raja(int i , int j, bool jug, char type):Pieza(i, j, jug, type){
	
	
}


bool Raja::valido(int i, int j, Tablero* tab){
	if( ( (this->fila-1) == i && (this->columna-1) == j) || ( (this->fila-1) == i && (this->columna) == j) ||  
		( (this->fila-1) == i && (this->columna+1) == j) || ( (this->fila) == i && (this->columna-1) == j) || 
		( (this->fila) == i && (this->columna+1) == j) || ( (this->fila+1) == i && (this->columna-1) == j) ||
		( (this->fila+1) == i && (this->columna) == j) || ( (this->fila+1) == i && (this->columna+1) == j)){
		
		if(tab->Check(i,j)){
			return true;
		}
	}else{
		return false;
	}
}
