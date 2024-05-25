#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP
#include <wx/regex.h>
#include <wx/string.h>


void sample1() {

    wxString pattern = wxT("([A-Z]+)");
    wxRegEx *regexp = new wxRegEx(pattern);
    wxString text = wxT("some of this TEXT is in capitals");
    wxPuts(text);

    bool result = regexp->Compile(pattern);
    if (!result) {
        wxPuts("Compile failed.");
        return;
    }
    if (regexp->Matches(text)) {
            wxPrintf(wxT("Match=%s\n"), regexp->GetMatch(text, 0) );
    }

    delete regexp;

}


void sample2() {

    wxString pattern = wxT("([0-9]+)");
    wxRegEx *regexp = new wxRegEx(pattern);
    wxString text = wxT("this is a text 1817,128128 some words 32withtext6124.word09");
    wxPuts(text);

    bool result = regexp->Compile(pattern);
    if (!result) {
        wxPuts("Compile failed.");
        return;
    }
    if (regexp->Matches(text)) {
            size_t index=0, len=0, start=0;

            while (regexp->GetMatch(&start, &len, 0)) {
                wxPrintf(wxT("Match=%s\n"), regexp->GetMatch(text, 0));
                index = start+len;
                text = text.Mid(index);
                if (!regexp->Matches(text))
                    break;
            }
    }

    delete regexp;

}

int main(int argc, char** argv) {

    wxInitialize();
    sample1();
    sample2();
    wxUninitialize();
}

