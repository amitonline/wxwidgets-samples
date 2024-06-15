#include "main.h"
#include "flexgrid.h"


#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    FlexGrid* grid = new FlexGrid(wxT("FlexGrid Demo"));
    grid->Show(true);

    return TRUE;
}
