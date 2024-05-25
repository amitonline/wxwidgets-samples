#include "main.h"
#include "complex-ui.h"

IMPLEMENT_APP(MainApp)


bool MainApp::OnInit() {
    ComplexUI* ui = new ComplexUI(wxT("Complex UI demo"));
    ui->Show(true);

    return true;
}
