#include "Player.h"

Player::Player()
{

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	setTexture(&texture);
	setSize(sf::Vector2f(100, 100));
	setPosition(100, 100);

	velocity = { 0, 0 };
}

Player::~Player()
{

}

// handle user input
void Player::handleInput(float dt) {
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		std::cout << "me when im moving right" << std::endl;
		setVelocity(200.f, 0);
	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		setVelocity(-200.f, 0);
	}
	if (input->isKeyDown(sf::Keyboard::Left) == (input->isKeyDown(sf::Keyboard::Right))) {
		setVelocity(0, 0);
	}

}

void Player::update(float dt)  {
	move(velocity.x * dt, 0);
}

