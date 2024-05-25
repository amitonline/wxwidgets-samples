#include "multi-thread.h"

MultiThread::MultiThread(wxFrame* parent):
    wxThread() {

    m_count = 0;
    m_parent = parent;
}

MultiThread::~MultiThread() {

}

wxThread::ExitCode MultiThread::Entry() {
    sendMessage(wxT("Thread started.\n"));
    for (int m_count = 0; m_count <= 10; m_count++) {
        if (TestDestroy())
            break;
        sendMessage(wxString::Format(wxT(" Thread no.%d.\n"), m_count));
        wxThread::Sleep(1000);

    }

    sendMessage(wxT("Thread completed.\n"));

    return NULL;
}

void MultiThread::sendMessage(wxString message){
    wxThreadEvent event(wxEVT_THREAD, EVENT_UPDATE_UI);
    event.SetString(message);
    m_parent->GetEventHandler()->AddPendingEvent(event);
}


