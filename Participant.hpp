
#ifndef PARTICIPANT_HPP
#define PARTICIPANT_HPP

#include <iostream>
#include <vector>

#include "Card.hpp"

using namespace std;

class Participant
{
	public:
		const int CheckHand() const;
		void TakeCard(const Card& DealtCard);
		void StatusResult() const;
		void ListHand() const;
		const string CheckCard(const int CardIndex) const;
		const int CountCards() const;
		void SoftenAce();	

	protected:
		vector<Card> Hand;
		int HandValue;
		int AcesHeld;
};

#endif
