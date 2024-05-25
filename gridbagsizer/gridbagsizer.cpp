#include "gridbagsizer.h"

GridBagSizer::GridBagSizer(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    wxPanel* panel = new wxPanel(this, -1);
    wxGridBagSizer *grid = new wxGridBagSizer(3,4);
    grid->SetEmptyCellSize(wxSize(20,10));
    panel->SetSizer(grid);

    wxStaticText* lbl1 = new wxStaticText(panel, -1, wxT("Answer 1"));
    wxStaticText* lbl2 = new wxStaticText(panel, -1, wxT("Answer 2"));
    wxStaticText* lbl3 = new wxStaticText(panel, -1, wxT("Answer 3"));
    wxStaticText* lbl4 = new wxStaticText(panel, -1, wxT("Answer 4"));

    wxTextCtrl* txt1 = new wxTextCtrl(panel, -1, wxT(""));
    wxTextCtrl* txt2 = new wxTextCtrl(panel, -1, wxT(""));
    wxTextCtrl* txt3 = new wxTextCtrl(panel, -1, wxT(""));
    wxTextCtrl* txt4 = new wxTextCtrl(panel, -1, wxT(""), wxPoint(-1,-1), wxSize(-1,-1), wxTE_MULTILINE);

    grid->Add(lbl1, wxGBPosition(0,0), wxGBSpan(1,1), wxEXPAND);
    grid->Add(lbl2, wxGBPosition(1,0), wxGBSpan(1,1), wxEXPAND);
    grid->Add(lbl3, wxGBPosition(2,0), wxGBSpan(1,1), wxEXPAND);
    grid->Add(lbl4, wxGBPosition(3,0), wxGBSpan(1,1), wxEXPAND);

    grid->Add(txt1, wxGBPosition(0,1), wxGBSpan(1,4), wxEXPAND);
    grid->Add(txt2, wxGBPosition(1,1), wxGBSpan(1,4), wxEXPAND);
    grid->Add(txt3, wxGBPosition(2,1), wxGBSpan(1,4), wxEXPAND);
    grid->Add(txt4, wxGBPosition(3,1), wxGBSpan(1,4), wxEXPAND);

    grid->AddGrowableRow(3); grid->AddGrowableCol(1);

    Center();


}
