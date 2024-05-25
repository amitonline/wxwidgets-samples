#include "complex-ui.h"

ComplexUI::ComplexUI(const wxString& title):
    wxFrame(NULL, -1, title, wxDefaultPosition, wxSize(800,400)) {

    wxPanel* panel = new wxPanel(this, -1);
    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);
    panel->SetSizer(vbox);


    //row1
    wxPanel *panel1 = new wxPanel(panel, -1);
    wxBoxSizer* hbox1 = new wxBoxSizer(wxHORIZONTAL);
    panel1->SetSizer(hbox1);
    wxStaticText *lblInvNo = new wxStaticText(panel1, -1, wxT("Invoice No:"));
    wxStaticText *lblInvDate = new wxStaticText(panel1, -1, wxT("Invoice Date:"));
    wxTextCtrl *txtInvNo = new wxTextCtrl(panel1, -1, wxT(""));
    txtInvNo->SetMaxLength(10);
    wxTextCtrl *txtInvDate = new wxTextCtrl(panel1, -1, wxT(""));
    txtInvDate->SetMaxLength(12);
    wxStaticText *spacer = new wxStaticText(panel1, -1, wxT(""));

    hbox1->Add(lblInvNo, 1, wxEXPAND | wxALL, 3);
    hbox1->Add(txtInvNo, 4, wxEXPAND | wxALL, 3);
    hbox1->Add(spacer, 5, wxEXPAND);
    hbox1->Add(lblInvDate, 1, wxEXPAND | wxALL, 3);
    hbox1->Add(txtInvDate, 6, wxEXPAND | wxALL , 3);



    //row 2
    wxPanel* panel2 = new wxPanel(panel, -1);
    wxBoxSizer* hbox2 = new wxBoxSizer(wxHORIZONTAL);
    panel2->SetSizer(hbox2);
    wxStaticText *lblName = new wxStaticText(panel2, -1, wxT("Name:"));
    wxStaticText *lblAddress =new wxStaticText(panel2, -1, wxT("Address:"));
    wxStaticText* spacer2 = new wxStaticText(panel2, -1, wxT(""));
    wxTextCtrl* txtName = new wxTextCtrl(panel2, -1, wxT(""));
    wxTextCtrl* txtAddress = new wxTextCtrl(panel2, -1, wxT(""));
    txtName->SetMaxLength(40);
    txtAddress->SetMaxLength(100);
    hbox2->Add(lblName,1, wxEXPAND | wxALL, 3);
    hbox2->Add(txtName, 2, wxEXPAND | wxALL, 3);
    hbox2->Add(spacer2, 4, wxEXPAND);
    hbox2->Add(lblAddress, 1, wxEXPAND | wxALL, 3);
    hbox2->Add(txtAddress, 3, wxEXPAND | wxALL, 3);


    //row 4
    wxPanel *panel3 = new wxPanel(panel, -1);
    wxFlexGridSizer *grid = new wxFlexGridSizer(10,5,2,2);
    panel3->SetSizer(grid);

    wxStaticText* colItemId = new wxStaticText(panel3, -1, wxT("Item#"));
    wxStaticText* colItemName= new wxStaticText(panel3, -1, wxT("Item Name"));
    wxStaticText* colItemRate= new wxStaticText(panel3, -1, wxT("Rate"));
    wxStaticText* colItemQty = new wxStaticText(panel3, -1, wxT("Qty"));
    wxStaticText* colItemPrice = new wxStaticText(panel3, -1, wxT("Price"));

    grid->Add(colItemId, 1, wxEXPAND | wxALL, 2);
    grid->Add(colItemName, 3, wxEXPAND | wxALL, 2);
    grid->Add(colItemRate, 1, wxEXPAND | wxALL, 2);
    grid->Add(colItemQty, 1, wxEXPAND | wxALL, 2);
    grid->Add(colItemPrice, 1, wxEXPAND | wxALL, 2);
    grid->AddGrowableCol(1);

    for (int row=0; row < 9; row++) {
        for (int col=0; col < 5; col++) {
            wxTextCtrl *txt = new wxTextCtrl(panel3, -1);
            if (col == 2)
                grid->Add(txt, 3, wxEXPAND);
            else
                grid->Add(txt, 1, wxEXPAND);
        }
        grid->AddGrowableRow(row);
    }

    //final ui
    vbox->Add(panel1, 0, wxEXPAND);
    vbox->Add(panel2, 0, wxEXPAND);
    vbox->Add(panel3, 1, wxEXPAND);

    Center();

}
