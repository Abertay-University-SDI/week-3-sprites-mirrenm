#include "Enemy.h"

Enemy::Enemy()
{

	// initialise game objects

	velocity = { 100, 50 };
	pos = { 20,70 };
	//windowSize = { window->getSize().x,window->getSize().y };

	texture.loadFromFile("gfx/Goomba.png");

	setTexture(&texture);
	setSize(sf::Vector2f(100, 100));
	setPosition(pos);

}

Enemy::~Enemy()
{

}

// handle user input
void Enemy::handleInput(float dt) {
	
	

}

void Enemy::update(float dt) {
	move(velocity.x * dt, velocity.y * dt);
}

