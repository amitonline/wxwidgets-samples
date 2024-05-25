#include "dragdrop.h"



DragDrop::DragDrop(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    wxPanel *base = new wxPanel(this, -1);
    wxBoxSizer *hbox = new wxBoxSizer(wxHORIZONTAL);
    base->SetSizer(hbox);

    m_list1 = new wxListCtrl(base, -1, wxDefaultPosition, wxDefaultSize);
    m_list2 = new wxListCtrl(base, -1, wxDefaultPosition, wxDefaultSize);

    hbox->Add(m_list1, 1, wxALL | wxEXPAND, 2);
    hbox->Add(m_list2, 1, wxALL | wxEXPAND, 2);

    DropTarget *drop = new DropTarget(m_list2);
    m_list2->SetDropTarget(drop);

    wxString str = wxT("");
    for(int i = 1; i <= 50; i++) {
        str = "Item ";
        str.Append(wxString::Format(wxT("%d"), i));
        m_list1->InsertItem(i, str);
    }

    Connect(m_list1->GetId(), wxEVT_LIST_BEGIN_DRAG, wxListEventHandler(DragDrop::onDragInit));
    Center();
}

void DragDrop::onDragInit(wxListEvent& evt) {
    long sel = m_list1->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
    if (sel > -1) {
        wxString text = m_list1->GetItemText(sel, 0);
        wxTextDataObject tdo(text);
        wxDropSource tds(tdo, m_list1);
        tds.DoDragDrop(wxDrag_CopyOnly);


    }

}

DropTarget::DropTarget(wxListCtrl *list) {
    m_owner = list;
}

bool DropTarget::OnDropText(wxCoord x, wxCoord y, const wxString& text) {
    int count = m_owner->GetItemCount();
    m_owner->InsertItem(count, text);

    return TRUE;
}
