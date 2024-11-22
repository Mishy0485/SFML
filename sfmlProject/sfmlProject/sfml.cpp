#include<SFML/Graphics.hpp>
using namespace sf;
#include<iostream>
using namespace std;

// id�e jeu de rapidit� et al�atoire un piano tiles?

/*int main()
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
}*/

int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "Affichage de Texture");

	// Charger une texture
	sf::Texture texture;
	if (!texture.loadFromFile("téléchargement.jpg")) {
		return -1; // Erreur si le fichier est introuvable
	}

	// Associer la texture à un sprite
	sf::Sprite sprite;
	sprite.setTexture(texture);

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(sprite); // Dessiner le sprite
		window.display();
	}

	return 0;
}