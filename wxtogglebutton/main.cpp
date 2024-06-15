#include "main.h"
#include "wxtogglebutton.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    ToggleButton *tog = new ToggleButton(wxT("Toggle Button demo"));
    tog->Show(true);

    return TRUE;
}
