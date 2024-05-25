#include "main.h"
#include "simple.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit() {
    Simple* simple = new Simple(wxT("Simple Window Text"));
    simple->Show(true);

    return TRUE;
}
