#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class ScrolledWindow:public wxFrame {
public:
    ScrolledWindow(const wxString& title);

private:
    wxStaticText *m_text[50];

};
