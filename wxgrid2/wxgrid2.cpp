#include "wxgrid2.h"
#include <wx/grid.h>


Grid::Grid(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    wxPanel *base = new wxPanel(this, -1);
    wxBoxSizer *vbox = new wxBoxSizer(wxHORIZONTAL);
    base->SetSizer(vbox);

    wxGrid* grid = new wxGrid(base, -1);
    grid->CreateGrid(40,3);
    grid->SetColSize(0,100);
    grid->SetColSize(1,400);
    grid->SetColSize(2,100);

    grid->SetColFormatFloat(2,6,2);

    wxString empCode;
    for (int i =0; i < 40; i++) {
        empCode = wxT("Emp.#");
        grid->SetCellValue(i,0, empCode.Append(wxString::Format(wxT("%d"), (i+1))));
        grid->SetReadOnly(i,0);
        grid->SetCellTextColour(i,0,*wxGREEN);
        grid->SetCellBackgroundColour(i,0,wxColour(100,100,100));
        grid->SetCellBackgroundColour(i,1,wxColour(200,80,45));
        grid->SetCellBackgroundColour(i,2,wxColour(45,90,110));

    }

    vbox->Add(grid, 1, wxEXPAND);
    Center();
}
