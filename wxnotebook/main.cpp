#include "main.h"
#include "wxnotebook.h"


#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit(){
    Notebook *book = new Notebook(wxT("Notbook demo"));
    book->Show(true);

    return TRUE;
}
