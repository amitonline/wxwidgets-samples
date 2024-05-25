#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

#include <wx/config.h>
#include <wx/string.h>

int main(int argc, char** argv) {

    wxInitialize();
    wxConfig *config = new wxConfig("myapp");
    if (argc >= 2) {
        wxString arg = argv[1];
        if (arg == wxT("read")) {
            wxPuts(config->Read(wxT("Key 1")));
            wxPuts(config->Read(wxT("Key 2")));
            wxPuts(config->Read(wxT("Key 3")));

            config->SetPath("/folder1");
            wxPuts(config->Read(wxT("Folder1Key")));

            config->SetPath("/folder1/folder11");
            wxPuts(config->Read(wxT("Folder11Key")));
        }
        return 0;

    }

    config->Write(wxT("Key 1"), wxT("Value 1"));
    config->Write(wxT("Key 2"), wxT("Value 2"));
    config->Write(wxT("Key 3"), wxT("Value 3"));

    config->SetPath("/folder1");
    config->Write(wxT("Folder1Key"), wxT("Folder 1 Value"));
    config->SetPath("/folder1/folder11");
    config->Write(wxT("Folder11Key"), wxT("Folder 11 Value"));

    delete config;
    wxPuts(wxT("Done"));


    wxUninitialize();
}
