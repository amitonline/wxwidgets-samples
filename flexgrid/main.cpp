#include "main.h"
#include "flexgrid.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    FlexGrid* grid = new FlexGrid(wxT("FlexGrid Demo"));
    grid->Show(true);

    return TRUE;
}
