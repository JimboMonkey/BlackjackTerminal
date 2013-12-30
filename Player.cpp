
#include "Player.hpp"

#define DefaultStackValue 25

/* Constructor for the player object */
Player::Player(const string NewName)
{
	/* Set chosen name and default stack value */
	Name = NewName;
	Stack = DefaultStackValue;
}

/* Destructor for the player object */
Player::~Player()
{
	/* Destroy player object */
}

/* Return the player's name */
const string Player::GetName() const
{
	return Name;
}

/* Return the player's stack value */
const float Player::CountStack() const
{
	return Stack;
}

/* Reduce the stack by the bet value */
void Player::PlaceBet(const float NewBet)
{
	Stack -= NewBet;
}

/* Add to the stack value */
void Player::AddToStack(const float Winnings)
{
	Stack += Winnings;
}
