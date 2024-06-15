#include "main.h"
#include "window1.h"
#include "window2.h"

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP(Main);
#endif 

bool Main::OnInit() {
    Window1* win1 = new Window1(wxT("First window"));
    Window2* win2 = new Window2(wxT("Second window"));
    win1->Show(true);
    win2->Show(true);

    return TRUE;
}
