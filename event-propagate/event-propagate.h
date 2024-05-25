#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class EventsPropagate:public wxFrame {
public:
    EventsPropagate(const wxString& title);
    void onClick(wxCommandEvent& evt);
    void onClick2(wxCommandEvent& evt);
    void onClick3(wxCommandEvent& evt);
    void onClick4(wxCommandEvent& evt);
};

const int ID_PANEL_1 = 101;
const int ID_PANEL_1_1 = 102;
const int ID_BUTTON_1 = 103;


