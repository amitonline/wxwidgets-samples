#include "multi-thread.h"
#include "runthread.h"


RunThread::RunThread(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    m_text = new wxTextCtrl(this, -1, wxT(""), wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE | wxTE_READONLY);
    this->Bind(wxEVT_THREAD, &RunThread::OnUIUpdate, this);

    MultiThread* thr = new MultiThread(this);
    if (thr->Create() != wxTHREAD_NO_ERROR) {
        wxPuts("Could not create thread.\n");
        return ;
    }

    if (thr->Run() != wxTHREAD_NO_ERROR) {
        wxPuts("Could not run thread.\n");
        return ;

    }

    Center();
}

void RunThread::OnUIUpdate(wxThreadEvent& event) {
    m_text->AppendText(event.GetString());
    m_text->AppendText(wxT("\n"));
}
