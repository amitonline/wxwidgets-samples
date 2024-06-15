#include "main.h"
#include "buttons.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    Button* btn1 = new Button(wxT("Buttons and Labels"));
    btn1->Show(true);
    return TRUE;
}
