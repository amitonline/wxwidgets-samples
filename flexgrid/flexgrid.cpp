#include "flexgrid.h"

FlexGrid::FlexGrid(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,400)) {

    wxPanel* basePanel = new wxPanel(this, -1);
    wxFlexGridSizer *grid = new wxFlexGridSizer(4,2,3,10);
    basePanel->SetSizer(grid);

    wxStaticText* lbl1 = new wxStaticText(basePanel, -1, wxT("Answer one"));
    wxStaticText* lbl2 = new wxStaticText(basePanel, -1, wxT("Answer two"));
    wxStaticText* lbl3 = new wxStaticText(basePanel, -1, wxT("Answer three"));
    wxStaticText* lbl4 = new wxStaticText(basePanel, -1, wxT("Answer four"));

    wxTextCtrl *text1 = new wxTextCtrl(basePanel, -1, wxT(""));
    wxTextCtrl *text2 = new wxTextCtrl(basePanel, -1, wxT(""));
    wxTextCtrl *text3 = new wxTextCtrl(basePanel, -1, wxT(""));
    wxTextCtrl *text4 = new wxTextCtrl(basePanel, -1, wxT(""), wxPoint(-1,-1), wxSize(-1,1), wxTE_MULTILINE);

    grid->Add(lbl1); grid->Add(text1, 1, wxEXPAND);
    grid->Add(lbl2); grid->Add(text2, 1, wxEXPAND);
    grid->Add(lbl3); grid->Add(text3, 1, wxEXPAND);
    grid->Add(lbl4); grid->Add(text4, 1, wxEXPAND);

    grid->AddGrowableRow(3); grid->AddGrowableCol(1,1);

    Center();

}
