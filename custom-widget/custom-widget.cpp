#include "custom-widget.h"

CustomColor::CustomColor(wxWindow *parent, wxWindowID id, int r, int g, int b):
    wxPanel(parent, id) {

    m_red = r; m_green = g; m_blue = b;
    wxBoxSizer *hbox= new wxBoxSizer(wxHORIZONTAL);
    SetSizer(hbox);

    m_sliderRed = new wxSlider(this, SLIDER_ID_RED, m_red, 0, 255, wxDefaultPosition, wxDefaultSize, wxSL_VERTICAL);
    m_sliderGreen = new wxSlider(this, SLIDER_ID_GREEN, m_green, 0, 255, wxDefaultPosition, wxDefaultSize, wxSL_VERTICAL);
    m_sliderBlue= new wxSlider(this, SLIDER_ID_BLUE, m_blue, 0, 255, wxDefaultPosition, wxDefaultSize, wxSL_VERTICAL);

    hbox->Add(m_sliderRed, 1, wxEXPAND | wxALL, 5);
    hbox->Add(m_sliderGreen, 1, wxEXPAND | wxALL, 5);
    hbox->Add(m_sliderBlue, 1, wxEXPAND | wxALL, 5);

    m_sliderRed->Bind(wxEVT_COMMAND_SLIDER_UPDATED, &CustomColor::onScroll, this);
    m_sliderGreen->Bind(wxEVT_COMMAND_SLIDER_UPDATED, &CustomColor::onScroll, this);
    m_sliderBlue->Bind(wxEVT_COMMAND_SLIDER_UPDATED, &CustomColor::onScroll, this);

    showColor();
}

void CustomColor::onScroll(wxCommandEvent& evt) {

    int id = evt.GetId();
    if (id == SLIDER_ID_RED) {
        m_red =  m_sliderRed->GetValue();
    } else if (id == SLIDER_ID_GREEN) {
        m_green =  m_sliderGreen->GetValue();
    } else if (id == SLIDER_ID_BLUE) {
        m_blue =  m_sliderBlue->GetValue();
    }

    showColor();
}

void CustomColor::setRed(int r) { m_red = r;}
void CustomColor::setGreen(int g) { m_green = g;}
void CustomColor::setBlue(int b) { m_blue = b;}

void CustomColor::showColor() {
    SetBackgroundColour(wxColour(m_red, m_green, m_blue));
}
