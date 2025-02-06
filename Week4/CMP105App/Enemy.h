#pragma once


#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>


class Enemy : public GameObject {
public:
	Enemy();
	~Enemy();

	void handleInput(float dt) override;
	void update(float dt) override;

private:
	sf::Texture texture;
	sf::Vector2i windowSize;
	sf::Vector2f pos;
};