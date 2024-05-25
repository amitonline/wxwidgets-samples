#include "archive.h"
#include <wx/wfstream.h>
#include <wx/zipstrm.h>
#include <wx/archive.h>
#include <wx/dir.h>

Archive::Archive(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,300)) {

    wxPanel *base = new wxPanel(this, -1);
    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
    base->SetSizer(vbox);

    m_text = new wxTextCtrl(base, -1, wxT(""), wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE | wxTE_READONLY);
    wxButton *btnZip = new wxButton(base, -1, wxT("Create Zip"));
    wxButton *btnUnzip = new wxButton(base, -1, wxT("List Zip Contents"));

    vbox->Add(btnZip, 1, wxEXPAND | wxALL,4);
    vbox->Add(btnUnzip, 1, wxEXPAND | wxALL,4);
    vbox->Add(m_text, 4, wxEXPAND | wxALL, 2);

    btnZip->Bind(wxEVT_BUTTON, &Archive::onZip, this);
    btnUnzip->Bind(wxEVT_BUTTON, &Archive::onUnzip, this);

    Center();
}

void Archive::onZip(wxCommandEvent& evt) {
    wxString msg = wxT("");
    m_text->Clear();
    msg = wxT("Creating test zip..\n");
    wxFFileOutputStream* fos = new wxFFileOutputStream(wxT("test.zip"));
    wxZipOutputStream *zos = new wxZipOutputStream(fos);

    wxDir dir(wxGetCwd());
    if (!dir.IsOpened()) {
        msg.Append(wxT("Error opening current directory.\n"));
    } else {
        wxString filename;
        bool retVal =  dir.GetFirst(&filename, wxT("*.*"));
        while (retVal) {
                zos->PutNextEntry(filename);
                wxFFileInputStream *fis = new wxFFileInputStream(filename);
                zos->Write(*fis);
                msg.Append("Added ").Append(filename).Append("\n");
                retVal = dir.GetNext(&filename);
        }
    }

    zos->Close();
    fos->Close();
    msg.Append("Closed zip archive.\n");
    m_text->AppendText(msg);
}

void Archive::onUnzip(wxCommandEvent& evt) {
    wxString msg = wxT("");
    m_text->Clear();

    if (wxFileExists(wxT("test.zip"))) {
        wxFFileInputStream *fis = new wxFFileInputStream(wxT("test.zip"));
        wxZipInputStream *zis = new wxZipInputStream(fis);

        wxArchiveEntry *entry = zis->GetNextEntry();
        while (entry != NULL) {
            off_t size = entry->GetSize();
            msg.Append(entry->GetName().Append(": (")).Append(wxString::Format(wxT("%lu"), size)).
                Append(" bytes)\n");
            entry = zis->GetNextEntry();
        }
        m_text->AppendText(msg);

    } else {
        msg.Append("Zip file does not exist.\n");
        m_text->AppendText(msg);
    }
}


