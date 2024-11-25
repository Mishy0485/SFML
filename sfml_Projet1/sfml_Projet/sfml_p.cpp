#include<SFML/Graphics.hpp>
using namespace sf;
#include<iostream>
using namespace std;

// idée : jeu de rapidite et aleatoire un piano tiles?
// compteur de vie

int main()
{
	// creation de fênètre
	RenderWindow window(VideoMode(560, 600), "Project SFML");
	
	// Création d'apparition rectanglulaire

	RectangleShape rec(Vector2f(80.f, 80.f));
	rec.setFillColor(Color::White); 
	rec.setPosition(60.f, 60.f);    

	RectangleShape rec1(Vector2f(80.f, 80.f));
	rec1.setFillColor(Color::White); 
	rec1.setPosition(180.f, 60.f);    

	RectangleShape rec2(Vector2f(80.f, 80.f));
	rec2.setFillColor( Color::White); 
	rec2.setPosition (300.f, 60.f);    

	RectangleShape rec3(Vector2f(80.f, 80.f));
	rec3.setFillColor(Color::White); 
	rec3.setPosition(420.f, 60.f);    


	// Images : 4 flèches
	
	Texture texture;
	if (!texture.loadFromFile("fleche gauche1.jpg")) {
		return -1; // Erreur si le fichier est introuvable
	}
	Sprite sprite;
	sprite.setTexture(texture);
	sprite.setPosition(Vector2f(60.f, 60.f));

	Texture texture1;
	if (!texture1.loadFromFile("fleche haut1.jpg")) {
		return -1; // Erreur si le fichier est introuvable
	}
	Sprite sprite1;
	sprite.setTexture(texture1);
	sprite.setPosition(Vector2f(180.f, 60.f));

	Texture texture2;
	if (!texture2.loadFromFile("fleche droite1.jpg")) {
		return -1; // Erreur si le fichier est introuvable
	}
	Sprite sprite2;
	sprite.setTexture(texture2);
	sprite.setPosition(Vector2f(300.f, 60.f));

	Texture texture3;
	if (!texture3.loadFromFile("fleche bas1.jpg")) {
		return -1; // Erreur si le fichier est introuvable
	}
	Sprite sprite3;
	sprite.setTexture(texture3);
	sprite.setPosition(Vector2f(420.f, 60.f));





	// 4 touches : Fleches

	if (Keyboard::isKeyPressed(Keyboard::Left))
	{
		// a voir ce qui se passe :  etincelle ?
	}

	if (Keyboard::isKeyPressed(Keyboard::Right))
	{
		// a voir ce qui se passe :  etincelle ?
	}

	if (Keyboard::isKeyPressed(Keyboard::Up))
	{
		// a voir ce qui se passe :  etincelle ?
	}

	if (Keyboard::isKeyPressed(Keyboard::Down))
	{
		// a voir ce qui se passe :  etincelle ?
	}


	// apparition aleatoire d'une des 4 touches sur la fenetre
	// touche la touche indiquee dans le temps imparti 

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(rec);
		window.draw(sprite);
		window.draw(rec1);
		window.draw(sprite1);
		window.draw(rec2);
		window.draw(sprite2);
		window.draw(rec3);
		window.draw(sprite3);
		window.display();
	}

	return 0;
}

// menu de départ avec start ou exit? a faire a la fin
// fleche apparait aleatoirement a un emplacement donné
// si le touche coresspondante est appuyé score + 5
// sinon compteur de vie diminue ( 5 vies )
// quand perdu pop_up avec le score / si gagné avgec le score et le nb de vies restantes 

/* 
for 

if */