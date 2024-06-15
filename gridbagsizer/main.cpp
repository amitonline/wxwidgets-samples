#include "main.h"
#include "gridbagsizer.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    GridBagSizer *grid = new GridBagSizer(wxT("GridBag sizer Demo"));
    grid->Show(true);
    return TRUE;
};
