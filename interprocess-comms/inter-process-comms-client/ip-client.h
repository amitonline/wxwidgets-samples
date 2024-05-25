#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP
#include <wx/ipc.h>

class Client:public wxClient {
public:
    Client();
    wxConnectionBase *OnMakeConnection();
};


