					cout << "Hit (h), ";
					/* If past initial hand stage */
					if (CurrentBox.CountCards() > 2)
					{
						cout << "or stand (s)?" << endl;
					}
					/* Initial hand stage */
					else
					{	
						/* Not after split */
						if (TurnsPlayed == 0 and CurrentBox.CheckSplit() != true)
						{
							cout << "stand (s)";
							/* Player has enough money to double or split */
							if (CurrentBox.CountStack() >= CurrentBox.CountBet())
							{
								cout << ", double (d)";
								/* First two cards are the same */
								if (FirstCard.compare(SecondCard) == 0)
								{
									cout << ", split (p)";
								}
							}
							cout << ", or surrender (q)?" << endl;
						}
						/* After split */
						else
						{
							/* Player has enough money to double or split */
							if (CurrentBox.CountStack() >= CurrentBox.CountBet())
							{
								cout << "stand (s), ";
								/* First two cards are the same */
								if (FirstCard.compare(SecondCard) == 0)
								{
									cout << "double (d), or split (p)?" << endl;
								}
								/* Cards are not the same */
								else
								{
									cout << "or double (d)?" << endl;
								}
							}
							else
							{
								cout << "or stand (s)?" << endl;
							}
						}
					}
