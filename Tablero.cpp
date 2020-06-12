#include "Tablero.h"

#include <iostream>
using std::cout;
using std::endl;

Tablero::Tablero(){
	size=8;
	matriz = new Casilla**[size];
	
	for(int i = 0;i<size;i++){
		matriz[i] = new Casilla*[size];
	}
	///instanciar size x size casillas
	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++)
		   matriz[i][j] = new Casilla(i,j);
	
}

Tablero::~Tablero(){
	//liberar 64 casillas
	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++){
			delete matriz[i][j];
			matriz[i][j] = NULL;
		}
		
	for(int i = 0;i<size;i++){
		delete[] matriz[i];
	}
	
	delete[] matriz;
		  
}
		
void Tablero::marcarCasilla(int i,int j, char pValue){
	this->matriz[i][j]->setValue(pValue);
}

bool Tablero::Check(int i, int j){
	if(matriz[i][j]->getValue() == '.'){
		
	}
}


void Tablero::printTablero(){
	cout<<"  	  A B C D E F G H"<<endl<<endl;
	for(int i=0;i<size;i++){
		cout<<i<<"	| ";
		for(int j=0;j<size;j++){
			cout<<matriz[i][j]->getValue()<<" ";
		}
		cout<<"|"<<endl;
	}
		
}
