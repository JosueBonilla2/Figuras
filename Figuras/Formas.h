#pragma once
#include<stdio.h>
#include<Windows.h>
#include<iostream>
#include<conio.h>
#include<set>
#include<string.h>
#include<math.h>
#include"Circulo.h"
#include"Cuadrado.h"
#include"Triangulo.h"
#include"programa.h"

using namespace std;

class Formas 
{
	protected:
		int posicion_y;
		int posicion_x;

	public:

		Formas(int _posicion_y, int _posicion_x) {
			posicion_x = _posicion_x;
			posicion_y = _posicion_y;
		}

		virtual void crear_forma();
		virtual void crear_forma_vacia();
		virtual void mover_forma();
		virtual void mover_forma_vacia();
		virtual void set(int);
		virtual int get();

		virtual void gotoxy(int x, int y) {

			HANDLE ventana;
			ventana = GetStdHandle(STD_OUTPUT_HANDLE);
			COORD cordenadas;

			cordenadas.X = posicion_x;

			SetConsoleCursorPosition(ventana, cordenadas);
		}

		virtual void setY(int y_) {
			posicion_y = y_;
		}

		virtual int getY() {
			return posicion_y;
		}

		virtual void setX(int x_) {
			posicion_x = x_;
		}

		virtual int getX() {
			return posicion_x;
		}
};

