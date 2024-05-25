#include "main.h"
#include "event-tables.h"


IMPLEMENT_APP(MainApp)


bool MainApp::OnInit() {
    EventsTable* evt = new EventsTable(wxT("Events Table Demo"));
    evt->Show(true);

    return TRUE;
}
