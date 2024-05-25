#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class MainApp:public wxApp {
public:
    virtual bool OnInit();
};

class MainFrame:public wxFrame{
public:
    MainFrame(const wxString& title);
};


