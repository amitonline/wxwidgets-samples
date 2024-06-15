#include "main.h"
#include "wxstatictext.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    StaticText *s = new StaticText(wxT("Static text demo"));
    s->Show(true);

    return TRUE;
}
