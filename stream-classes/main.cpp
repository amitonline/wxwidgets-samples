#include "main.h"

int main(int argc, char** argv) {

    wxFFileOutputStream *fos = new wxFFileOutputStream(wxT("data.txt"), wxT("w"));
    if (!fos->IsOk()){
        wxPuts(wxT("Error creating data.txt"));
        return -1;
    }

    wxTextOutputStream* tos = new wxTextOutputStream(*fos);
    wxString row = wxT("");
    wxString data = wxT("");
    for (int i=0; i < 100; i++) {

        row = "This is line number ";
        row.Append(wxString::Format(wxT("%d"), i));
        tos->WriteString(row);
        tos->PutChar(wxT('\n'));
        data.Append(row).Append(wxT('\n'));
    }
    fos->Close();

    fos = new wxFFileOutputStream(wxT("data.zip"));
    wxZipOutputStream* zos = new wxZipOutputStream(*fos);
    if (!zos->IsOk()) {
        wxPuts(wxT("Unable to create data.zip"));
        return -1;
    }

    tos = new wxTextOutputStream(*zos);
    zos->PutNextEntry(wxT("data.txt"));
    tos->WriteString(data);
    zos->Close();

    wxPuts(wxT("done"));

    return 0;
}
