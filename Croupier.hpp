
#ifndef CROUPIER_HPP
#define CROUPIER_HPP

#include <iostream>
#include <stdlib.h>

#include "Participant.hpp"
#include "Card.hpp"

/* Define the card constants */
#define NumberOfDecks 4
#define SuitsPerDeck 4
#define CardsPerSuit 13
#define CardsPerDeck (SuitsPerDeck * CardsPerSuit)
#define ShoeSize (NumberOfDecks * CardsPerDeck)

class Croupier: public Participant
{
	public:
		Croupier();
		void InitialStatus() const;
		void Status() const;
		const Card Deal();
		void ReturnCards();
		
	private:
		/* Shoe size increased by 1 to accomodate cut card */
		Card Shoe[ShoeSize + 1];
		int NextCard;
		void List() const;
		void Shuffle();
};

#endif
