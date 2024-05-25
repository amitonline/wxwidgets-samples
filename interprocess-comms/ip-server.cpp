#include "ip-server.h"
#include "ip-server-conn.h"

Server::Server():wxServer() {
    wxPuts("server()\n");
    m_connection = NULL;
}

Server::~Server() {
    disconnect();
}

wxConnectionBase *Server::OnAcceptConnection(const wxString& topic) {
    wxPrintf("OnacceptConnection(%s)", topic);

    if (topic == wxT("IPC TEST")) {
        m_connection = new ServerConn();
        wxPuts("connection accepted");
        return m_connection;
    }
    wxPuts("Unknown topic. Refused");
    return NULL;
}

void Server::disconnect() {
    if (m_connection) {
        wxDELETE(m_connection);
        wxPuts("Server disconnected");
    }
}

void Server::advise() {
    wxPuts("Advise");

    if (canAdvise()) {
        const wxDateTime now = wxDateTime::Now();
        wxString str = wxString::FromUTF8("\xd0\x9f\xd1\x80\xd0\xb8\xd0\xb2\xd0\xb5\xd1\x82");
        m_connection->Advise(m_connection->m_advise, str + " (using UTF-8)");

        str += " (using wchar_t)";
        m_connection->Advise(m_connection->m_advise, str.wc_str(), (str.length()+1)* sizeof(wchar_t), wxIPC_UNICODETEXT);

        const wxString s = now.FormatTime() + " " + now.FormatDate();
        m_connection->Advise(m_connection->m_advise, s.mb_str(), wxNO_LEN);

        char bytes[3] = {'1', '2', '3'};
        m_connection->Advise(m_connection->m_advise, bytes, 3, wxIPC_PRIVATE);

    } else {
        wxPuts("Unable to advise..");
    }
}

