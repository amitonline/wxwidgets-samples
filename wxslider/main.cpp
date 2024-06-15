#include "main.h"
#include "wxslider.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 

bool MainApp::OnInit() {
    Slider *slider = new Slider(wxT("Slider demo"));
    slider->Show(true);

    return TRUE;
}
