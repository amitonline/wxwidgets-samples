#include "main.h"
#include "dragdrop.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    DragDrop *drag = new DragDrop(wxString("Drag and Drop demo"));
    drag->Show(true);

    return TRUE;
}
