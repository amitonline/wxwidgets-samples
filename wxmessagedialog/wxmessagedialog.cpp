#include "wxmessagedialog.h"

XDialog::XDialog(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,200)) {

    wxPanel *base = new wxPanel(this, -1);
    wxBoxSizer* vbox = new wxBoxSizer(wxVERTICAL);
    base->SetSizer(vbox);

    wxButton *btn1 = new wxButton(base, ID_BTN1, wxT("Info"));
    wxButton *btn2 = new wxButton(base, ID_BTN2, wxT("Error"));
    wxButton *btn3 = new wxButton(base, ID_BTN3, wxT("Question"));
    wxButton *btn4 = new wxButton(base, ID_BTN4, wxT("Exclamation"));

    vbox->Add(btn1, 1, wxALL | wxEXPAND | wxCENTER, 5);
    vbox->Add(btn2, 1, wxALL | wxEXPAND | wxCENTER, 5);
    vbox->Add(btn3, 1, wxALL | wxEXPAND | wxCENTER, 5);
    vbox->Add(btn4, 1, wxALL | wxEXPAND | wxCENTER, 5);

    btn1->Bind(wxEVT_BUTTON, &XDialog::onClick, this);
    btn2->Bind(wxEVT_BUTTON, &XDialog::onClick, this);
    btn3->Bind(wxEVT_BUTTON, &XDialog::onClick, this);
    btn4->Bind(wxEVT_BUTTON, &XDialog::onClick, this);

    Center();
}

void XDialog::onClick(wxCommandEvent& evt) {
    int id = evt.GetId();

    wxString msg = wxT("");
    wxString title = wxT("");
    int flags = wxOK;

    switch (id) {
        case ID_BTN1:
            title = wxT("Info"); msg = "This is information";
            break;
        case ID_BTN2:
            title = wxT("Error"); msg = "This is error";
            break;
        case ID_BTN3:
            title = wxT("Question"); msg = "This is question";
            break;
        case ID_BTN4:
            title = wxT("Exclamation"); msg = "This is exclamation";
            break;
    }

    wxMessageDialog* dlg = new wxMessageDialog(NULL, msg, title, flags);
    dlg->ShowModal();
}
