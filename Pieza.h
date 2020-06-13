#ifndef PIEZA_H
#define PIEZA_H
class Tablero;

class Pieza
{
	public:
		
		Pieza(int, int, bool, char);//true = blancas, flase = negras
		bool move(int, int, Tablero*);
		bool getJugador();
		bool valAdentro(int, int);
		virtual bool valido(int, int, Tablero*) =0;//fila, columna
		
		char getChar();
		void setChar(char);
		
	protected:
		int fila;
		int columna;
		char type;
		bool jugador;//true blanca abajo, false negra arriba
};

#endif
