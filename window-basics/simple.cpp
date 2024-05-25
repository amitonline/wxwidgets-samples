#include "simple.h"

Simple::Simple(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(700,300)) {

        Centre();
    }
