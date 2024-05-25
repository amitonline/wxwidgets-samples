#include "main.h"
#include "persistent.h"
#include <wx/persist.h>
#include <wx/persist/toplevel.h>


IMPLEMENT_APP(MainApp)

bool MainApp::OnInit() {

    Persistent* app = new Persistent(wxT("Persistent objects demo"));
    app->SetName("my app");
    !wxPersistenceManager::Get().RegisterAndRestore((wxFrame*) app);
    app->Show(true);
    wxPersistenceManager::Get().Save((wxFrame*) app);

    return TRUE;
}
