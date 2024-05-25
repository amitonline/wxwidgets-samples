#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class BindUnbind:public wxFrame {
public:
    BindUnbind(const wxString& title);
    void onClick1(wxCommandEvent& evt);
    void onClick2(wxCommandEvent& evt);
    void onClick3(wxCommandEvent& evt);
    void removeHandler(int remove, int add);

private:
    wxButton* m_btn1;

};
