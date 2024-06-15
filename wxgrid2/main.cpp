#include "main.h"
#include "wxgrid2.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    Grid *grid = new Grid(wxT("Grid demo 2"));
    grid->Show(true);

    return TRUE;
}
