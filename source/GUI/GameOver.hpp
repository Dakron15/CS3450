#ifndef GAMEOVER_HPP
#define GAMEOVER_HPP

#include <wx/wx.h>
#include <source/ClientInfo/Player.hpp>

class GameOver : public wxPanel
{
public:
	GameOver(wxFrame* parent);
	wxButton *playAgain;
	wxButton *mainMenu;
	void display();
	void hide();
	void displayScore(int p1, int p2, int p3, int p4);

};

enum
{
	BUTTON_mainMenu = wxID_HIGHEST + 10,
	BUTTON_playAgain = wxID_HIGHEST + 11
};
#endif
