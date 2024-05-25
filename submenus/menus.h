    #include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class Menus:public wxFrame {
public:
    Menus(const wxString& title);
    void OnMenuItem(wxCommandEvent& evt);
    wxMenuBar *mb;
    wxMenu *mnuFile;
    wxMenu *mnuEdit;
    wxMenu* submenu;
};

const int ID_NEW = 101;
const int ID_SAVE = 102;
const int ID_OPEN = 103;

const int ID_SUB_ONE = 201;
const int ID_SUB_TWO = 202;
const int ID_SUB_THREE = 203;



