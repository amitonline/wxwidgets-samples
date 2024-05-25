#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class XDialog:public wxFrame {
public:
    XDialog(const wxString& title);
    void onClick(wxCommandEvent& evt);
};

const int ID_BTN1 = 101;
const int ID_BTN2 = 102;
const int ID_BTN3 = 103;
const int ID_BTN4 = 104;

