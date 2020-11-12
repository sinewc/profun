#ifndef GAME_H
#define GAME_H

#include "MainMenuState.h"
class Game
{
private:
	//Variables
	sf::RenderWindow *window;
	sf::Event sfEvent;
	std::vector<sf::VideoMode>videoModes;
	sf::ContextSettings windowSettings;
	bool fullscreen;

	sf::Clock dtClock;
	float dt;

	std::stack<State* >states;

	
	std::map<std::string, int> supportedKeys;

	//Initialization 
	void initVariables();
	void initWindow();
	void initKeys();
	void initStates();

public:
	//Constructors/Destructors
	Game();
	virtual ~Game();

	//Function

	//Regular
	void endApplication();

	//update
	void updateDT();
	void updateSFMLEvents();
	void update();

	//render
	void render();

	//core
	void run();

};

#endif

