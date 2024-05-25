#include "main.h"
#include "event-bind.h"


IMPLEMENT_APP(MainApp)


bool MainApp::OnInit() {
    EventsBind* evt = new EventsBind(wxT("Events Bind Demo"));
    evt->Show(true);

    return TRUE;
}

