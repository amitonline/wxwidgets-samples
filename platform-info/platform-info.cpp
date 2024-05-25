#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP
#include <wx/utils.h>

int main (int arvc, char** argv) {
    wxInitialize();
    wxPuts(wxGetHomeDir());
    wxPuts(wxGetHostName());
    wxPuts(wxGetUserName());
    wxPuts(wxGetOsDescription());

    wxUninitialize();
}
