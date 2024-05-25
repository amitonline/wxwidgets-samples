#include "main.h"
#include "wxfiledialog.h"

IMPLEMENT_APP(MainApp)


bool MainApp::OnInit() {
    XFileDialog* dlg = new XFileDialog(wxT("File Dialog example"));
    dlg->Show(true);

    return true;
}
