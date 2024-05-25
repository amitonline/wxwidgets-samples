#include "event-tables.h"

EventsTable::EventsTable(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    wxPanel* panel = new wxPanel(this, -1);
    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
    panel->SetSizer(vbox);

    wxPanel* panelBase = new wxPanel(panel, -1);
    wxBoxSizer* hbox = new wxBoxSizer(wxHORIZONTAL);
    panelBase->SetSizer(hbox);
    wxButton* btn1 = new wxButton(panelBase, ID_BTN_1, wxT("Button 1"));
    wxButton* btn2 = new wxButton(panelBase, ID_BTN_2, wxT("Button 2"));
    wxButton* btn3 = new wxButton(panelBase, ID_BTN_3, wxT("Button 3"));

    m_edit = new wxTextCtrl(panelBase, ID_TXT_1, wxT(""));
    hbox->Add(btn1, 1, wxALL,5);
    hbox->Add(btn2, 1, wxALL, 5);
    hbox->Add(btn3, 1, wxALL, 5);
    hbox->Add(m_edit, 2, wxALL,5);
    vbox->Add(panelBase, 1, wxALL, 2);

    m_lbl = new wxStaticText(panel, -1, wxT("Show event handling here"));
    vbox->Add(m_lbl, 1, wxALL | wxALIGN_CENTER );

    Center();
}

BEGIN_EVENT_TABLE(EventsTable, wxFrame)
    EVT_BUTTON(ID_BTN_1, EventsTable::onClick)
    EVT_BUTTON(ID_BTN_2, EventsTable::onClick)
    EVT_BUTTON(ID_BTN_3, EventsTable::onClick)
    EVT_TEXT(ID_TXT_1, EventsTable::onText)
END_EVENT_TABLE()

void EventsTable::onClick(wxCommandEvent& event) {
    wxString strId = wxString::Format(wxT("%d"), event.GetId());
    strId.Append(wxString(" clicked"));
    m_lbl->SetLabel(strId);
}

void EventsTable::onText(wxCommandEvent& event) {
    m_lbl->SetLabel(m_edit->GetValue());
}
