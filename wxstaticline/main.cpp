#include "main.h"
#include "wxstaticline.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit(){
    StaticLine *line = new StaticLine(wxT("Static Line demo"));
    line->Show(true);
    return TRUE;
}
