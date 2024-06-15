#include "main.h"
#include "panels.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    Panels* app = new Panels(wxT("Panels Demo"));
    app->Show(true);

    return TRUE;
}
