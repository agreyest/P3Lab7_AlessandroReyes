#include "Ratha.h"
#include "Tablero.h"

Ratha::Ratha(int i, int j, bool jug, char type):Pieza(i, j, jug, type){
	
}
bool Ratha::valido(int i, int j, Tablero* tab){
	if( (this->fila == i && (j < this->columna || j > this->columna) ) || (this->columna == j && (this->fila < i || 
		 this->fila > i) ) ){
		
		if(tab->Check(i,j)){
			return true;
		}
	}else{
		return false;
	}
}
