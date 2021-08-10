#ifndef PAUSE_STATE_HPP
#define PAUSE_STATE_HPP

#include "state.hpp"
#include "gui/container.hpp"

#include <SFML/System/Time.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/Text.hpp>

class PauseState : public State
{
public:
	PauseState(StateStack& stack, Context context);
	~PauseState();

	virtual void draw() override;
	virtual bool update(sf::Time dt) override;
	virtual bool handleEvent(const sf::Event& event) override;

private:
	sf::RectangleShape mRectangleBackground;
	sf::Text mPausedText;
	GUI::Container mGUIContainer;
};

#endif // PAUSE_STATE_HPP