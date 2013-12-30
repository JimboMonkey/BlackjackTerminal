
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>

using namespace std;

class Player
{
	public:
		Player(const string NewName);
		~Player();
		const string GetName() const;
		void PlaceBet(const float NewBet);
		const float CountStack() const;
		void AddToStack(const float Winnings);

	private:
		string Name;
		float Stack;
};

#endif
