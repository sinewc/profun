#ifndef ENTITY_H
#define ENTITY_H
#include "MovementComponenet.h"
#include "AnimationComponent.h"

class Entity
{
private:
	void initVariables();

protected:
	sf::Sprite sprite;


	MovementComponenet* movementComponent;
	AnimationComponent* animationComponent;

public:
	Entity();  
	virtual ~Entity();

	//Component functions
	void setTexture(sf::Texture& texture);
	void setScale(sf::Vector2f);
	void createMovementComponent(const float maxVelocity,const float acceleration, const float deceleration);
	void createAnimationCoponent(sf::Sprite& sprite,sf::Texture& texture_sheet);
	//functions

	virtual void setPosition(const float x, const float y);
	virtual void move(const float x, const float y, const float& dt);

	virtual void update(const float& dt);
	virtual void render(sf::RenderTarget* target);
};
#endif

