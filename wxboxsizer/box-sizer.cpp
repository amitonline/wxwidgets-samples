#include "box-sizer.h"

BoxSizer::BoxSizer(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,500)) {

    wxPanel* base = new wxPanel(this, -1);
    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
    base->SetSizer(sizer);

    wxPanel* panel1 = new wxPanel(base, -1);
    wxButton* btn1 = new wxButton(panel1, -1, wxT("Button 1"));
    wxButton* btn2 = new wxButton(panel1, -1, wxT("Button 2"));
    wxButton* btn3 = new wxButton(panel1, -1, wxT("Button three"));

    wxBoxSizer* hbox = new wxBoxSizer(wxHORIZONTAL);
    hbox->Add(btn1); hbox->Add(btn2); hbox->Add(btn3);
    panel1->SetSizer(hbox);
    sizer->Add(panel1);

    wxPanel* panel2 = new wxPanel(base, -1);
    wxButton* btn4 = new wxButton(panel2, -1, wxT("Button 4"));
    wxButton* btn5 = new wxButton(panel2, -1, wxT("Button 5"));
    wxButton* btn6 = new wxButton(panel2, -1, wxT("Button 6"));

    wxBoxSizer* hbox2 = new wxBoxSizer(wxHORIZONTAL);
    hbox2->Add(btn4,1);
    hbox2->Add(btn5,2, wxEXPAND | wxALL, 10);
    hbox2->Add(btn6, 4, wxEXPAND );
    panel2->SetSizer(hbox2);
    sizer->Add(panel2);

    wxPanel* panel3 = new wxPanel(base, -1);
    wxButton* btn7 = new wxButton(panel3, -1, wxT("Button 7"));
    wxButton* btn8 = new wxButton(panel3, -1, wxT("Button 8"));
    wxButton* btn9 = new wxButton(panel3, -1, wxT("Button 9"));

    wxBoxSizer* hbox3 = new wxBoxSizer(wxHORIZONTAL);
    hbox3->Add(btn7, 2, wxEXPAND);
    hbox3->Add(btn8, 2, wxEXPAND);
    hbox3->Add(btn9, 4, wxEXPAND);
    panel3->SetSizer(hbox3);
    sizer->Add(panel3,1);

    Center();
}
