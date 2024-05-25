#include "wxbitmapbutton.h"

BitMapButton::BitMapButton(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

        wxPanel *base = new wxPanel(this, -1);
        wxBoxSizer* vbox = new wxBoxSizer(wxVERTICAL);
        base->SetSizer(vbox);

        m_btn = new wxBitmapButton(base, -1, wxBitmap(wxT("1.png"), wxBITMAP_TYPE_PNG), wxDefaultPosition);
        vbox->Add(m_btn, 1, wxEXPAND);
        m_currImage = 0;

        m_btn->Bind(wxEVT_BUTTON, &BitMapButton::onClick, this);

        Center();
}

void BitMapButton::onClick(wxCommandEvent& evt) {
    m_currImage++;
    if (m_currImage > 2)
        m_currImage = 0;
    if (m_currImage == 0)
        m_btn->SetBitmapLabel(wxBitmap(wxT("1.png"), wxBITMAP_TYPE_PNG));
    else if (m_currImage == 1)
        m_btn->SetBitmapLabel(wxBitmap(wxT("2.png"), wxBITMAP_TYPE_PNG));
    if (m_currImage == 2)
        m_btn->SetBitmapLabel(wxBitmap(wxT("3.png"), wxBITMAP_TYPE_PNG));
}
