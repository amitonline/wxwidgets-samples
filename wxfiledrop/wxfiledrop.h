#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

#include <wx/dnd.h>
#include <wx/listctrl.h>

class FileDragDrop:public wxFrame {
public:
    FileDragDrop(const wxString& title);
private:
    wxTextCtrl *m_text;
};

class FileDropTarget:public wxFileDropTarget {
public:
    FileDropTarget(wxTextCtrl* txt);
    virtual bool OnDropFiles(wxCoord x, wxCoord y, const wxArrayString& files);

    private:
        wxTextCtrl *m_text;

};
