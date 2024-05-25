#include "main.h"
#include "bind-unbind.h"

IMPLEMENT_APP(MainApp)


bool MainApp::OnInit(){
    BindUnbind* bind = new BindUnbind(wxT("Bind Unbind Demo"));
    bind->Show(true);

    return TRUE;
}
