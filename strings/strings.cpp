#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP
#include <wx/string.h>

int main (int argc, char** argv){
    wxInitialize();
    wxString str1 = wxT("First "); wxString str2 = wxT("Second "); wxString str3 = wxT("Third ");
    wxPuts(wxT("Concatenating:"));
    wxPuts(str1 + str2 + str3 + "\n");

    wxPuts(wxT("Appending.."));
    wxPuts(str1.Append(str3));
    wxString sLength = wxString::Format(wxT("Length of string is %zu"), str1.Length());
    wxPuts(sLength);

    wxPuts(wxT("Case.."));
    wxPuts(str1.Upper() + wxT(" " ) + str2.Lower() + wxT(" ")  + str1.Capitalize() + wxT("\n"));
    wxPuts(wxT("Extraction..."));
    wxPuts(str1.Left(2) + wxT(", " ) + str2.Right(2) + wxT(" ") + str1.Mid(1,4) + wxT("\n"));

    wxPuts(wxT("Search.."));
    if (str1.Contains("irst"))
        wxPuts(str1 + wxT(" contains irst\n"));
    if (str1.Find("dss") == wxNOT_FOUND)
        wxPuts(str1 + wxT(" did not contain any word"));

    wxUninitialize();
}
