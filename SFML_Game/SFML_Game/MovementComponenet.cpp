#include "MovementComponenet.h"
MovementComponenet::MovementComponenet(sf::Sprite& sprite,
	float maxVelocity,float acceleration,float deceleration)
	:sprite(sprite),
	maxVelocity(maxVelocity), acceleration(acceleration), deceleration(deceleration)
{
	
}

MovementComponenet::~MovementComponenet()
{
	  
}
const sf::Vector2f& MovementComponenet::getVelocity() const
{
	return this->velocity;
}
//Functions
void  MovementComponenet::move(const float dir_x, const float dir_y,const float& dt)
{
	/*Acceleration a sprite until it reaches the max velocity*/
	this->velocity.x += this->acceleration * dir_x;
	this->velocity.y += this->acceleration * dir_y;

}

void MovementComponenet::update(const float& dt) 
{
	/*Decelerates the sprite and controls the maximum velocity.
	MOves the sprite.*/
	if (this->velocity.x > 0.f)//Check for positive x
	{
		//Max velocity check
		if (this->velocity.x > this->maxVelocity)
		{
			this->velocity.x = this->maxVelocity;
		}

		//Deceleratio 
		this->velocity.x -= deceleration;
		if (this->velocity.x < 0.f)
		{
			this->velocity.x = 0.f;
		}

	}

	else if (this->velocity.x < 0.f)//Check for  negative x
	{
		//MAx velocity check 
		if (this->velocity.x < -this->maxVelocity)
		{
			this->velocity.x = -this->maxVelocity;
		}

		//Deceleration 
        this->velocity.x += deceleration;
		if (this->velocity.x > 0.f)
		{
			this->velocity.x = 0.f;
		}
	}

	if (this->velocity.y > 0.f)//Check for positive y
	{
		//Max velocity check
		if (this->velocity.y > this->maxVelocity)
		{
			this->velocity.y = this->maxVelocity;
		}

		//Deceleratio 
		this->velocity.y -= deceleration;
		if (this->velocity.y < 0.f)
		{
			this->velocity.y = 0.f;
		}

	}

	else if (this->velocity.y < 0.f)//Check for  negative y
	{
		//MAx velocity check 
		if (this->velocity.y < -this->maxVelocity)
		{
			this->velocity.y = -this->maxVelocity;
		}

		//Deceleration 
		this->velocity.y += deceleration;
		if (this->velocity.y > 0.f)
		{
			this->velocity.y = 0.f;
		}
	}
	//final move
	this->sprite.move(this->velocity * dt);//Uses velocity
}
