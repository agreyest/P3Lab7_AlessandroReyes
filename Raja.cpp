#include "Raja.h"
bool Raja::valido(int i, int j, Tablero* tab){
	if( ( (this->fila-1) == i && (this->columna-1) == j) || ( (this->fila-1) == i && (this->columna) == j) ||  
		( (this->fila-1) == i && (this->columna+1) == j) || ( (this->fila) == i && (this->columna-1) == j) || 
		( (this->fila) == i && (this->columna+1) == j) || ( (this->fila+1) == i && (this->columna-1) == j) ||
		( (this->fila+1) == i && (this->columna) == j) || ( (this->fila+1) == i && (this->columna+1) == j)){
		
		if(this->tablero->Check(i,j)){
			return true;
		}
	}else{
		return false;
	}
}
