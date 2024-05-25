#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

class EventsBind:public wxFrame {
public:
    EventsBind(const wxString& title);
    void onClick(wxCommandEvent& event);
    void onText(wxCommandEvent& event);

private:
        wxStaticText* m_lbl;
        wxTextCtrl* m_edit;

};

const int ID_BTN_1 = 101;
const int ID_BTN_2 = 102;
const int ID_BTN_3 = 103;
const int ID_BTN_4 = 104;
const int ID_TXT_1 = 105;



