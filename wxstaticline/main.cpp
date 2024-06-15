#include "main.h"
#include "wxstaticline.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit(){
    StaticLine *line = new StaticLine(wxT("Static Line demo"));
    line->Show(true);
    return TRUE;
}
