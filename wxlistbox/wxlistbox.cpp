#include "wxlistbox.h"

ListBox::ListBox(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    wxPanel *base = new wxPanel(this, -1);
    wxBoxSizer* hbox = new wxBoxSizer(wxHORIZONTAL);
    base->SetSizer(hbox);

    wxPanel *leftPanel = new wxPanel(base, -1);
    wxBoxSizer *vbox1 = new wxBoxSizer(wxVERTICAL);
    leftPanel->SetSizer(vbox1);

    m_lst = new wxListBox(leftPanel, -1, wxDefaultPosition, wxDefaultSize);
    vbox1->Add(m_lst, 1, wxEXPAND | wxALL, 1);

    wxPanel *rightPanel = new wxPanel(base, -1);
    wxBoxSizer *vbox2 = new wxBoxSizer(wxVERTICAL);
    rightPanel->SetSizer(vbox2);

    wxButton *btnAdd = new wxButton(rightPanel, -1, wxT("Add"));
    wxButton *btnEdit = new wxButton(rightPanel, -1, wxT("Edit"));
    wxButton *btnDelete = new wxButton(rightPanel, -1, wxT("Delete"));
    wxButton *btnClear = new wxButton(rightPanel, -1, wxT("Clear"));
    vbox2->Add(btnAdd,1, wxEXPAND | wxALL, 2);
    vbox2->Add(btnEdit,1, wxEXPAND | wxALL, 2);
    vbox2->Add(btnDelete,1, wxEXPAND | wxALL, 2);
    vbox2->Add(btnClear,1, wxEXPAND | wxALL, 2);

    btnAdd->Bind(wxEVT_BUTTON, &ListBox::onAdd, this);
    btnEdit->Bind(wxEVT_BUTTON, &ListBox::onEdit, this);
    btnDelete->Bind(wxEVT_BUTTON, &ListBox::onDelete, this);
    btnClear->Bind(wxEVT_BUTTON, &ListBox::onClear, this);

    hbox->Add(leftPanel, 2, wxEXPAND | wxALL,1);
    hbox->Add(rightPanel, 1, wxEXPAND | wxALL, 1);

    Center();

}

void ListBox::onAdd(wxCommandEvent& evt) {
    wxString str = wxGetTextFromUser(wxT("Add new item"), wxT(""));
    if (str != "")
        m_lst->Append(str);
}

void ListBox::onEdit(wxCommandEvent& evt) {
    int sel = m_lst->GetSelection();
    if (sel == -1) {
        wxMessageDialog* dlg = new wxMessageDialog(NULL, wxT("No item selected"), wxT(""));
        dlg->ShowModal();
        return;
    }
    wxString selString = m_lst->GetString(sel);
    wxString changed = wxGetTextFromUser(wxT("Edit"), wxT(""), selString);
    if (changed != "") {
            m_lst->Delete(sel);
            m_lst->Insert(changed, sel);
    }

}

void ListBox::onDelete(wxCommandEvent& evt) {
    int sel = m_lst->GetSelection();
    if (sel == -1) {
        wxMessageDialog* dlg = new wxMessageDialog(NULL, wxT("No item selected"), wxT(""));
        dlg->ShowModal();
        return;
    }

    m_lst->Delete(sel);
}

void ListBox::onClear(wxCommandEvent& evt) {
    wxMessageDialog *dlg = new wxMessageDialog(NULL, wxT("Are you sure?"), wxT(""),wxYES_NO | wxNO_DEFAULT | wxICON_QUESTION);
    int retVal = dlg->ShowModal();
    if (retVal == wxID_YES)
        m_lst->Clear();

}


