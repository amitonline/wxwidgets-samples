#include "main.h"
#include "window-ids.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    WindowIds* ids = new WindowIds(wxT("Window ids demo"));
    ids->Show(true);

    return TRUE;
}
