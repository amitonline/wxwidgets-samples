#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class CheckBox:public wxFrame {
public:
    CheckBox(const wxString& title);
    void toggle1(wxCommandEvent& evt);
    void toggle2(wxCommandEvent& evt);
private:
    wxCheckBox *m_ck1, *m_ck2;

};
