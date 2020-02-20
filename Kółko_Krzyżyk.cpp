// ConsoleApplication8.cpp : Defines the entry point for the console application.
//Jan Szmyd 11k2
#include "stdafx.h"
#include <iostream>
#include <locale>
using namespace std;

char tablica[10] = { 'o','1','2','3','4','5','6','7','8','9' };

int sprawdzenie();
void plansza();

int main()
{
	setlocale(LC_ALL, "polish");
	int gracz = 1, i, wybor;

	char znak;
	do
	{
		plansza();
		gracz = (gracz % 2) ? 1 : 2;

		cout << "Gracz " << gracz << ", wybiera numer:  ";
		cin >> wybor;

		znak = (gracz == 1) ? 'X' : 'O';

		if (wybor == 1 && tablica[1] == '1')

			tablica[1] = znak;
		else if (wybor == 2 && tablica[2] == '2')

			tablica[2] = znak;
		else if (wybor == 3 && tablica[3] == '3')

			tablica[3] = znak;
		else if (wybor == 4 && tablica[4] == '4')

			tablica[4] = znak;
		else if (wybor == 5 && tablica[5] == '5')

			tablica[5] = znak;
		else if (wybor == 6 && tablica[6] == '6')

			tablica[6] = znak;
		else if (wybor == 7 && tablica[7] == '7')

			tablica[7] = znak;
		else if (wybor == 8 && tablica[8] == '8')

			tablica[8] = znak;
		else if (wybor == 9 && tablica[9] == '9')

			tablica[9] = znak;
		else
		{
			cout << "Niepoprawny ruch ";

			gracz--;
			cin.ignore();
			cin.get();
		}
		i = sprawdzenie();

		gracz++;
	} while (i == -1);
	plansza();
	if (i == 1)

		cout << "==>\aGracz " << --gracz << " wygra³ ";
	else
		cout << "==>\aRemis!";

	cin.ignore();
	cin.get();
	return 0;
}

int sprawdzenie()
{
	if (tablica[1] == tablica[2] && tablica[2] == tablica[3])

		return 1;
	else if (tablica[4] == tablica[5] && tablica[5] == tablica[6])

		return 1;
	else if (tablica[7] == tablica[8] && tablica[8] == tablica[9])

		return 1;
	else if (tablica[1] == tablica[4] && tablica[4] == tablica[7])

		return 1;
	else if (tablica[2] == tablica[5] && tablica[5] == tablica[8])

		return 1;
	else if (tablica[3] == tablica[6] && tablica[6] == tablica[9])

		return 1;
	else if (tablica[1] == tablica[5] && tablica[5] == tablica[9])

		return 1;
	else if (tablica[3] == tablica[5] && tablica[5] == tablica[7])

		return 1;
	else if (tablica[1] != '1' && tablica[2] != '2' && tablica[3] != '3'
		&& tablica[4] != '4' && tablica[5] != '5' && tablica[6] != '6'
		&& tablica[7] != '7' && tablica[8] != '8' && tablica[9] != '9')

		return 0;
	else
		return -1;
}

void plansza()
{
	system("cls");
	cout << "\n\n\tKÓ£KO KRZY¯YK\n\n";

	cout << "Gracz 1 (X)  -  Gracz 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << tablica[1] << "  |  " << tablica[2] << "  |  " << tablica[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << tablica[4] << "  |  " << tablica[5] << "  |  " << tablica[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << tablica[7] << "  |  " << tablica[8] << "  |  " << tablica[9] << endl;

	cout << "     |     |     " << endl << endl;
}
