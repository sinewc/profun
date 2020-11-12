
#ifndef BUTTON_H
#define BUTTON_H

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<sstream>
#include<string>


#include "SFML\System.hpp"
#include "SFML\Window.hpp"
#include "SFML\Graphics.hpp"
#include "SFML\Audio.hpp"

enum button_states{BTN_IDLE =0, BTN_HOVER,BTN_ACTIVE};

class Button
{
private:
	short unsigned buttonState;

	sf::RectangleShape shape;
	sf::Texture buttonTexture;


	sf::Color idleColor;
	sf::Color hoverColor;
	sf::Color activeColor;

public:
	Button(float x, float y, float width, float height,
		std::string imagePath);
	~Button();
	//Accessors
	const bool isPressd() const;

	//Functions
	void initButton();
	void initTexture();
	void updete(const sf::Vector2f mousePos);
	void render(sf::RenderTarget* target);
};

#endif