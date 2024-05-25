#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class Slider:public wxFrame {
public:
    Slider(const wxString& title);
    void OnScroll(wxCommandEvent& evt);

private:
    wxSlider *m_slider;
    wxStaticText *m_lbl;
};


