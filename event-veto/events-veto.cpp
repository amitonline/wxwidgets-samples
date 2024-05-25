#include "event-veto.h"

EventsVeto::EventsVeto(const wxString& title) :
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

            this->Bind(wxEVT_CLOSE_WINDOW, &EventsVeto::onClose, this);

            wxPanel *base = new wxPanel(this, -1);
            wxBoxSizer* vbox = new wxBoxSizer(wxVERTICAL);
            base->SetSizer(vbox);

            wxPanel* panel1 = new wxPanel(base, ID_PANEL_1);
            wxBoxSizer* vbox1 = new wxBoxSizer(wxVERTICAL);
            panel1->SetSizer(vbox1);

            wxPanel* panel11 = new wxPanel(panel1, ID_PANEL_1_1);
            wxBoxSizer* hbox1 = new wxBoxSizer(wxHORIZONTAL);
            panel11->SetSizer(hbox1);

            wxButton* btn = new wxButton(panel11, ID_BUTTON_1, wxT("click on me"));
            hbox1->Add(btn, 0, wxALIGN_CENTER);

            vbox1->Add(panel11, 1, wxEXPAND | wxALL, 50);

            vbox->Add(panel1, 1, wxEXPAND | wxALL, 5);

            btn->Bind(wxEVT_BUTTON , &EventsVeto::onClick, this);
            panel11->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &EventsVeto::onClick2, this);
            panel1->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &EventsVeto::onClick3, this);
            this->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &EventsVeto::onClick4, this);

            Center();

}


void EventsVeto::onClose(wxCloseEvent& evt) {
       wxMessageDialog* dlg = new wxMessageDialog(NULL, wxT("Confirm closing window?"), wxT("Question"), wxYES_NO);
    int retVal = dlg->ShowModal();
    dlg->Destroy();
    if (retVal == wxID_NO) {
        evt.Skip(false);
        return;
    }
    Destroy();
}


void EventsVeto::onClick(wxCommandEvent& evt) {
    wxMessageDialog* dlg = new wxMessageDialog(NULL, wxT("Veto at button?"), wxT("Question"), wxYES_NO);
    int retVal = dlg->ShowModal();
    dlg->Destroy();
    if (retVal == wxID_YES) {
        evt.Skip(false);
        return;
    }
    wxString msg = wxT("Click on button");
    wxMessageBox(msg);

    evt.Skip();
}


void EventsVeto::onClick2(wxCommandEvent& evt) {
    wxMessageDialog* dlg = new wxMessageDialog(NULL, wxT("Veto at panel11?"), wxT("Question"), wxYES_NO);
    int retVal = dlg->ShowModal();
    dlg->Destroy();
    if (retVal == wxID_YES) {
        evt.Skip(false);
        return;
    }
    wxString msg = "Click on panel11";
    wxMessageBox(msg);

    evt.Skip();
}



void EventsVeto::onClick3(wxCommandEvent& evt) {
    wxMessageDialog* dlg = new wxMessageDialog(NULL, wxT("Veto at panel1?"), wxT("Question"), wxYES_NO);
    int retVal = dlg->ShowModal();
    dlg->Destroy();
    if (retVal == wxID_YES) {
        evt.Skip(false);
        return;
    }
    wxString msg = "Click on panel1";
    wxMessageBox(msg);

    evt.Skip();
}



void EventsVeto::onClick4(wxCommandEvent& evt) {
    wxString msg = "Click on window";
    wxMessageBox(msg);
}
