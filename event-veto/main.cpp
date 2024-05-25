#include "main.h"
#include "event-veto.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit(){
    EventsVeto *e = new EventsVeto(wxT("Events Veto demo"));
    e->Show(true);

    return true;
}
