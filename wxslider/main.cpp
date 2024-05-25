#include "main.h"
#include "wxslider.h"

IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {
    Slider *slider = new Slider(wxT("Slider demo"));
    slider->Show(true);

    return TRUE;
}
