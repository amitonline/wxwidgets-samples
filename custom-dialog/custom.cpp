#include <wx/fontdlg.h>
#include "custom.h"

CustomDialog::CustomDialog(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    wxPanel *base = new wxPanel(this, -1);
    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
    base->SetSizer(vbox);

    wxPanel *panelB = new wxPanel(base, -1);
    wxBoxSizer *hbox = new wxBoxSizer(wxHORIZONTAL);
    panelB->SetSizer(hbox);

    wxButton* btn1 = new wxButton(panelB, -1, wxT("Choose Text File.."));
    wxButton* btn2 = new wxButton(panelB, -1, wxT("Choose Font.."));
    hbox->Add(btn1, 0, wxCENTER | wxALL, 4);
    hbox->Add(btn2, 0, wxCENTER | wxALL, 4);

    m_text = new wxTextCtrl(base, -1, wxT(""), wxPoint(1,1), wxSize(-1,-1), wxTE_MULTILINE);

    vbox->Add(panelB, 0, wxALL, 5);
    vbox->Add(m_text, 1, wxEXPAND | wxALL | wxCENTER, 5);

    btn1->Bind(wxEVT_BUTTON, &CustomDialog::onFileClick, this);
    btn2->Bind(wxEVT_BUTTON, &CustomDialog::onFontClick, this);

    Center();
}

void CustomDialog::onFileClick(wxCommandEvent& evt) {
    wxFileDialog* dlg = new wxFileDialog(this, wxT("Open text file"), wxT(""), wxT(""), wxT("txt files (*.txt)|*.txt"),
                                         wxFD_OPEN | wxFD_FILE_MUST_EXIST);
    int retVal = dlg->ShowModal();
    if (retVal == wxID_OK){
        wxString path = dlg->GetPath();
        m_text->LoadFile(path);
    }
}

void CustomDialog::onFontClick(wxCommandEvent& evt) {
    wxFontDialog *dlg = new wxFontDialog(this);
    int retVal = dlg->ShowModal();
    if (retVal == wxID_OK) {
        m_text->SetFont(dlg->GetFontData().GetChosenFont());
    }
}
