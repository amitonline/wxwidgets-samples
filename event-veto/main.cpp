#include "main.h"
#include "event-veto.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit(){
    EventsVeto *e = new EventsVeto(wxT("Events Veto demo"));
    e->Show(true);

    return true;
}
