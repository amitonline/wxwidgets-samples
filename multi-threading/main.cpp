#include "main.h"
#include "multi-thread.h"
#include "runthread.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 


bool MainApp::OnInit() {
    RunThread* app = new RunThread(wxT("Thread demo"));
    app->Show(true);

    return TRUE;
}
