#include "staticboxsizer.h"

StaticBoxSizer::StaticBoxSizer(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,400)) {

    wxPanel* panBase = new wxPanel(this, -1);
    wxBoxSizer* vbox = new wxBoxSizer(wxVERTICAL);
    panBase->SetSizer(vbox);

    wxPanel *panel1 = new wxPanel(panBase, -1);
    wxButton* btn1 = new wxButton(panel1, -1, wxT("Button 1"));
    wxButton* btn2 = new wxButton(panel1, -1, wxT("Button 2"));
    wxButton* btn3 = new wxButton(panel1, -1, wxT("Button 3"));

    wxStaticBoxSizer* sizer = new wxStaticBoxSizer(wxHORIZONTAL, panel1, wxT("Buttons"));
    sizer->Add(btn1, 1, wxALL ,10);
    sizer->Add(btn2, 1, wxALL, 10);
    sizer->Add(btn3, 1, wxALL, 10);
    panel1->SetSizer(sizer);

    vbox->Add(panel1, 0, wxALIGN_CENTER);

    Center();


}
