#include "main.h"
#include "wxscrolledwindow.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    ScrolledWindow *sw = new ScrolledWindow(wxT("Scrolled window demo"));
    sw->Show(true);

    return TRUE;
}
