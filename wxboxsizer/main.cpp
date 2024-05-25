#include "main.h"
#include "box-sizer.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    BoxSizer* box = new BoxSizer(wxT("Box Sizer Demo"));
    box->Show(true);

    return TRUE;
}
