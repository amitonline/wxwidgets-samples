#include "main.h"
#include "event-propagate.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit(){
    EventsPropagate *e = new EventsPropagate(wxT("Events Propagate demo"));
    e->Show(true);

    return TRUE;
}
