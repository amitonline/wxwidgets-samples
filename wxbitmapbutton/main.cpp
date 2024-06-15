#include "main.h"
#include "wxbitmapbutton.h"


#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(MainApp);
#endif 


bool MainApp::OnInit() {
    BitMapButton* bmp = new BitMapButton(wxT("bitmap button demo"));
    bmp->Show(true);

    return TRUE;
}
