#ifndef GAMEMODE_HPP
#define GAMEMODE_HPP

#include <wx/wx.h>


class GameMode : public wxPanel
{
public:
	GameMode(wxFrame* parent);
	wxButton *single;
	wxButton *multiple;
	bool singlepl();
	void display();
	void hide();

};

enum
{
	BUTTON_Single = wxID_HIGHEST + 100,
	BUTTON_Multiple	= wxID_HIGHEST + 101
};
#endif