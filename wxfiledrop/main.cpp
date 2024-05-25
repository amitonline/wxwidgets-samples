#include "main.h"
#include "wxfiledrop.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    FileDragDrop* drop = new FileDragDrop(wxT("File Drag and Drop Demo"));
    drop->Show(true);

    return TRUE;
}
