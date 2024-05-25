#include "menus.h"

Menus::Menus(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,400)) {

    mb = new wxMenuBar();
    mnuFile = new wxMenu();
    wxMenuItem *mniFileNew = new wxMenuItem(mnuFile, ID_NEW, wxT("&New"));
    mnuFile->Append(mniFileNew);
    mnuFile->Append(ID_SAVE, wxT("&Save.."));
    mnuFile->Append(ID_OPEN, wxT("&Open.."));
    mnuFile->AppendSeparator();

    submenu = new wxMenu();
    submenu->Append(ID_SUB_ONE, wxT("Menu Item one"));
    submenu->Append(ID_SUB_TWO, wxT("Menu Item two"));
    submenu->Append(ID_SUB_THREE, wxT("Menu Item three"));

    mnuFile->AppendSubMenu(submenu, wxT("&Submenu"));
    mnuFile->AppendSeparator();
    mnuFile->Append(wxID_EXIT, wxT("E&xit"));
    mb->Bind(wxEVT_MENU, &Menus::OnMenuItem, this);

    mnuEdit = new wxMenu(wxT("&Edit"));
    mnuEdit->Append(-1, wxT("Copy\tCtrl-C"));
    mnuEdit->Append(-1, wxT("Paste\tCtrl-V"));
    mnuEdit->Append(-1, wxT("Cut\tCtrl-X"));

    mb->Append(mnuFile, wxT("&File"));
    mb->Append(mnuEdit, wxT("&Edit"));

    SetMenuBar(mb);


}

void  Menus::OnMenuItem(wxCommandEvent &evt) {
    int eventId = evt.GetId();
    wxString strId = wxT("");
    strId = wxString::Format(wxT("%d"), eventId);
    wxPuts(strId);

    if (eventId == ID_NEW)
        wxLogMessage("new item");
    else if (eventId == ID_OPEN)
        wxLogMessage("open item");
    else if (eventId == ID_SAVE)
        wxLogMessage("save item");
    else if (eventId == wxID_EXIT)
        Close(true);

}
