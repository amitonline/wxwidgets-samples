#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP
#include <wx/tglbtn.h>

class ToggleButton:public wxFrame {
public:
    ToggleButton(const wxString& title);
    void onClick(wxCommandEvent& evt);

private:
    wxToggleButton *m_btn1, *m_btn2, *m_btn3;
    wxStaticText *m_lbl;
};
