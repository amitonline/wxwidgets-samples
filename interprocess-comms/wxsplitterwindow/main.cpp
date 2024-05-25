#include "main.h"
#include "splitter.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit(){
    Splitter *split = new Splitter(wxT("Splitter Window demo"));
    split->Show(true);

    return TRUE;
}
