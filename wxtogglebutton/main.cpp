#include "main.h"
#include "wxtogglebutton.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    ToggleButton *tog = new ToggleButton(wxT("Toggle Button demo"));
    tog->Show(true);

    return TRUE;
}
