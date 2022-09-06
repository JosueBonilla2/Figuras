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

class Cuadrado : public Formas
{
	//atributos

	private:
		int dimencion;

	//metodos

	public:

		Cuadrado(int _dimencion, int _posicion_x, int _posicion_y) : Formas(_posicion_x, _posicion_y)
		{
			dimencion = _dimencion;
		}

		void mover_forma() {
			Formas::mover_forma();
			int x=1, y=1;
			char opcion;
			opcion = _getch();

			while (opcion != 'z')
			{
				system("cls");
				cout << "\t\tIngrese (z) para salir del modo mover figura";
				gotoxy(x,y);

				crear_forma();
			
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

		void mover_forma_vacia() {
			Formas::mover_forma_vacia();
			int x=1, y=1;
			char opcion;
			opcion = _getch();

			while (opcion != 'z')
			{
				system("cls");
				cout << "\t\tIngrese (z) para salir del modo mover figura";
				
				Formas::gotoxy(x,y);

				crear_forma_vacia();

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

		void crear_forma() {
			Formas::crear_forma();
			for (int c = 0; c < posicion_y; c++) {
				cout << endl;
			}
				for (int x = 1; x <= dimencion; x++)
				{
					for (int c = 0; c < posicion_x; c++) {
						cout << " ";
					}
					for (int y = 1; y <= dimencion; y++)
					{
						cout << "* ";
					}
					cout << "\n";
				}
		}

		void crear_forma_vacia() {
			Formas::crear_forma_vacia();
			for (int c = 0; c < posicion_y; c++) {
				cout << endl;
			}
				for (int x = 1; x <= dimencion; x++)
				{
					for (int c = 0; c < posicion_x; c++) {
						cout << " ";
					}
					for (int y = 1; y <= dimencion; y++)
					{
						if (x == 1 || y == 1 || y == dimencion || x == dimencion)
						{
							cout << "* ";
						}
						else {
							cout << "  ";
						}
					}
					cout << endl;
				}
		}

	void set(int d) {
		Formas::set(dimencion);
		dimencion = d;
	}

	int get() {
		Formas::get();
		if (dimencion > 1) {
			return dimencion;
		}
		else {
			cout << "EL dato no corresponde, tiene que ser un numero mayor a 1" << endl;
			system("cls");
		}
	}
};

