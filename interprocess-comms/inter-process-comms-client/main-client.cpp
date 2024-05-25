#include "main-client.h"
#include "ip-client.h"
#include "ip-client-conn.h"
#include <wx/utils.h>
#include <wx/ipc.h>

IMPLEMENT_APP(MainClient)

bool MainClient::OnInit(){
    wxString server = wxT("8001");
    wxString hostname = wxT("localhost");
    Client* client = new Client();
    ClientConn *conn  = (ClientConn*) client->MakeConnection(hostname, server, "IPC TEST");
    if (!conn) {
        wxMessageBox("Failed to connect to server", wxT(""));
        return NULL;
    }

    wxPuts("Starting advise");
    conn->StartAdvise("Item");
    wxPuts("Started advise");
    wxSleep(5);
    conn->StopAdvise("Item");
    wxPuts("Stopped advise");
    wxString s = "Date";
    conn->Execute(s);
    wxPuts("Started execute");
    wxSleep(5);
    wxPuts("Called disconnect");
    conn->Disconnect();

    wxDELETE(client);
    wxPuts("Client object deleted");

    return TRUE;


}

