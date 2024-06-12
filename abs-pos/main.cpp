#include "main.h"
#include "abs-pos.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    Absolute* abs = new Absolute(wxT("Absolute Positioning"));
    abs->Show(true);

    return TRUE;
}


