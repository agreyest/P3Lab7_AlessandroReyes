#include "Pieza.h"
#include "Tablero.h"

Pieza::Pieza(int fila, int colum, bool jug, char type){
	this->fila = fila;
	this->columna = fila;
	this->jugador = jug;
	this->type = type;
}
bool Pieza::move(int fila, int colum, Tablero* tab){
	if(valido(fila, colum, tab)){
		/*
		tab->marcarCasilla(fila, colum, type);
		tab->marcarCasilla(this->fila, this->columna, '.');
		*/
		return true;
	}else{
		return false;
	}
	
}
bool Pieza::getJugador(){
	return this->jugador;
}
bool Pieza::valAdentro(int fila, int colum){
	return (fila >= 0 && fila < 8) && (colum >= 0 && colum < 8);
}

char Pieza::getChar(){
	return this->type;
}
