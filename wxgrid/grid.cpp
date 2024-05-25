#include "grid.h"

GridSizer::GridSizer(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,560)) {

    wxPanel *basePanel = new wxPanel(this, -1);
    wxGridSizer* sizer = new wxGridSizer(5,5,0,0);
    basePanel->SetSizer(sizer);


    wxButton* btnHome = new wxButton(basePanel, -1, wxT(""));
    sizer->Add(btnHome,1, wxEXPAND);
    wxButton* btnCol1 = new wxButton(basePanel, -1, wxT("A"));
    sizer->Add(btnCol1, 1, wxEXPAND);
    wxButton* btnCol2 = new wxButton(basePanel, -1, wxT("B"));
    sizer->Add(btnCol2, 1, wxEXPAND);
    wxButton* btnCol3 = new wxButton(basePanel, -1, wxT("C"));
    sizer->Add(btnCol3, 1, wxEXPAND);
    wxButton* btnCol4 = new wxButton(basePanel, -1, wxT("D"));
    sizer->Add(btnCol4, 1, wxEXPAND);

    for(int i=1; i <= 4; i++) {
        for (int j=1; j<=5; j++) {
            if (j == 1) {
                wxButton* btn = new wxButton(basePanel, -1, wxString::Format(wxT("%d"), i));
                sizer->Add(btn,1,wxEXPAND);
            } else {
                wxTextCtrl* txt = new wxTextCtrl(basePanel, -1, wxT(""));
                txt->SetMaxLength(10);
                sizer->Add(txt, 1, wxEXPAND);
            }
        }

    }
    Center();
}
