#include "abs-pos.h"

Absolute::Absolute(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,400)) {

    wxPanel* panel = new wxPanel(this, -1)    ;
    wxButton* btn = new wxButton(panel, -1, wxT("Button is here"), wxPoint(20,20));
    wxStaticText* lbl = new wxStaticText(panel, -1, wxT("This is label"), wxPoint(40,100));

    wxTextCtrl* edit = new wxTextCtrl(panel, -1, wxT("This is edit box\nsecond line"), wxPoint(100,150), wxSize(100,20), wxTE_MULTILINE);

    Center();
}
