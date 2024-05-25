#include "event-propagate.h"

EventsPropagate::EventsPropagate(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

        wxPanel* panel = new wxPanel(this, -1);
        panel->SetBackgroundColour(wxColour(90,200,30));
        wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
        panel->SetSizer(vbox);

        wxPanel* panel1 = new wxPanel(panel, ID_PANEL_1);
        wxBoxSizer* vbox1 = new wxBoxSizer(wxVERTICAL);
        panel1->SetSizer(vbox1);

        wxPanel* panel11 = new wxPanel(panel1, ID_PANEL_1_1);
        panel11->SetBackgroundColour(wxColour(180,90,45));
        wxBoxSizer* hbox = new wxBoxSizer(wxHORIZONTAL);
        panel11->SetSizer(hbox);

        wxButton* btn = new wxButton(panel11, ID_BUTTON_1, wxT("Click this button"));
        hbox->Add(btn, 0, wxALIGN_CENTER);

        vbox1->Add(panel11, 1, wxALL | wxEXPAND, 40);

        vbox->Add(panel1, 1, wxALL | wxEXPAND,10);

        btn->Bind(wxEVT_BUTTON, &EventsPropagate::onClick, this);
        panel11->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &EventsPropagate::onClick2, this);
        panel1->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &EventsPropagate::onClick3, this);
        this->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &EventsPropagate::onClick4, this);
        Center();



}

void EventsPropagate::onClick(wxCommandEvent& evt) {
    wxString msg = wxT("button clicked");
    wxMessageBox(msg);
    evt.Skip();
}

void EventsPropagate::onClick2(wxCommandEvent& evt ) {
    wxString msg = wxT("panel11 clicked");
    wxMessageBox(msg);
    evt.Skip();
}

void EventsPropagate::onClick3(wxCommandEvent& evt ) {
    wxString msg = wxT("panel1 clicked");
    wxMessageBox(msg);
    evt.Skip();
}

void EventsPropagate::onClick4(wxCommandEvent& evt ) {
    wxString msg = wxT("window clicked");
    wxMessageBox(msg);
    evt.Skip();
}





