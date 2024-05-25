#include "wxtogglebutton.h"

ToggleButton::ToggleButton(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    wxPanel* base = new wxPanel(this, -1);
    wxBoxSizer* vbox = new wxBoxSizer(wxVERTICAL);
    base->SetSizer(vbox);

    m_btn1 = new wxToggleButton(base, -1, wxString("1"));
    m_btn2 = new wxToggleButton(base, -1, wxString("2"));
    m_btn3 = new wxToggleButton(base, -1, wxString("3"));
    m_lbl = new wxStaticText(base, -1, wxString(""));

    vbox->Add(m_btn1, 1, wxEXPAND);
    vbox->Add(m_btn2, 1, wxEXPAND);
    vbox->Add(m_btn3, 1, wxEXPAND);
    vbox->Add(m_lbl, 1, wxEXPAND);

    m_btn1->Bind(wxEVT_TOGGLEBUTTON, &ToggleButton::onClick, this);
    m_btn2->Bind(wxEVT_TOGGLEBUTTON, &ToggleButton::onClick, this);
    m_btn3->Bind(wxEVT_TOGGLEBUTTON, &ToggleButton::onClick, this);

    Center();

}

void ToggleButton::onClick(wxCommandEvent& evt) {
    wxString str = wxT("");
    if (m_btn1->GetValue())
        str.Append("1=toggled ");
    if (m_btn2->GetValue())
        str.Append("2=toggled ");
    if (m_btn3->GetValue())
        str.Append("3=toggled ");
    m_lbl->SetLabel(str);
}
