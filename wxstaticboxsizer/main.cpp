#include "main.h"
#include "staticboxsizer.h"

IMPLEMENT_APP(MainApp)


bool MainApp::OnInit() {
    StaticBoxSizer* app = new StaticBoxSizer(wxT("StaticBoxSizer Demo"));
    app->Show(true);

    return TRUE;
}
