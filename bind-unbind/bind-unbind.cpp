#include "bind-unbind.h"

BindUnbind::BindUnbind(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    wxPanel* base = new wxPanel(this, -1);
    wxBoxSizer *hbox = new wxBoxSizer(wxHORIZONTAL);
    base->SetSizer(hbox);

    m_btn1 = new wxButton(base, -1, wxT("click here"));
    hbox->Add(m_btn1, 1, wxEXPAND | wxALL, 5);
    m_btn1->Bind(wxEVT_BUTTON, &BindUnbind::onClick1, this);

    Center();
}

void BindUnbind::onClick1(wxCommandEvent& evt) {
    m_btn1->SetLabel(wxT("onclick1()"));
    CallAfter(&BindUnbind::removeHandler, 1, 2);
}


void BindUnbind::onClick2(wxCommandEvent& evt) {
    m_btn1->SetLabel(wxT("onclick2()"));
    CallAfter(&BindUnbind::removeHandler, 2, 3);
}


void BindUnbind::onClick3(wxCommandEvent& evt) {
    m_btn1->SetLabel(wxT("onclick3()"));
    CallAfter(&BindUnbind::removeHandler, 3, 1);
}

void BindUnbind::removeHandler(int remove, int add ){

if (remove == 1)
    m_btn1->Unbind(wxEVT_BUTTON, &BindUnbind::onClick1, this);
else if (remove == 2)
    m_btn1->Unbind(wxEVT_BUTTON, &BindUnbind::onClick2, this);
else if (remove == 3)
    m_btn1->Unbind(wxEVT_BUTTON, &BindUnbind::onClick3, this);

if (add == 1)
        m_btn1->Bind(wxEVT_BUTTON, &BindUnbind::onClick1, this);
else if (add == 2)
        m_btn1->Bind(wxEVT_BUTTON, &BindUnbind::onClick2, this);
if (add == 3)
        m_btn1->Bind(wxEVT_BUTTON, &BindUnbind::onClick3, this);

}
