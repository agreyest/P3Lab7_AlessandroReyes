#include "Tablero.h"

#include <iostream>
using std::cout;
using std::endl;

Tablero::Tablero(){
	size=8;
	matriz = new Pieza**[size];
	
	for(int i = 0;i<size;i++){
		matriz[i] = new Pieza*[size];
		for(int j=0;j<size;j++){
			matriz[i][j] = NULL;
		}
	}
	///instanciar size x size casillas    matriz[i][j] = new Casilla(i,j);
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			bool Marcada= false;
			if(i==0 && j==0){//torre = Ratha
				matriz[i][j] = new Ratha(i, j, false, 'T');
				Marcada= true;
			}
			if(i==0 && j==1){//caballo
				matriz[i][j] = new Caballo(i, j, false, 'C');
				Marcada= true;
			}
			if(i==0 && j==2){//elefante
				matriz[i][j] = new Elefante(i, j, false, 'E');
				Marcada= true;
			}
			if(i==0 && j==3){//Rey
				matriz[i][j] = new Raja(i, j, false, 'R');//Rey
				Marcada= true;
			}
			if(i==0 && j==4){//ministro
				matriz[i][j] = new Ministro(i, j, false, 'M');
				Marcada= true;
			}
			if(i==0 && j==5){
				matriz[i][j] = new Elefante(i, j, false, 'E');
				Marcada= true;
			}
			if(i==0 && j==6){
				matriz[i][j] = new Caballo(i, j, false, 'C');
				Marcada= true;
			}
			if(i==0 && j==7){
				matriz[i][j] = new Ratha(i, j, false, 'T');
				Marcada= true;
			}
			if(i==1 && j==0){
				matriz[i][j] = new Infanteria(i, j, false, 'I');
				Marcada= true;
			}
			if(i==1 && j==1){
				matriz[i][j] = new Infanteria(i, j, false, 'I');
				Marcada= true;
			}
			if(i==1 && j==2){
				matriz[i][j] = new Infanteria(i, j, false, 'I');
				Marcada= true;
			}
			if(i==1 && j==3){
				matriz[i][j] = new Infanteria(i, j, false, 'I');
				Marcada= true;
			}
			if(i==1 && j==4){
				matriz[i][j] = new Infanteria(i, j, false, 'I');
				Marcada= true;
			}
			if(i==1 && j==5){
				matriz[i][j] = new Infanteria(i, j, false, 'I');
				Marcada= true;
			}
			if(i==1 && j==6){
				matriz[i][j] = new Infanteria(i, j, false, 'I');
				Marcada= true;
			}
			if(i==1 && j==7){
				matriz[i][j] = new Infanteria(i, j, false, 'I');
				Marcada= true;
			}
			
			
			
			
			if(i==6 && j==0){
				matriz[i][j] = new Infanteria(i, j, true, 'L');
				Marcada= true;
			}
			if(i==6 && j==1){
				matriz[i][j] = new Infanteria(i, j, true, 'L');
				Marcada= true;
			}
			if(i==6 && j==2){
				matriz[i][j] = new Infanteria(i, j, true, 'L');
				Marcada= true;
			}
			if(i==6 && j==3){
				matriz[i][j] = new Infanteria(i, j, true, 'L');
				Marcada= true;
			}
			if(i==6 && j==4){
				matriz[i][j] = new Infanteria(i, j, true, 'L');
				Marcada = true;
			}
			if(i==6 && j==5){
				matriz[i][j] = new Infanteria(i, j, true, 'L');
				Marcada= true;
			}
			if(i==6 && j==6){
				matriz[i][j] = new Infanteria(i, j, true, 'L');
				Marcada= true;
			}
			if(i==6 && j==7){
				matriz[i][j] = new Infanteria(i, j, true, 'L');
				Marcada= true;
			}
			if(i==7 && j==0){
				matriz[i][j] = new Ratha(i, j, false, 'Y');
				Marcada= true;
			}
			if(i==7 && j==1){
				matriz[i][j] = new Caballo(i, j, false, 'O');
				Marcada= true;
			}
			if(i==7 && j==2){
				matriz[i][j] = new Elefante(i, j, false, '3');
				Marcada= true;
			}
			if(i==7 && j==3){
				matriz[i][j] = new Ministro(i, j, false, 'W');
				Marcada= true;
			}
			if(i==7 && j==4){
				matriz[i][j] = new Raja(i, j, false, 'P');//Rey
				Marcada= true;
			}
			if(i==7 && j==5){
				matriz[i][j] = new Elefante(i, j, false, '3');
				Marcada= true;
			}
			if(i==7 && j==6){
				matriz[i][j] = new Caballo(i, j, false, 'O');
				Marcada= true;
			}
			if(i==7 && j==7){
				matriz[i][j] = new Ratha(i, j, false, 'Y');
				Marcada= true;
			}
		}//fin forJ
	}//fin forI
		
		   
	
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
		
void Tablero::marcarCasilla(int i,int j, Pieza* pValue){
	this->matriz[i][j] = pValue;
}

bool Tablero::Check(int i, int j){//si es amigo no se puede mover, si esta vacio o es enemigo se mueve
	if(matriz[i][j]->getChar() == '.'){
		
	}
}


void Tablero::printTablero(){
	cout<<"  	  A B C D E F G H"<<endl<<endl;
	for(int i=0;i<size;i++){
		cout<<i<<"	| ";
		for(int j=0;j<size;j++){
			if(matriz[i][j] == NULL){
				cout<<"."<<" ";
			}else{
				cout<<matriz[i][j]->getChar()<<" ";
			}
			
		}
		cout<<"|"<<endl;
	}
		
}
