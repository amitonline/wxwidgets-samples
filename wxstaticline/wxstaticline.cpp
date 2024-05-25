#include "wxstaticline.h"

StaticLine::StaticLine(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,400)) {

    wxPanel *base = new wxPanel(this, -1);
    base->SetBackgroundColour(wxColour(200,200,200));

    wxStaticLine* line1 = new wxStaticLine(base, -1, wxPoint(10,10), wxSize(200,5));
    wxStaticLine* line2 = new wxStaticLine(base, -1, wxPoint(100,100), wxSize(200,5));
    wxStaticLine* line3 = new wxStaticLine(base, -1, wxPoint(150,140), wxSize(200,5));

    Center();
}
