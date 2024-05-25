#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class TestEvents:public wxFrame {
public:
    wxPanel* panLeft;
    wxPanel* panRight;
    TestEvents(const wxString& title);
    void leftBtnClick(wxCommandEvent& evt);
    void rightBtnClick(wxCommandEvent& evt);
};
