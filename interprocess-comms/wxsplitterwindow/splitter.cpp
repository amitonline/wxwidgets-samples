#include "splitter.h"

Splitter::Splitter(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(900,300)) {

    wxSplitterWindow * split = new wxSplitterWindow(this, -1);

    wxPanel *panelLeft = new wxPanel(split, -1);
    wxGrid *grid = new wxGrid(panelLeft, -1);
    grid->CreateGrid(20,10);

    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
    panelLeft->SetSizer(vbox);
    vbox->Add(grid, 1, wxALL | wxEXPAND,1);

    wxPanel *panelRight = new wxPanel(split, -1);
    wxGrid* grid2 = new wxGrid(panelRight, -1);
    grid2->CreateGrid(20,10);
    wxBoxSizer* vbox2 = new wxBoxSizer(wxVERTICAL);
    panelRight->SetSizer(vbox2);
    vbox2->Add(grid2, 1,  wxALL | wxEXPAND,1);

    split->SplitVertically(panelLeft, panelRight);
    split->SetMinimumPaneSize(100);
}
