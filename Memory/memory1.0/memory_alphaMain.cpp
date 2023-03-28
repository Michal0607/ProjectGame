/***************************************************************
 * Name:      memory_alphaMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2021-12-16
 * Copyright:  ()
 * License:
 **************************************************************/

#include "memory_alphaMain.h"
#include <wx/msgdlg.h>
#undef _
#define _(s) wxString::FromUTF8(s)
#include <iostream>
#include "NewDialog.h"

using namespace std;


//(*InternalHeaders(memory_alphaDialog)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(memory_alphaDialog)
const long memory_alphaDialog::ID_STATICBITMAP1 = wxNewId();
const long memory_alphaDialog::ID_BUTTON1 = wxNewId();
const long memory_alphaDialog::ID_BUTTON3 = wxNewId();
const long memory_alphaDialog::ID_STATICTEXT1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(memory_alphaDialog,wxDialog)
    //(*EventTable(memory_alphaDialog)
    //*)
END_EVENT_TABLE()

memory_alphaDialog::memory_alphaDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(memory_alphaDialog)
    wxFlexGridSizer* FlexGridSizer1;

    Create(parent, id, _("Memory"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
    FlexGridSizer1 = new wxFlexGridSizer(4, 0, 0, 0);
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("memorylabel.png"))), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICBITMAP1"));
    FlexGridSizer1->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button1 = new wxButton(this, ID_BUTTON1, _("Nowa Gra"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    FlexGridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button3 = new wxButton(this, ID_BUTTON3, _("Wyjście"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    FlexGridSizer1->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Filip Trochimiuk, Michał Szulierz"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    FlexGridSizer1->Fit(this);
    FlexGridSizer1->SetSizeHints(this);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&memory_alphaDialog::OnButton1Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&memory_alphaDialog::OnQuit);
    //*)

    srand(time(0));
    SetIcon(wxICON(ikonka));
}

memory_alphaDialog::~memory_alphaDialog()
{
    //(*Destroy(memory_alphaDialog)
    //*)
}

void memory_alphaDialog::OnQuit(wxCommandEvent& event)
{
    Close();
}

void memory_alphaDialog::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}


void memory_alphaDialog::OnButton1Click(wxCommandEvent& event)
{
    NewDialog* dlg = new NewDialog(this);
    dlg ->ShowModal();
    delete dlg;
}
