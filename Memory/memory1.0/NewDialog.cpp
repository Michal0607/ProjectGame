#include "NewDialog.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(NewDialog)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(NewDialog)
const long NewDialog::ID_BITMAPBUTTON1 = wxNewId();
const long NewDialog::ID_BITMAPBUTTON2 = wxNewId();
const long NewDialog::ID_BITMAPBUTTON3 = wxNewId();
const long NewDialog::ID_BITMAPBUTTON4 = wxNewId();
const long NewDialog::ID_BITMAPBUTTON5 = wxNewId();
const long NewDialog::ID_BITMAPBUTTON6 = wxNewId();
const long NewDialog::ID_BITMAPBUTTON7 = wxNewId();
const long NewDialog::ID_BITMAPBUTTON8 = wxNewId();
const long NewDialog::ID_BITMAPBUTTON9 = wxNewId();
const long NewDialog::ID_BITMAPBUTTON10 = wxNewId();
const long NewDialog::ID_BITMAPBUTTON11 = wxNewId();
const long NewDialog::ID_BITMAPBUTTON12 = wxNewId();
const long NewDialog::ID_BITMAPBUTTON13 = wxNewId();
const long NewDialog::ID_BITMAPBUTTON14 = wxNewId();
const long NewDialog::ID_BITMAPBUTTON15 = wxNewId();
const long NewDialog::ID_BITMAPBUTTON16 = wxNewId();
const long NewDialog::ID_BUTTON2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(NewDialog,wxDialog)
	//(*EventTable(NewDialog)
	//*)
END_EVENT_TABLE()

NewDialog::NewDialog(wxWindow* parent,wxWindowID id)
{
	//(*Initialize(NewDialog)
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;
	wxFlexGridSizer* FlexGridSizer3;

	Create(parent, wxID_ANY, _("Memory"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	FlexGridSizer1 = new wxFlexGridSizer(2, 1, 0, 0);
	FlexGridSizer2 = new wxFlexGridSizer(4, 4, 0, 0);
	BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("pusty.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	FlexGridSizer2->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton2 = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T("pusty.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
	FlexGridSizer2->Add(BitmapButton2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton3 = new wxBitmapButton(this, ID_BITMAPBUTTON3, wxBitmap(wxImage(_T("pusty.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
	FlexGridSizer2->Add(BitmapButton3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton4 = new wxBitmapButton(this, ID_BITMAPBUTTON4, wxBitmap(wxImage(_T("pusty.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
	FlexGridSizer2->Add(BitmapButton4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton5 = new wxBitmapButton(this, ID_BITMAPBUTTON5, wxBitmap(wxImage(_T("pusty.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
	FlexGridSizer2->Add(BitmapButton5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton6 = new wxBitmapButton(this, ID_BITMAPBUTTON6, wxBitmap(wxImage(_T("pusty.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
	FlexGridSizer2->Add(BitmapButton6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton7 = new wxBitmapButton(this, ID_BITMAPBUTTON7, wxBitmap(wxImage(_T("pusty.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON7"));
	FlexGridSizer2->Add(BitmapButton7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton8 = new wxBitmapButton(this, ID_BITMAPBUTTON8, wxBitmap(wxImage(_T("pusty.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON8"));
	FlexGridSizer2->Add(BitmapButton8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton9 = new wxBitmapButton(this, ID_BITMAPBUTTON9, wxBitmap(wxImage(_T("pusty.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON9"));
	FlexGridSizer2->Add(BitmapButton9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton10 = new wxBitmapButton(this, ID_BITMAPBUTTON10, wxBitmap(wxImage(_T("pusty.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON10"));
	FlexGridSizer2->Add(BitmapButton10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton11 = new wxBitmapButton(this, ID_BITMAPBUTTON11, wxBitmap(wxImage(_T("pusty.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON11"));
	FlexGridSizer2->Add(BitmapButton11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton12 = new wxBitmapButton(this, ID_BITMAPBUTTON12, wxBitmap(wxImage(_T("pusty.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON12"));
	FlexGridSizer2->Add(BitmapButton12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton13 = new wxBitmapButton(this, ID_BITMAPBUTTON13, wxBitmap(wxImage(_T("pusty.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON13"));
	FlexGridSizer2->Add(BitmapButton13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton14 = new wxBitmapButton(this, ID_BITMAPBUTTON14, wxBitmap(wxImage(_T("pusty.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON14"));
	FlexGridSizer2->Add(BitmapButton14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton15 = new wxBitmapButton(this, ID_BITMAPBUTTON15, wxBitmap(wxImage(_T("pusty.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON15"));
	FlexGridSizer2->Add(BitmapButton15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton16 = new wxBitmapButton(this, ID_BITMAPBUTTON16, wxBitmap(wxImage(_T("pusty.jpg"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON16"));
	FlexGridSizer2->Add(BitmapButton16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer3 = new wxFlexGridSizer(0, 3, 0, 0);
	Button2 = new wxButton(this, ID_BUTTON2, _("RESET!"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	FlexGridSizer3->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnBitmapButton1Click);
	Connect(ID_BITMAPBUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnBitmapButton2Click);
	Connect(ID_BITMAPBUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnBitmapButton3Click);
	Connect(ID_BITMAPBUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnBitmapButton4Click);
	Connect(ID_BITMAPBUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnBitmapButton5Click);
	Connect(ID_BITMAPBUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnBitmapButton6Click);
	Connect(ID_BITMAPBUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnBitmapButton7Click);
	Connect(ID_BITMAPBUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnBitmapButton8Click);
	Connect(ID_BITMAPBUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnBitmapButton9Click);
	Connect(ID_BITMAPBUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnBitmapButton10Click);
	Connect(ID_BITMAPBUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnBitmapButton11Click);
	Connect(ID_BITMAPBUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnBitmapButton12Click);
	Connect(ID_BITMAPBUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnBitmapButton13Click);
	Connect(ID_BITMAPBUTTON14,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnBitmapButton14Click);
	Connect(ID_BITMAPBUTTON15,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnBitmapButton15Click);
	Connect(ID_BITMAPBUTTON16,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnBitmapButton16Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialog::OnButtonReset);
	//*)

	rysunki[0]=wxBitmap(wxImage(_T("pusty.jpg")));
    rysunki[1]=wxBitmap(wxImage(_T("piesio.png")));
    rysunki[2]=wxBitmap(wxImage(_T("misio.jpg")));
    rysunki[3]=wxBitmap(wxImage(_T("mucha.jpeg")));
    rysunki[4]=wxBitmap(wxImage(_T("orzel.jpg")));
    rysunki[5]=wxBitmap(wxImage(_T("szczupak.jpg")));
    rysunki[6]=wxBitmap(wxImage(_T("strus.jpg")));
    rysunki[7]=wxBitmap(wxImage(_T("kangurek.jpg")));
    rysunki[8]=wxBitmap(wxImage(_T("goryl.jpg")));
    rysunki[9]=wxBitmap(wxImage(_T("krzyzyk.png")));
    pole[0] = BitmapButton1;
    pole[1] = BitmapButton2;
    pole[2] = BitmapButton3;
    pole[3] = BitmapButton4;
    pole[4] = BitmapButton5;
    pole[5] = BitmapButton6;
    pole[6] = BitmapButton7;
    pole[7] = BitmapButton8;
    pole[8] = BitmapButton9;
    pole[9] = BitmapButton10;
    pole[10] = BitmapButton11;
    pole[11] = BitmapButton12;
    pole[12] = BitmapButton13;
    pole[13] = BitmapButton14;
    pole[14] = BitmapButton15;
    pole[15] = BitmapButton16;

    for(int i=0; i<16; i++){
        id2nr[ pole[i]->GetId() ] = i;
    }

    losowanie();
    SetIcon(wxICON(ikonka));
}

NewDialog::~NewDialog()
{
	//(*Destroy(NewDialog)
	//*)
}

void NewDialog::restart()
{

}

void NewDialog::losowanie(){
    int tab[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

for(int i=0;i<8;i++)
    {

        for(int j=0;j<2;j++)
        {
            int xx=rand()%16;

            while(tab[xx]!=0)
            {
                xx=rand()%16;

            }

            tab[xx]=1;
            pl[xx]= rysunki[i+1];
            numery_bitmap[xx]=i+1;


        }
    }
}

void NewDialog::obsluga(int i) {
    pole[i]->SetBitmapDisabled(pl[i]);
    pole[i]->Enable(false);
    numerki.push_back(i);
    if (numerki.size() % 2 == 0) {
            wxEventBlocker blocker(this);
            int ost = numerki[numerki.size()-1];
            int przedost = numerki[numerki.size()-2];
            Update();
            if (numery_bitmap[ost] != numery_bitmap[przedost]) {
                Sleep(900);
                pole[ost]->Enable(true);
                pole[przedost]->Enable(true);
                proby++;
            }else{
                Sleep(400);
                wygranko=wygranko+1;
                proby++;
            }
    }
        if(wygranko==8){
            wxMessageBox("HURRA! UDA£O CI SIÊ WYGRAÆ!\nLiczba twoich prob to: "
                         +wxString::Format("%i",proby),_("Memory"));
            Close();

    }
}

void NewDialog::OnBitmapButton1Click(wxCommandEvent& event)
{
    obsluga(0);
}

void NewDialog::OnBitmapButton2Click(wxCommandEvent& event)
{
    obsluga(1);
}

void NewDialog::OnBitmapButton3Click(wxCommandEvent& event)
{
    obsluga(2);
}

void NewDialog::OnBitmapButton4Click(wxCommandEvent& event)
{
    obsluga(3);
}

void NewDialog::OnBitmapButton5Click(wxCommandEvent& event)
{
    obsluga(4);
}

void NewDialog::OnBitmapButton6Click(wxCommandEvent& event)
{
    obsluga(5);
}

void NewDialog::OnBitmapButton7Click(wxCommandEvent& event)
{
    obsluga(6);
}

void NewDialog::OnBitmapButton8Click(wxCommandEvent& event)
{
    obsluga(7);
}

void NewDialog::OnBitmapButton9Click(wxCommandEvent& event)
{
    obsluga(8);
}

void NewDialog::OnBitmapButton10Click(wxCommandEvent& event)
{
    obsluga(9);
}

void NewDialog::OnBitmapButton11Click(wxCommandEvent& event)
{
    obsluga(10);
}

void NewDialog::OnBitmapButton12Click(wxCommandEvent& event)
{
    obsluga(11);
}

void NewDialog::OnBitmapButton13Click(wxCommandEvent& event)
{
    obsluga(12);
}

void NewDialog::OnBitmapButton14Click(wxCommandEvent& event)
{
    obsluga(13);
}

void NewDialog::OnBitmapButton15Click(wxCommandEvent& event)
{
    obsluga(14);
}

void NewDialog::OnBitmapButton16Click(wxCommandEvent& event)
{
    obsluga(15);
}

void NewDialog::OnButtonReset(wxCommandEvent& event)
{
    for(int i=0;i<16;i++){
        pole[i]->SetBitmapDisabled(rysunki[0]);
    }
    for(int i=0;i<16;i++){
        pole[i]->Enable(true);
    }
    losowanie();
    numerki.resize(0);
    wygranko = 0;
    proby=0;
}
