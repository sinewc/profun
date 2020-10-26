#ifndef MAINMENUSTATE_H
#define MAINMENUSTATE_H

#include "GameState.h"
#include "Button.h"
class MainMenuState :
    public State
{

private:
    //Variables
    sf::RectangleShape background;
    sf::Font font;

    std::map<std::string, Button*>buttons;

    //functions
    void initFonts();
    void initKeybinds();
    void initButtons();
public:
    MainMenuState(sf::RenderWindow* window, std::map<std::string, int>* supportedKeys, std::stack<State*>* states);
    virtual ~MainMenuState();

    //function
    void endState();

    void updateInput(const float& dt);
    void updateBottons();
    void update(const float& dt);
    void renderButtons(sf::RenderTarget* target = NULL);
    void render(sf::RenderTarget* target = NULL);
};

#endif

