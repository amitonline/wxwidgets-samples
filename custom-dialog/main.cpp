#include "main.h"
#include "custom.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    CustomDialog* dlg = new CustomDialog(wxT("Custom dialog demo"));
    dlg->Show(true);

    return TRUE;
}
