#include "wxfiledrop.h"

FileDragDrop::FileDragDrop(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    wxPanel *base = new wxPanel(this, -1);
    wxBoxSizer *hbox = new wxBoxSizer(wxHORIZONTAL);
    base->SetSizer(hbox);

    m_text = new wxTextCtrl(base, -1, wxT("Drag any text file here"), wxDefaultPosition, wxDefaultSize,
                                          wxTE_PROCESS_ENTER | wxTE_MULTILINE);
    hbox->Add(m_text, 1, wxALL | wxEXPAND,2);

    FileDropTarget* drop = new FileDropTarget(m_text);
    m_text->SetDropTarget(drop);

    Center();
}

FileDropTarget::FileDropTarget(wxTextCtrl *text){
    m_text = text;
}

bool FileDropTarget::OnDropFiles(wxCoord x, wxCoord y, const wxArrayString &files) {
    m_text->LoadFile(files[0]);

    return TRUE;
}
