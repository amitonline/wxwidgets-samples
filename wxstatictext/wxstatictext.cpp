#include "wxstatictext.h"

StaticText::StaticText(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    wxPanel *base = new wxPanel(this, -1);
    wxBoxSizer *hbox = new wxBoxSizer(wxHORIZONTAL);
    base->SetSizer(hbox);

    wxStaticText *lbl = new wxStaticText(base, -1, wxT("This is line 1.\nThis is line 2.\nThis is line3"));
    hbox->Add(lbl, 1, wxEXPAND | wxALL, 2);

    Center();
}


