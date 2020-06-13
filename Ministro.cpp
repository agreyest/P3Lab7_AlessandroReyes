#include "Ministro.h"

Ministro::Ministro(int i, int j, bool jug, char type):Pieza(i, j, jug, type){
	
}

bool Ministro::valido(int i, int j, Tablero* tab){
	if( ( (this->fila-1)==i && ( (this->columna-1)==j || (this->columna+1)==j) ) || 
	    ( (this->fila+1)==i && ( (this->columna-1)==j || (this->columna+1)==j) ) ){
		
		/*
		if(tab->Check(i,j)){
			return true;
		}else{
			return false;
		}
		*/
	}else{
		return false;
	}
}
