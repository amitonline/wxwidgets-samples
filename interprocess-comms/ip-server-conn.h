#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP
#include <wx/ipc.h>

#ifndef SERVERCONNECTION

class ServerConn:public wxConnection {
public:
    ServerConn();
    ~ServerConn();
    bool OnExec(const wxString& topic, const wxString& data);
    bool OnPoke(const wxString& topic, const wxString& item, const void *data, size_t size, wxIPCFormat format);
    void const* OnRequest(const wxString& topic, const wxString& item, size_t size, wxIPCFormat format);
    bool OnAdvise(const wxString& topic, const wxString& item, const void *data, size_t size, wxIPCFormat format);
    bool DoAdvise(const wxString& topic, const void *data, size_t size, wxIPCFormat format);
    bool OnStopAdvise(const wxString& topic, const wxString& item);
    bool OnStartAdvise(const wxString& topic, const wxString& item);
    bool OnDisconnect();

    wxString m_advise;
};

#define SERVERCONNECTION 1
#endif // SERVER_COMM

