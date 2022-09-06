#pragma once

#include<stdio.h>
#include<Windows.h>
#include<iostream>
#include<set>
#include<string.h>
#include<math.h>
#include<conio.h>
#include"Formas.h"

using namespace std;

class Circulo : public Formas
{
private:

	int radio = 0;

public:

	Circulo(int _radio, int _posicion_x, int _posicion_y) : Formas(_posicion_x, _posicion_y)
	{
		radio = _radio;
	}


	void mover_forma() {
		Formas::mover_forma();
		int x = 1, y = 1;
		char opcion;
		opcion = _getch();

		while (opcion != 'z' && opcion != 'x')
		{
			system("cls");
			cout << "\t\tIngrese (z) para salir del modo mover figura" ;
			gotoxy(x, y);

			craer_forma();

			opcion = _getch();
			switch (opcion)
			{
			case 'w': posicion_y--; break;
			case 's': posicion_y++; break;
			case 'a': posicion_x--; break;
			case 'd': posicion_x++; break;
			}
		}
	}

	void craer_forma() {
		Formas::crear_forma();
		for (int c = 0; c < posicion_y; c++) {
			cout << endl;
		}
		for (int x = 0; x <= radio * 2; x++)
		{
			for (int c = 0; c <= posicion_x; c++) {
						cout <<" ";
					}
			for (int y = 0; y <= radio * 2; y++)
			{
				if (pow(y - radio, 2.0) + pow(x - radio, 2.0) <= pow(radio, 2)) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << "\n";
		}
	}

	void set(int r) {
		Formas::set(radio);
		radio = r;
	};

	int get() {
		Formas::get();
		if (radio > 1) {
			return radio;
		}
		else {
			cout << "EL dato no corresponde, tiene que ser un numero mayor a 1" << endl;
			system("cls");
		}
	}

};

