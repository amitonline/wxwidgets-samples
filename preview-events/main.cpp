#include "main.h"
#include "events.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    TestEvents* app = new TestEvents(wxT("Events Preview"));
    app->Show(true);

    return TRUE;
}
