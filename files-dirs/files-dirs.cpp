#include <wx/wx.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif
#include <wx/string.h>
#include <wx/file.h>
#include <wx/textfile.h>
#include <wx/filefn.h>
#include <wx/filename.h>
#include <wx/dir.h>

int main(int argc, char** argv){
    wxInitialize();

    wxString lines = wxT("This is line 1.\nThis is line 2.\nThis is last line.\n");
    wxFile file;
    file.Create(wxT("text.dat"), true);
    if (file.IsOpened()) {
        file.Write(lines);
        file.Close();
    } else {
        wxPuts(wxT("Could not create text.dat"));
        return -1;
    }

    wxTextFile tfile;
    tfile.Open("text.dat");
    if (tfile.IsOpened()){
        wxPrintf(wxT("Lines in file: %ld\n"), tfile.GetLineCount());
        wxString data;
        data = tfile.GetFirstLine();
        while (!tfile.Eof()) {
            wxPuts(data);
            data = tfile.GetNextLine();
        }
        tfile.Close();
    } else {
        wxPuts(wxT("Could not open text.dat"));
        return -1;
    }

    wxDir curr(wxGetCwd());
    wxString f;
    bool flag  = curr.GetFirst(&f, wxEmptyString, wxDIR_FILES | wxDIR_DIRS);
    while (flag) {
        wxPuts(f);
        flag = curr.GetNext(&f);
    }
    wxPuts(wxT("=============================="));

    flag = curr.GetFirst(&f, wxT("*.cpp"), wxDIR_FILES | wxDIR_DIRS);
    while (flag) {
        wxPuts(f);
        flag = curr.GetNext(&f);
    }
    wxPuts(wxT("============================="));

    bool ret = wxFileName::Mkdir(wxT("tempdir"), wxPATH_MKDIR_FULL);
    if (ret) {
        wxPuts("tempdir created");
        bool ret2 = wxRmDir(wxT("tempdir"));
        if (ret2)
            wxPuts("tempdir deleted");
     } else {
         wxPuts("Unable to create tempdir");
     }

    wxUninitialize();
}
