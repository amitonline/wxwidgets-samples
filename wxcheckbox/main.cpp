#include "main.h"
#include "wxcheckbox.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    CheckBox* ck = new CheckBox(wxT("Checkbox demo"));
    ck->Show(true);

    return TRUE;
}
