#include "main.h"
#include "staticboxsizer.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 


bool MainApp::OnInit() {
    StaticBoxSizer* app = new StaticBoxSizer(wxT("StaticBoxSizer Demo"));
    app->Show(true);

    return TRUE;
}
