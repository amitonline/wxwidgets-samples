#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class XFileDialog:public wxFrame {
public:
    XFileDialog(const wxString& title);
    void onClick(wxCommandEvent& evt);
private:
    wxTextCtrl *m_text;
};
