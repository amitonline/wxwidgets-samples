#include "main.h"
#include "fontdialog.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    FontDialog* dlg = new FontDialog(wxT("Font Dialog Demo"));
    dlg->Show(true);

    return TRUE;
}
