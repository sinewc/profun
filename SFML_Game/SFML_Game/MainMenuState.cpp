#include "MainMenuState.h"
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
	this->buttons["GAME_STATE"]= new Button(700,500,500,150,
		&this->font, "New Game",
		sf::Color(70, 70, 70, 200), sf::Color(150, 150, 150, 255), sf::Color(20, 20, 20, 200));

	this->buttons["EXIT_STATE"] = new Button(700,700,500,150,
		&this->font, "Quit",
		sf::Color(100, 100, 100, 200), sf::Color(150, 150, 150, 255), sf::Color(20, 20, 20, 200));
}
MainMenuState::MainMenuState(sf::RenderWindow* window, std::map<std::string, int>* supportedKeys, std::stack<State*>* states)
	: State(window, supportedKeys,states)
{
	this->initFonts();
	this->initKeybinds();
	this->initButtons();

	this->background.setSize(sf::Vector2f(window->getSize().x, window->getSize().y));
	this->background.setFillColor(sf::Color::Magenta);
}

MainMenuState::~MainMenuState()
{
	auto it = this->buttons.begin();
	for (it = this->buttons.begin(); it != this->buttons.end(); ++it)
	{
		delete it->second;
	}

}

void MainMenuState::endState()
{
	std::cout << "Ending MainMenuState!" << "\n";
}

void MainMenuState::updateInput(const float& dt)
{
	this->checkForQuit();

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
		this->quit = true;
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
}
