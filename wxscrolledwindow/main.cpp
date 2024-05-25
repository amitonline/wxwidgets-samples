#include "main.h"
#include "wxscrolledwindow.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    ScrolledWindow *sw = new ScrolledWindow(wxT("Scrolled window demo"));
    sw->Show(true);

    return TRUE;
}
