#include "main.h"
#include "wxfiledialog.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 


bool MainApp::OnInit() {
    XFileDialog* dlg = new XFileDialog(wxT("File Dialog example"));
    dlg->Show(true);

    return true;
}
