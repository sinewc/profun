#include "MainMenuState.h"

//initializer function
void MainMenuState::initVariables()
{
}

void MainMenuState::initBackground()
{
	this->background.setSize(
		sf::Vector2f
	   (
	    static_cast<float>(this->window->getSize().x),
        static_cast<float>(this->window->getSize().y)
	   )
	);

	if (!this->backgroundTexture.loadFromFile("Resources/Images/Backgrounds/bg1.jpg"))
	{
		throw "ERROR::MAIN_MENU_STATE::FAILED_TO_LOAD_BACKGROUND_TEXTURE";
	}
	this->background.setTexture(&this->backgroundTexture);
}

void MainMenuState::initFonts()
{
	if (!this->font.loadFromFile("./Fonts/CALIFB.TTF"))
	{
		throw("ERROR::MAINMENUSTATE::COULD NOT LOAD FONT");
	}
}
void MainMenuState::initKeybinds()
{
	std::ifstream ifs("Config/mainmenustate_keybinds.ini");
	if (ifs.is_open())
	{  
		std::string key = "";
		std::string key2 = "";

		while (ifs >> key >> key2)
		{
			this->keybinds[key] = this->supportedKeys->at(key2);
		}
	}
	ifs.close();
}
void MainMenuState::initButtons()
{
	this->buttons["GAME_STATE"] = new Button(800, 500, 300, 150, "./Resources/Images/Backgrounds/play.png");
	this->buttons["EXIT_STATE"] = new Button(800, 680, 300, 150, "./Resources/Images/Backgrounds/quit.png");
	this->buttons["SCORE_STATE"] = new Button(800, 850, 100, 100, "./Resources/Images/Backgrounds/score.png");
	this->buttons["SETTING_STATE"] = new Button(1000, 850, 100, 100, "./Resources/Images/Backgrounds/setting.png");
}
	
MainMenuState::MainMenuState(sf::RenderWindow* window, std::map<std::string, int>* supportedKeys, std::stack<State*>* states)
	: State(window, supportedKeys,states)
{
	this->initVariables();
	this->initBackground();
	this->initFonts();
	this->initKeybinds();
	this->initButtons();
}

MainMenuState::~MainMenuState()
{
	auto it = this->buttons.begin();
	for (it = this->buttons.begin(); it != this->buttons.end(); ++it)
	{
		delete it->second;
	}

}

void MainMenuState::updateInput(const float& dt)
{
                 

}

void MainMenuState::updateBottons()
{
	 /*update all the button in the state and handles their functionlaity*/
	for (auto &it : this->buttons)
	{
		it.second->updete(this->mousePosView);
	}

	//New game
	if (this->buttons["GAME_STATE"]->isPressd())
	{
		this->states->push(new GameState(this->window, this->supportedKeys,this->states));
	}

	//Quit the game
	if (this->buttons["EXIT_STATE"]->isPressd())
	{
		this->endState();
	}

}

void MainMenuState::update(const float& dt)
{
	this->updateMousePositions();
	this->updateInput(dt);

	this->updateBottons();

}

void MainMenuState::renderButtons(sf::RenderTarget* target)
{
	//this->gamestate_btn->render(target);
	for (auto& it : this->buttons)
	{
		it.second->render(target);
	}
}

void MainMenuState::render(sf::RenderTarget* target)
{
	this->window->draw(this->background);

	if (!target)
	{
		target = this->window;
	}
	target->draw(this->background);
	this->renderButtons(target);

	sf::Text mouseText;
	mouseText.setPosition(this->mousePosView);
	mouseText.setCharacterSize(12);
	

}
