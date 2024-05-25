#include "main.h"
#include "wxmessagedialog.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit(){
    XDialog* dlg = new XDialog(wxT("MessageDialog demo"));
    dlg->Show(true);

    return TRUE;
}
