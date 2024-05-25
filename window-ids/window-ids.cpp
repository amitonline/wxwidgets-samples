#include "window-ids.h"

WindowIds::WindowIds(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)){

    wxPanel* base = new wxPanel(this, -1);
    wxBoxSizer *hbox = new wxBoxSizer(wxHORIZONTAL);
    base->SetSizer(hbox);

    wxButton* btn1 = new wxButton(base, -1, wxT("Auto generated id"));
    wxButton* btn2 = new wxButton(base, wxID_EXIT, wxT("System generated id"));
    wxButton* btn3 = new wxButton(base, ID_BTN, wxT("Use defined id"));

    hbox->Add(btn1, 1, wxEXPAND | wxALL, 5);
    hbox->Add(btn2, 1, wxEXPAND | wxALL, 5);
    hbox->Add(btn3, 1, wxEXPAND | wxALL, 5);

    btn1->Bind(wxEVT_BUTTON, &WindowIds::onClick, this);
    btn2->Bind(wxEVT_BUTTON, &WindowIds::onClick, this);
    btn3->Bind(wxEVT_BUTTON, &WindowIds::onClick, this);

    Center();
}

void WindowIds::onClick(wxCommandEvent& evt) {
    wxString id = wxString::Format(wxT("%d"), evt.GetId());
    wxMessageBox(id);
}
