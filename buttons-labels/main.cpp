#include "main.h"
#include "buttons.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    Button* btn1 = new Button(wxT("Buttons and Labels"));
    btn1->Show(true);
    return TRUE;
}
