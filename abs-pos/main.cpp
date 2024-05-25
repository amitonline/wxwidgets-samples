#include "main.h"
#include "abs-pos.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    Absolute* abs = new Absolute(wxT("Absolute Positioning"));
    abs->Show(true);

    return TRUE;
}


