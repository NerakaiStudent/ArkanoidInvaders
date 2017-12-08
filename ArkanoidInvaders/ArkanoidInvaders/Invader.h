#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>

class Invader
{
public:
	Invader(sf::Texture & tex);
	~Invader();

	void setPosition(sf::Vector2f pos);
	void render(sf::RenderWindow & window);

	sf::Sprite getSprite();
private:
	sf::Vector2f m_position;
	sf::Vector2f m_velocity;
	sf::Sprite m_shape;

	bool m_alive;
};