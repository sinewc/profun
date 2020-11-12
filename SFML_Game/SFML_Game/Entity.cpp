#include "Entity.h"
void Entity::initVariables()
{

	this->movementComponent = NULL;
}
Entity::Entity()
{
	this->initVariables();
	
}

Entity::~Entity()
{
	delete this->movementComponent;
	delete this->animationComponent;
}

//component functions
void Entity::setTexture(sf::Texture& texture)
{
	this->sprite.setTexture(texture);
}
void Entity::setScale(sf::Vector2f scale) {
	this->sprite.setScale(scale);
}

void Entity::createMovementComponent(const float maxVelocity,const float acceleration,const float deceleration)
{
	this->movementComponent = new MovementComponenet(this->sprite, maxVelocity, acceleration, deceleration);
}

void Entity::createAnimationCoponent(sf::Sprite& sprite, sf::Texture& texture_sheet)
{
	this->animationComponent = new AnimationComponent(sprite, texture_sheet);
}

//functions
void Entity::setPosition(const float x, const float y)
{
		this->sprite.setPosition(x,y);
}

void Entity::move(const float dir_x, const float dir_y, const float& dt)
{
	if (this->movementComponent)
	{
		this->movementComponent->move(dir_x, dir_y,dt);//Sets velocity
	
	}
}

void Entity::update(const float& dt)
{
	if (this->movementComponent)
	{
		this->movementComponent->update(dt);
	}
}

void Entity::render(sf::RenderTarget* target)
{
	target->draw(this->sprite);
}
