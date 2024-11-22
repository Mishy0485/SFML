#include<SFML/Graphics.hpp>
using namespace sf;
#include<iostream>
using namespace std;

// id e jeu de rapidit  et al atoire un piano tiles?

int main()
{
	// cr ation de fenetre
	RenderWindow window(VideoMode(560, 600), "Project SFML");
	
	// Création d'apparition rectangle

	RectangleShape rec1(Vector2f(80.f, 80.f));
	rec1.setFillColor(Color::White); // Remplissage rouge
	rec1.setPosition(60.f, 60.f);    // Position centrale

	RectangleShape rec2(Vector2f(80.f, 80.f));
	rec2.setFillColor(Color::White); // Remplissage rouge
	rec2.setPosition(180.f, 60.f);    // Position centrale

	RectangleShape rec3(Vector2f(80.f, 80.f));
	rec3.setFillColor( Color::White); // Remplissage rouge
	rec3.setPosition (300.f, 60.f);    // Position centrale

	RectangleShape rec4(Vector2f(80.f, 80.f));
	rec4.setFillColor(Color::White); // Remplissage rouge
	rec4.setPosition(420.f, 60.f);    // Position centrale











	// 4 touches : Fl ches

	if (Keyboard::isKeyPressed(Keyboard::Left))
	{
		// a voir ce qui se passe :  tincelle ?
	}

	if (Keyboard::isKeyPressed(Keyboard::Right))
	{
		// a voir ce qui se passe :  tincelle ?
	}

	if (Keyboard::isKeyPressed(Keyboard::Up))
	{
		// a voir ce qui se passe :  tincelle ?
	}

	if (Keyboard::isKeyPressed(Keyboard::Down))
	{
		// a voir ce qui se passe :  tincelle ?
	}


	// apparition al atoire d'une des 4 touches sur la fen tre
	// touch  la touche indiqu e dans le temps imparti 

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(rec1);
		window.draw(rec2);
		window.draw(rec3);
		window.draw(rec4);
		window.display();
	}

	return 0;
}