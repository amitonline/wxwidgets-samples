#include "main.h"
#include "gridbagsizer.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    GridBagSizer *grid = new GridBagSizer(wxT("GridBag sizer Demo"));
    grid->Show(true);
    return TRUE;
};
