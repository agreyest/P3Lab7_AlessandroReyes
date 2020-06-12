#include "Chaturanga.h"
#include <iostream>
using namespace std;

Chaturanga::Chaturanga(){
	this->tablero = new Tablero();
}

void Chaturanga::Play(){
	tablero->printTablero();

}

Chaturanga::~Chaturanga(){
	
}
