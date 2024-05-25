#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP
#include <wx/app.h>

int main(int argc, char** argv){
    wxInitialize();
    wxExecute(wxT("ncal 2024"), wxEXEC_ASYNC);
    wxExecute(wxT("ls -l"));
    wxShell(wxT("ncal"));

    unsigned long pid = wxGetProcessId();
    wxString spid = wxString::Format(wxT("Process id = %zu"), pid);
    wxPuts(spid);

    wxUninitialize();
}
