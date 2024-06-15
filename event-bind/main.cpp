#include "main.h"
#include "event-bind.h"


#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 


bool MainApp::OnInit() {
    EventsBind* evt = new EventsBind(wxT("Events Bind Demo"));
    evt->Show(true);

    return TRUE;
}

