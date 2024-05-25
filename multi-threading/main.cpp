#include "main.h"
#include "multi-thread.h"
#include "runthread.h"

IMPLEMENT_APP(MainApp)


bool MainApp::OnInit() {
    RunThread* app = new RunThread(wxT("Thread demo"));
    app->Show(true);

    return TRUE;
}
