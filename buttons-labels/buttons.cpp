#include "buttons.h"

Button::Button(const wxString& title):wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {
    wxPanel* panel = new wxPanel(this, -1);
    wxButton *btn1 = new wxButton(panel, -1, wxT("Click Me"), wxPoint(300,10));
    btn1->SetBackgroundColour(wxColour(100,90,200));
    wxStaticText* text1 = new wxStaticText(panel, -1, wxT("Click on the button"), wxPoint(80,10));

    Centre();
}


