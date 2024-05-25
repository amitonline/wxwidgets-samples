#include "main.h"
#include "panels.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    Panels* app = new Panels(wxT("Panels Demo"));
    app->Show(true);

    return TRUE;
}
