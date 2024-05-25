#include "fontdialog.h"
#include <wx/fontdlg.h>

FontDialog::FontDialog(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,200)) {

    wxPanel *base = new wxPanel(this, -1);
    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
    base->SetSizer(vbox);

    wxButton *btn = new wxButton(base, -1, wxT("Change Font"));
    m_label = new wxStaticText(base, -1, wxT("This is a single line of text"));

    vbox->Add(btn, 0, wxALL | wxCENTER,2);
    vbox->Add(m_label, 1, wxEXPAND | wxALL | wxCENTER, 4);
    btn->Bind(wxEVT_BUTTON, &FontDialog::onClick, this);

    Center();
}

void FontDialog::onClick(wxCommandEvent& evt) {
    wxFontDialog *dlg = new wxFontDialog(this);
    int retVal = dlg->ShowModal();
    if (retVal = wxID_OK) {
        m_label->SetFont(dlg->GetFontData().GetChosenFont());
    }
}
