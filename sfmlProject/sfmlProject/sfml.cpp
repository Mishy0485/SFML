#include<SFML/Graphics.hpp>
using namespace sf;
#include<iostream>
using namespace std;

// idée jeu de rapidité et aléatoire un piano tiles?

int main()
{
	// création de fenetre
	RenderWindow window(VideoMode(1000, 700), "Project SFML");

	// Création d'apparition rectangle













	// 4 touches : Flèches
	
	if (Keyboard::isKeyPressed(Keyboard::Left))
	{
		// a voir ce qui se passe : étincelle ?
	}

	if (Keyboard::isKeyPressed(Keyboard::Right))
	{
		// a voir ce qui se passe : étincelle ?
	}

	if (Keyboard::isKeyPressed(Keyboard::Up))
	{
		// a voir ce qui se passe : étincelle ?
	}

	if (Keyboard::isKeyPressed(Keyboard::Down))
	{
		// a voir ce qui se passe : étincelle ?
	}


	// apparition aléatoire d'une des 4 touches sur la fenêtre
	// touché la touche indiquée dans le temps imparti 

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

