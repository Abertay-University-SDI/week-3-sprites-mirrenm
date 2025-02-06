#include "Level.h"
#include "Player.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects

	player1.setInput(input);
//	player1.setWindow(hwnd);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	player1.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	player1.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(player1);
	endDraw();
}
