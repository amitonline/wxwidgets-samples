#include "main.h"
#include "event-tables.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 


bool MainApp::OnInit() {
    EventsTable* evt = new EventsTable(wxT("Events Table Demo"));
    evt->Show(true);

    return TRUE;
}
