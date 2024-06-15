#include "main.h"
#include "menus.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {

    Menus* menus = new Menus(wxT("Submenus"));
    menus->Show(true);

    return TRUE;
}
