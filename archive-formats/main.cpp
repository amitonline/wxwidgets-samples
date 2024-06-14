#include "main.h"
#include "archive.h"


#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 


bool MainApp::OnInit() {
    Archive *arc = new Archive(wxT("Archive demo"));
    arc->Show(true);
    return TRUE;
}


