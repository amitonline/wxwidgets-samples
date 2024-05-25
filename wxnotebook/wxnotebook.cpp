#include "wxnotebook.h"

Notebook::Notebook(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    m_notebook = new wxNotebook(this, -1, wxDefaultPosition, wxDefaultSize, wxNB_BOTTOM);
    wxString sTitle;

    for (int i =0; i < 5; i++) {
        m_grid[i] = new wxGrid(m_notebook, -1);
        m_grid[i]->CreateGrid(20,30);
        m_grid[i]->SetRowLabelSize(50);
        m_grid[i]->SetColLabelSize(25);
        m_grid[i]->SetRowLabelAlignment(wxALIGN_RIGHT, wxALIGN_CENTER);

        for (int r=0; r < 20; r++) {
            m_grid[i]->SetRowSize(r,25);
        }
        sTitle = "Sheet ";
        sTitle.Append(wxString::Format(wxT("%d"), (i+1)));
        m_notebook->AddPage(m_grid[i], sTitle);

    }
    Center();
}
