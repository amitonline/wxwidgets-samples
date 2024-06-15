#include "main.h"
#include "complex-ui.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 


bool MainApp::OnInit() {
    ComplexUI* ui = new ComplexUI(wxT("Complex UI demo"));
    ui->Show(true);

    return true;
}
