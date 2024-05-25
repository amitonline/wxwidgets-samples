#include "main.h"
#include "events.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    TestEvents* app = new TestEvents(wxT("Events Preview"));
    app->Show(true);

    return TRUE;
}
