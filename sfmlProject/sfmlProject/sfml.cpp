#include<SFML/Graphics.hpp>
using namespace sf;
#include<iostream>
using namespace std;

// id�e jeu de rapidit� et al�atoire un piano tiles?

int main()
{
	// cr�ation de fenetre
	RenderWindow window(VideoMode(1000, 700), "Project SFML");

	// Cr�ation d'apparition rectangle













	// 4 touches : Fl�ches
	
	if (Keyboard::isKeyPressed(Keyboard::Left))
	{
		// a voir ce qui se passe : �tincelle ?
	}

	if (Keyboard::isKeyPressed(Keyboard::Right))
	{
		// a voir ce qui se passe : �tincelle ?
	}

	if (Keyboard::isKeyPressed(Keyboard::Up))
	{
		// a voir ce qui se passe : �tincelle ?
	}

	if (Keyboard::isKeyPressed(Keyboard::Down))
	{
		// a voir ce qui se passe : �tincelle ?
	}


	// apparition al�atoire d'une des 4 touches sur la fen�tre
	// touch� la touche indiqu�e dans le temps imparti 

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}

