#include "main.h"
#include "ip-server-conn.h"
#include "ip-server.h"
#include <wx/utils.h>
#include <wx/ipc.h>

#ifndef _WIN32
IMPLEMENT_APP(MainApp);
#else
wxIMPLEMENT_APP_CONSOLE(MainApp);
#endif 

bool MainApp::OnInit() {
    wxPuts("Starting server..");
    wxString serverName = wxT("8001");
    Server *server = new Server();
    wxPuts("Instantiated.");
    if (!server->Create(serverName)) {
            wxMessageBox("Failed to create server", wxT("Error"));
            return NULL;
    }
    return TRUE;
}

