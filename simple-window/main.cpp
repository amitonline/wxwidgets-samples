#include "main.h"
#include "window1.h"
#include "window2.h"

IMPLEMENT_APP(Main)

bool Main::OnInit() {
    Window1* win1 = new Window1(wxT("First window"));
    Window2* win2 = new Window2(wxT("Second window"));
    win1->Show(true);
    win2->Show(true);

    return TRUE;
}
