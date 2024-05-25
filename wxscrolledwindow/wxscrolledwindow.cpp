#include "wxscrolledwindow.h"

ScrolledWindow::ScrolledWindow(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    wxScrolledWindow *sw = new wxScrolledWindow(this, -1, wxDefaultPosition, wxDefaultSize, wxVSCROLL);
    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
    sw->SetSizer(vbox);

    wxString text = wxT("");
    for (int i=0; i < 50; i++) {
        text = wxT("This is row ");
        m_text[i] = new wxStaticText(sw, -1, text.Append(wxString::Format(wxT("%d"), i)));
        vbox->Add(m_text[i], wxEXPAND,2);

    }

    Center();
    int w=0, h = 0;
    GetSize(&w, &h);
    sw->SetScrollbars(0,10,0,h/10);

}
