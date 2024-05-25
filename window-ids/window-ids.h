#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class WindowIds:public wxFrame {
public:
    WindowIds(const wxString& title);
    void onClick(wxCommandEvent& evt);
};

const int ID_BTN = 101;
