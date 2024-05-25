#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class ListBox:public wxFrame {
public:
    ListBox(const wxString& title);
    void onAdd(wxCommandEvent& evt);
    void onEdit(wxCommandEvent& evt);
    void onDelete(wxCommandEvent& evt);
    void onClear(wxCommandEvent& evt);

private:
    wxListBox* m_lst;
};

