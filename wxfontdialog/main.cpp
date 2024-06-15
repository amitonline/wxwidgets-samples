#include "main.h"
#include "fontdialog.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    FontDialog* dlg = new FontDialog(wxT("Font Dialog Demo"));
    dlg->Show(true);

    return TRUE;
}
