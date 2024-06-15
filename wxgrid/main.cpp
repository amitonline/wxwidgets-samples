#include "main.h"
#include "grid.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    GridSizer *grid = new GridSizer(wxT("GridSizer Demo"));
    grid->Show(true);

    return TRUE;
}
