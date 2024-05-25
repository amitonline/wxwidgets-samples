#include "wxfiledialog.h"

XFileDialog::XFileDialog(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    wxPanel *base = new wxPanel(this, -1);
    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
    base->SetSizer(vbox);

    wxButton *btn = new wxButton(base, -1, wxT("Choose text file"));
    m_text = new wxTextCtrl(base, -1, wxT(""), wxPoint(-1,-1), wxSize(-1,-1), wxTE_MULTILINE);

    vbox->Add(btn, 0, wxALL | wxCENTER, 5);
    vbox->Add(m_text, 1, wxALL | wxEXPAND | wxCENTER, 4);

    btn->Bind(wxEVT_BUTTON, &XFileDialog::onClick, this);

    Center();
}

void XFileDialog::onClick(wxCommandEvent& evt) {
    wxFileDialog* fd = new wxFileDialog(this, wxT("Open text file"), wxT(""), wxT(""), wxT("txt files (*.txt)|*.txt"),
                                        wxFD_OPEN | wxFD_FILE_MUST_EXIST);
    int retVal = fd->ShowModal();
    if (retVal == wxID_OK) {
        wxString path = fd->GetPath();
        m_text->LoadFile(path);
    }


}
