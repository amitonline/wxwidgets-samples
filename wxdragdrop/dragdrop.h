#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP
#include <wx/dnd.h>
#include <wx/listctrl.h>

class DragDrop:public wxFrame{
public:
    DragDrop(const wxString& title);
    void onDragInit(wxListEvent& evt);

private:
    wxListCtrl *m_list1, *m_list2;
};


class DropTarget:public wxTextDropTarget {
public:
    DropTarget(wxListCtrl *owner);
    virtual bool OnDropText(wxCoord x, wxCoord y, const wxString& text);

private:
    wxListCtrl *m_owner;
};


