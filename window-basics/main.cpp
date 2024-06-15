#include "main.h"
#include "simple.h"


#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MyApp);
#endif 

bool MyApp::OnInit() {
    Simple* simple = new Simple(wxT("Simple Window Text"));
    simple->Show(true);

    return TRUE;
}
