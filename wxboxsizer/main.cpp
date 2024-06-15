#include "main.h"
#include "box-sizer.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    BoxSizer* box = new BoxSizer(wxT("Box Sizer Demo"));
    box->Show(true);

    return TRUE;
}
