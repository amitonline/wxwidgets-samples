#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class CustomDialog:public wxFrame{
public:
    CustomDialog(const wxString& title);
    void onFileClick(wxCommandEvent& evt);
    void onFontClick(wxCommandEvent& evt);

private:
    wxTextCtrl *m_text;
};
