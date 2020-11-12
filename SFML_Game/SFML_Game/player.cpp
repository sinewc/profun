#include "Player.h"

//Initializer functions
void Player::initVariables()
{

}

void Player::initComponents()
{


}

//Constructor /Destructors
Player::Player(float x,float y,sf::Texture& texture_sheet)
{

	this->initVariables();

	this->setTexture(texture_sheet);
	this->setScale(sf::Vector2f(0.1, 0.1));
	this->setPosition(x, y);

	this->createMovementComponent(300.f, 15.f, 5.f);
	this->createAnimationCoponent(this->sprite, texture_sheet);

}

Player::~Player()
{


}