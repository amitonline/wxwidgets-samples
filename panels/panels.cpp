#include "panels.h"

Panels::Panels(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    wxPanel* panLeft = new wxPanel(this, -1, wxPoint(0,0), wxSize(400,200));
    wxPanel* panRight = new wxPanel(this, -1, wxPoint(401,0), wxSize(400,200));
    panLeft->SetBackgroundColour(wxColour(10,190,80));
    panRight->SetBackgroundColour(wxColour(200,45,89));

    wxStaticText *lbl1 = new wxStaticText(panLeft, -1, wxT("Left Panel"), wxPoint(5,5));
    wxStaticText* lbl2 = new wxStaticText(panRight, -1, wxT("Right Panel"), wxPoint(5,5));

    Center();
}


