#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class FontDialog:public wxFrame {
public:
    FontDialog(const wxString& title);
    void onClick(wxCommandEvent& evt);

private:
    wxStaticText *m_label;
};
