#include <wx/wx.h>
#include <wx/sizer.h>
#include "GameMode.hpp"

GameMode::GameMode(wxFrame* parent) : wxPanel(parent, wxID_ANY, wxDefaultPosition,
	wxSize(wxSystemSettings::GetMetric(wxSYS_SCREEN_X)*.5, wxSystemSettings::GetMetric(wxSYS_SCREEN_Y)*.5), wxTAB_TRAVERSAL, wxPanelNameStr)
{

	wxFlexGridSizer *verticalBox = new wxFlexGridSizer(3, 0, 10, 10);

	wxBoxSizer *horizontalBox = new wxBoxSizer(wxHORIZONTAL);

	single = new wxButton(this, BUTTON_Single, _T("Single"), wxDefaultPosition, wxSize(140, 30));
	multiple = new wxButton(this, BUTTON_Multiple, _T("Multiple"), wxDefaultPosition, wxSize(140, 30));
	::wxInitAllImageHandlers();

	horizontalBox->Add(single, wxCENTER, 0);
	horizontalBox->Add(multiple, wxCENTER, 0);

	verticalBox->Add(horizontalBox, wxCENTER, 0);


	SetSizerAndFit(verticalBox);

	CenterOnParent();
	Show(0);
}

bool singlePl() {
	//if()
	return true;
}

void GameMode::display()
{
	Show(1);

}

void GameMode::hide()
{
	Show(0);
}
