#pragma once

#include<stdio.h>
#include<Windows.h>
#include<iostream>
#include<set>
#include<string.h>
#include<math.h>
#include<conio.h>

using namespace std;

class Circulo
{
private:

	int radio = 0;
	int posicion_y, posicion_x;

public:

	void craer_circulo() {
		for (int c = 0; c <= posicion_y; c++) {
			cout << endl;
		}
		for (int x = 0; x <= radio * 2; x++)
		{
			for (int c = 0; c <= posicion_x; c++) {
				cout << " ";
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

	void setRadio(int r) {
		radio = r;
	};

	int getRadio() {
		if (radio > 1) {
			return radio;
		}
		else {
			cout << "EL dato no corresponde, tiene que ser un numero mayor a 1" << endl;
			system("cls");
		}
	}

	void setY(int y_) {
		posicion_y = y_;
	}

	int getY() {
		return posicion_y;
	}

	void setX(int x_) {
		posicion_x = x_;
	}

	int getX() {
		return posicion_x;
	}
};

