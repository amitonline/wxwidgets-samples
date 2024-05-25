#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

#include <wx/ipc.h>
#include "ip-server-conn.h"

class Server:public wxServer{
public:
    Server();
    virtual ~Server();
    void disconnect();
    bool IsConnected() { return m_connection != NULL;}
    ServerConn* getConnection() { return m_connection;}
    void advise();
    bool canAdvise() { return m_connection && !m_connection->m_advise.empty(); }

    virtual wxConnectionBase *OnAcceptConnection(const wxString& topic) wxOVERRIDE;

protected:
    ServerConn *m_connection;
};
