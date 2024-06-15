#include "main.h"
#include "window-ids.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    WindowIds* ids = new WindowIds(wxT("Window ids demo"));
    ids->Show(true);

    return TRUE;
}
