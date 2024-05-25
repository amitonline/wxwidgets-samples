#include "wxslider.h"

Slider::Slider(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    wxPanel *base = new wxPanel(this, -1);
    wxBoxSizer* vbox = new wxBoxSizer(wxVERTICAL);
    base->SetSizer(vbox);

    m_slider = new wxSlider(base, -1, 0,0,100, wxDefaultPosition, wxDefaultSize);
    m_lbl = new wxStaticText(base, -1, wxT(""));

    vbox->Add(m_slider, 1, wxEXPAND | wxALL, 2);
    vbox->Add(m_lbl, 1, wxEXPAND | wxALL, 3);

    m_slider->Bind(wxEVT_SLIDER, &Slider::OnScroll, this);

    Center();
}

void Slider::OnScroll(wxCommandEvent& evt) {
    int val = m_slider->GetValue();
    m_lbl->SetLabel(wxString::Format(wxT("Slider value is %d"), val));


}
