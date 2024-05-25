#include "main.h"
#include "menus.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {

    Menus* menus = new Menus(wxT("Submenus"));
    menus->Show(true);

    return TRUE;
}
