#include "main.h"
#include "custom-widget.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

MainFrame::MainFrame(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    Center();
}

bool MainApp::OnInit() {
    MainFrame *frame = new MainFrame(wxT("Custom Widget Demo"));
    wxPanel *base = new wxPanel(frame, -1);
    wxBoxSizer *hbox = new wxBoxSizer(wxHORIZONTAL);
    base->SetSizer(hbox);


    wxStaticText *lbl = new wxStaticText(base, -1, wxT("Custom Widget Text"));
    CustomColor *color = new CustomColor(base, -1, 100,10,20);
    hbox->Add(color, -1, wxEXPAND | wxALL, 4);
    hbox->Add(lbl, -1, wxEXPAND | wxALL, 3);

    frame->Show(true);

    return TRUE;
}




