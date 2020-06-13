#include <iostream>
#include "Tablero.h"
#include "Pieza.h"
#include "Chaturanga.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Chaturanga* game = new Chaturanga();
	int resp;
	cout<<"Desea jugar(1 = si)? : ";
	cin>>resp;
	if(resp != resp){
		cout<<"Gracias por usar el juego.";
	}
	
	cout<<endl<<"Si en algun momento desea salir del juego, escriba (salir)"<<endl;
	while(resp == 1){
		game->Play();
		
		cout<<"Desea jugar(1 = si)? : ";
		cin>>resp;
		if(resp != resp){
		cout<<"Gracias por usar el juego.";
		}
	}
	delete game;
	return 0;
}
