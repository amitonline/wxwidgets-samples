#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class RunThread:public wxFrame {
public:
    RunThread(const wxString& title);
    void OnUIUpdate(wxThreadEvent& event);

private:
    wxTextCtrl *m_text;

};
