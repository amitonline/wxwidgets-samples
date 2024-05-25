#include "main.h"
#include "dragdrop.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    DragDrop *drag = new DragDrop(wxString("Drag and Drop demo"));
    drag->Show(true);

    return TRUE;
}
