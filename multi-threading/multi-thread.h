#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif // WX_PRECOMP

class MultiThread:public wxThread {
public:
    MultiThread(wxFrame *parent);
    virtual ~MultiThread();
    virtual void *Entry();

private:
    int m_count;
    wxFrame *m_parent;
    void sendMessage(wxString message);
};

const int EVENT_UPDATE_UI = 101;
