#include "main.h"
#include "wxcheckbox.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    CheckBox* ck = new CheckBox(wxT("Checkbox demo"));
    ck->Show(true);

    return TRUE;
}
