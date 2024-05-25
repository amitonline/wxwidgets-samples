#include "ip-client-conn.h"

ClientConn::ClientConn(): wxConnection() {

}

ClientConn::~ClientConn() {

}

bool ClientConn::OnAdvise(const wxString& topic, const wxString& item, char* data, int size, wxIPCFormat format) {
    wxMessageBox(topic);

    return TRUE;
}
