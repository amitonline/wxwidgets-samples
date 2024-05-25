#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP
#include <wx/string.h>
#include <wx/datetime.h>

int main(int argc, char&& argv) {
    wxInitialize();
    wxDateTime now = wxDateTime::Now();
    wxString format1 = now.Format();
    wxString format2 = now.Format(wxT("%x"));
    wxString format3 = now.Format(wxT("%X"));
    wxString format4 = now.Format(wxT("%A %B"));

    wxPuts(format1+ wxT(", ") + format2 + wxT(", ") + format3 + wxT(", ") + format4);
    wxString nyc = now.Format(wxT("%a %T"), wxDateTime::EDT).c_str();
    wxPuts(wxT("NY = ") + nyc);

    wxString tokyo  = now.Format(wxT("%a %T"), wxDateTime::GMT9).c_str();
    wxPuts(wxT("Tokyo = ") + tokyo);

    wxDateSpan span1 (0,1,0); wxDateSpan span2 (1,6,0); wxTimeSpan span3(0,30,0);
    wxDateTime date1 = now.Add(span1);
    wxPrintf(date1.Format(wxT("%B %d %Y\n")));

    wxDateTime date2 = now.Add(span2);
    wxPrintf(date2.Format(wxT("%B %d %Y\n")));

    wxDateTime time1 = wxDateTime::Now();
    time1.Add(span3);
    wxPrintf(time1.Format(wxT("%X\n"), wxDateTime::GMT5));

    wxUninitialize();
}
