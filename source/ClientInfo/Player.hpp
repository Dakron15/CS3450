#ifndef PLAYER_HPP
#define PLAYER_HPP

// Project Includes
//#include "Hand.hpp"
#include <vector>
#include "Card.hpp"
#include <string>
#include "source/GUI/LoginScreen.hpp"
#include <sstream>

// Standard Includes
#include <memory>

class Player
{
private:
	int playerScore = 0;
	int bid=0;                       // Spades
	int bags=0;                      // Spades
	int tricksWon=0;                 // Spades

public:
	void incrementScore(int i);
  std::vector<Card> playerHand;
  void playCard(std::unique_ptr<Card>);
  void insertCardToHand(Card card);
  int getScore();

  int getBid() const;
  void setBid(int);
  int getBags() const;
  void setBags(int);
  int getTricksWon() const;
  void setTricksWon(int);
  void incrementTricksWon();

};
#endif
//#endif