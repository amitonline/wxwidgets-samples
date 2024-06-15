#include "main.h"
#include "wxlistbox.h"


#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit(){
    ListBox *lst = new ListBox(wxT("Listbox demo"));
    lst->Show(true);

    return TRUE;
}
