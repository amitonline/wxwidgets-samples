#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP
#include <wx/notebook.h>
#include <wx/grid.h>

class Notebook:public wxFrame {
public:
    Notebook(const wxString& title);

private:
    wxNotebook* m_notebook;
    wxGrid *m_grid[5];
};
