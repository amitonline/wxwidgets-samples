#include "wxcheckbox.h"

CheckBox::CheckBox(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,200)) {

        wxPanel* base = new wxPanel(this, -1);
        wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
        base->SetSizer(vbox);

        m_ck1 = new wxCheckBox(base, -1, wxT("This is a default checkbox"));
        m_ck2 = new wxCheckBox(base, -1, wxT("Label to the left"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT);

        m_ck1->Bind(wxEVT_COMMAND_CHECKBOX_CLICKED, &CheckBox::toggle1, this);
        m_ck2->Bind(wxEVT_COMMAND_CHECKBOX_CLICKED, &CheckBox::toggle2, this);

        vbox->Add(m_ck1, 1, wxEXPAND); vbox->Add(m_ck2, 1, wxEXPAND);

        Center();

}

void CheckBox::toggle1(wxCommandEvent& evt) {
    if (m_ck1->GetValue())
        wxMessageBox(wxT("checked"));
    else
        wxMessageBox(wxT("Unchecked"));
}
void CheckBox::toggle2(wxCommandEvent& evt) {
    if (m_ck2->GetValue())
        wxMessageBox(wxT("checked"));
    else
        wxMessageBox(wxT("Unchecked"));
}



