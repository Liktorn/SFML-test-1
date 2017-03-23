#include <SFML/Graphics.hpp>
#include<iostream>


int main()
{
	const static int WIDTH = 800;
	const static int HEIGHT = 600;

	// Create the window.
	sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "SFML works!");
/*
	sf::CircleShape shape(100.f);
	sf::Vector2f start(100, 100);
	sf::Vector2f end(200, 200);
	sf::RectangleShape rect(end);
	shape.setFillColor(sf::Color::Green);
	rect.setFillColor(sf::Color::Red);
*/
	// Set the position of rect
	//rect.setPosition(50, 50);

	// Create a line
	sf::Vertex line[] =
	{
		// starting point
		sf::Vertex(sf::Vector2f(WIDTH/2, HEIGHT/2)),
		sf::Vertex(sf::Vector2f(200, 200))
	};
	// make a transform object
	sf::Transform t;



	

	// run the program as long as the window is open
	while (window.isOpen())
	{
		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event))
		{


			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();
		}

		

		window.clear();
		//window.draw(shape);
		//window.draw(rect);
		// Draw the line and rotate it using t
		t.rotate(1, (WIDTH / 2), (HEIGHT / 2));
		window.draw(line, 20, sf::Lines,t);
		window.display();
	}

	return 0;
}