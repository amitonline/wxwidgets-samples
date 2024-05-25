#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class BitMapButton:public wxFrame {
public:
    BitMapButton(const wxString& title);
    void onClick(wxCommandEvent& evt);

private:
    wxBitmapButton* m_btn;
    int m_currImage;
};
