#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP
#include <wx/ipc.h>

class ClientConn:public wxConnection {
public:
    ClientConn();
    ~ClientConn();
    bool OnAdvise(const wxString& topic, const wxString& item, char* data, int size, wxIPCFormat format);

};
