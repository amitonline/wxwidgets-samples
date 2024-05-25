#include "main.h"
#include "wxlistbox.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit(){
    ListBox *lst = new ListBox(wxT("Listbox demo"));
    lst->Show(true);

    return TRUE;
}
