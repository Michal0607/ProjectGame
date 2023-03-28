/***************************************************************
 * Name:      memory_alphaMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2021-12-16
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef MEMORY_ALPHAMAIN_H
#define MEMORY_ALPHAMAIN_H
#include <map>
#include <iostream>

//(*Headers(memory_alphaDialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
#include <wx/stattext.h>
//*)

using namespace std;

class memory_alphaDialog: public wxDialog
{
    public:

        memory_alphaDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~memory_alphaDialog();


    private:
        //(*Handlers(memory_alphaDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButtonExit(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(memory_alphaDialog)
        static const long ID_STATICBITMAP1;
        static const long ID_BUTTON1;
        static const long ID_BUTTON3;
        static const long ID_STATICTEXT1;
        //*)

        //(*Declarations(memory_alphaDialog)
        wxButton* Button1;
        wxButton* Button3;
        wxStaticBitmap* StaticBitmap1;
        wxStaticText* StaticText1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // MEMORY_ALPHAMAIN_H
