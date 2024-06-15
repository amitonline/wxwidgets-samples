#include "main.h"
#include "wxmessagedialog.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit(){
    XDialog* dlg = new XDialog(wxT("MessageDialog demo"));
    dlg->Show(true);

    return TRUE;
}
