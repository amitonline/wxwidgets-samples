#include "main.h"
#include "archive.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    Archive *arc = new Archive(wxT("Archive demo"));
    arc->Show(true);
    return TRUE;
}


