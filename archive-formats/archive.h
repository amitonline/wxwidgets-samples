#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class Archive:public wxFrame {
public:
    Archive(const wxString& title);

private:
    void onZip(wxCommandEvent& evt);
    void onUnzip(wxCommandEvent& evt);

    wxTextCtrl *m_text;
};
