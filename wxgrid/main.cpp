#include "main.h"
#include "grid.h"

IMPLEMENT_APP(MainApp)


bool MainApp::OnInit() {
    GridSizer *grid = new GridSizer(wxT("GridSizer Demo"));
    grid->Show(true);

    return TRUE;
}
