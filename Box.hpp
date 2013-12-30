
#ifndef BOX_HPP
#define BOX_HPP

#include <vector>

#include "Player.hpp"
#include "Card.hpp"
#include "Participant.hpp"

class Box: public Participant
{
	public:
		Box(Player* NewOwner, const bool Split = false);
		string GetOwner() const;
		Player* GetOwnerObj() const;
		void Status() const;
		void PlaceBet(const float NewBet);
		const float CountBet() const;
		void RetrieveBet();
		void ReceiveWinnings();
		float CountStack() const;
		void PlaceInsurance();
		const bool CheckInsurance() const;
		void ReceiveInsurance();
		void Surrender();
		const bool CheckSurrended() const;
		const Card MoveSplitCard();
		bool CheckSplit() const;
		void ReturnCards();	

	private:
		Player *Owner;
		float Bet;
		bool UsingInsurance;
		float Insurance;
		bool Surrended;
		bool SplitBox;
};

#endif


