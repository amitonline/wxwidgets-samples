#include "main.h"
#include "wxstatictext.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    StaticText *s = new StaticText(wxT("Static text demo"));
    s->Show(true);

    return TRUE;
}
