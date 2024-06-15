#include "events.h"

TestEvents::TestEvents(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    panLeft = new wxPanel(this, -1, wxPoint(0,0), wxSize(400,300));
    panRight = new wxPanel(this, -1, wxPoint(401,0), wxSize(400,300));
    panLeft->SetBackgroundColour(wxColour(255,0,0));
    panRight->SetBackgroundColour(wxColour(0,255,0));

    wxButton* btn1 = new wxButton(panLeft, -1, wxT("Left Panel"), wxPoint(5,5));
    wxButton* btn2 = new wxButton(panRight, -1, wxT("Right Panel"), wxPoint(5,5));

    btn1->Bind(wxEVT_BUTTON, &TestEvents::leftBtnClick, this);
    btn2->Bind(wxEVT_BUTTON, &TestEvents::rightBtnClick, this);

    Center();

}

void TestEvents::leftBtnClick(wxCommandEvent& evt) {
    panLeft->SetBackgroundColour(wxColour(80,200,100));
    panLeft->Refresh();
}

void TestEvents::rightBtnClick(wxCommandEvent& evt) {
    panRight->SetBackgroundColour(wxColour(15,20,70));
    panRight->Refresh();
}


