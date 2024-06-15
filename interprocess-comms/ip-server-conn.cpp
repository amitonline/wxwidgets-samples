#include "ip-server-conn.h"

ServerConn::ServerConn(): wxConnection() {
    wxPuts("Server Connection created");
}

ServerConn::~ServerConn(){

}

bool ServerConn::OnExec(const wxString& topic, const wxString& data) {
    wxPuts("Onexec()");
    wxPuts(topic); wxPuts(data);
    return TRUE;
}

 bool ServerConn::OnPoke(const wxString& topic, const wxString& item, const void *data, size_t size, wxIPCFormat format) {
    wxPuts("OnPoke()");
    return wxConnection::OnPoke(topic, item, data, size, format);
 }

void const* ServerConn::OnRequest(const wxString& topic, const wxString& item, size_t size, wxIPCFormat format) {
     wxPuts("OnRequest()");
     return NULL;
}

bool ServerConn::OnAdvise(const wxString& topic, const wxString& item, const void *data, size_t size, wxIPCFormat format) {
     wxPuts("OnAdvise()");
     m_advise = item;
     return TRUE;
}

bool ServerConn::DoAdvise(const wxString& topic, const void *data, size_t size, wxIPCFormat format){
    wxPuts("DoAdvise()");
    return wxConnection::DoAdvise(topic, data, size, format);

}

bool ServerConn::OnStopAdvise(const wxString& topic, const wxString& item) {
 wxPuts("OnStopAdvise()");
 return TRUE;
}

bool ServerConn::OnStartAdvise(const wxString& topic, const wxString& item) {
 wxPuts("OnStartAdvise()");
 wxPuts(topic);
 m_advise.Clear();
 return TRUE;
}

bool ServerConn::OnDisconnect(){
 wxPuts("OnDisconnect()");
 return TRUE;
}
