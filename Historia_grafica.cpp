#include <iostream>
#include <SFML/Graphics.hpp>
#include <Windows.h>
#include "Game.h"

using namespace std;
using namespace sf;

//Variables

Texture text2;
Texture text3;
Texture text4;
Texture text5;
Texture text6;
Texture text7;


Sprite sprite2;
Sprite sprite3;
Sprite sprite4;
Sprite sprite5;
Sprite sprite6;
Sprite sprite7;

int opc, condicion;

void Game::ventana() {
	RenderWindow window(VideoMode(500,500), "Historia");

	cout << "Te ofrecen un gallo  de mota\n";

	Texture text1;
	text1.loadFromFile("imagen/quieres.jpg");
	Sprite sprite1;
	sprite1.setTexture(text1);

	cout << "Lo aceptas?\n";
	cout << "Camino bonito no\nCamino feo si\n";
	Texture text2;
	text2.loadFromFile("imagen/eleccion.jpg");
	Sprite sprite2;
	sprite2.setTexture(text2);

	window.clear();
	window.draw(sprite1);
	window.display();

	system("pause");

	window.clear();
	window.draw(sprite2);
	window.display();

	cin >> opc;

	if (opc == 1) {
		cout << "Haz elejido el camino feo, buena elccion\nHaz elejido ser feliz\n";
		Texture text3;
		text3.loadFromFile("imagen/feliz.jpg");
		Sprite sprite3;
		sprite3.setTexture(text3);

		window.clear();
		window.draw(sprite3);
		window.display();

		system("pause");

		cout << "Te pusiste mamado de golpe, bien hecho campeon";
		Texture text4;
		text4.loadFromFile("imagen/sano.jpg");
		Sprite sprite4;
		sprite4.setTexture(text4);

		window.clear();
		window.draw(sprite4);
		window.display();
	}
	else if (opc == 0) {
		cout << "Haz elejido el camino bonito, muy mala elccion\nHaz elejido ser ser infeliz\n";
		Texture text5;
		text5.loadFromFile("imagen/triste.jpg");
		Sprite sprite5;
		sprite5.setTexture(text5);

		window.clear();
		window.draw(sprite5);
		window.display();

		system("pause");

		cout << "Te pusiste obeso de golpe, te moriras de obsesidad por tonto\n";
		Texture text6;
		text6.loadFromFile("imagen/gordo.jpg");
		Sprite sprite6;
		sprite6.setTexture(text6);

		window.clear();
		window.draw(sprite6);
		window.display();
	}

	bool game_over = false;

	while (!game_over) {
		window;
	}
}

int main() {
	Game a;
	a.ventana();
	return 0;
}