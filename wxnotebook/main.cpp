#include "main.h"
#include "wxnotebook.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit(){
    Notebook *book = new Notebook(wxT("Notbook demo"));
    book->Show(true);

    return TRUE;
}
