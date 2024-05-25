#include "main.h"
#include "wxgrid2.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    Grid *grid = new Grid(wxT("Grid demo 2"));
    grid->Show(true);

    return TRUE;
}
