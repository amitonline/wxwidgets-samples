#include "main.h"
#include "wxbitmapbutton.h"

IMPLEMENT_APP(MainApp)


bool MainApp::OnInit() {
    BitMapButton* bmp = new BitMapButton(wxT("bitmap button demo"));
    bmp->Show(true);

    return TRUE;
}
