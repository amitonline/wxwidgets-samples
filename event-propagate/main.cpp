#include "main.h"
#include "event-propagate.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit(){
    EventsPropagate *e = new EventsPropagate(wxT("Events Propagate demo"));
    e->Show(true);

    return TRUE;
}
