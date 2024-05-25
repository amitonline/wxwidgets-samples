#include "main.h"
#include "custom.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    CustomDialog* dlg = new CustomDialog(wxT("Custom dialog demo"));
    dlg->Show(true);

    return TRUE;
}
