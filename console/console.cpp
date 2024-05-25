#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP
#include <wx/string.h>
#include <iostream>

int main(int argc, char** argv){
    wxInitialize();
    wxPuts(wxT("String displayed using wxPuts"));
    wxPuts(wxT("Enter a 10 char alphanumeric string without spaces: "));
    char c[10];
    std::cin >> c;
    wxPuts(wxT("Text entered: ")); wxPuts(c);
    wxUninitialize();
}
