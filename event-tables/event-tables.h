#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

class EventsTable:public wxFrame {
public:
    EventsTable(const wxString& title);
    void onClick(wxCommandEvent& event);
    void onText(wxCommandEvent& event);

private:
        wxStaticText* m_lbl;
        wxTextCtrl* m_edit;

        DECLARE_EVENT_TABLE()

};

const int ID_BTN_1 = 101;
const int ID_BTN_2 = 102;
const int ID_BTN_3 = 103;
const int ID_BTN_4 = 104;
const int ID_TXT_1 = 105;


