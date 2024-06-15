#include "main.h"
#include "bind-unbind.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 


bool MainApp::OnInit(){
    BindUnbind* bind = new BindUnbind(wxT("Bind Unbind Demo"));
    bind->Show(true);

    return TRUE;
}
