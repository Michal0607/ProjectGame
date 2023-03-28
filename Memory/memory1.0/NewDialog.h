#ifndef NEWDIALOG_H
#define NEWDIALOG_H
#include <map>
#include <iostream>
#include <vector>

using namespace std;


//(*Headers(NewDialog)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
//*)

class NewDialog: public wxDialog
{
	public:

		NewDialog(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~NewDialog();

		//(*Declarations(NewDialog)
		wxBitmapButton* BitmapButton10;
		wxBitmapButton* BitmapButton11;
		wxBitmapButton* BitmapButton12;
		wxBitmapButton* BitmapButton13;
		wxBitmapButton* BitmapButton14;
		wxBitmapButton* BitmapButton15;
		wxBitmapButton* BitmapButton16;
		wxBitmapButton* BitmapButton1;
		wxBitmapButton* BitmapButton2;
		wxBitmapButton* BitmapButton3;
		wxBitmapButton* BitmapButton4;
		wxBitmapButton* BitmapButton5;
		wxBitmapButton* BitmapButton6;
		wxBitmapButton* BitmapButton7;
		wxBitmapButton* BitmapButton8;
		wxBitmapButton* BitmapButton9;
		wxButton* Button2;
		//*)

	protected:

		//(*Identifiers(NewDialog)
		static const long ID_BITMAPBUTTON1;
		static const long ID_BITMAPBUTTON2;
		static const long ID_BITMAPBUTTON3;
		static const long ID_BITMAPBUTTON4;
		static const long ID_BITMAPBUTTON5;
		static const long ID_BITMAPBUTTON6;
		static const long ID_BITMAPBUTTON7;
		static const long ID_BITMAPBUTTON8;
		static const long ID_BITMAPBUTTON9;
		static const long ID_BITMAPBUTTON10;
		static const long ID_BITMAPBUTTON11;
		static const long ID_BITMAPBUTTON12;
		static const long ID_BITMAPBUTTON13;
		static const long ID_BITMAPBUTTON14;
		static const long ID_BITMAPBUTTON15;
		static const long ID_BITMAPBUTTON16;
		static const long ID_BUTTON2;
		//*)

	private:

		//(*Handlers(NewDialog)
		void OnBitmapButton1Click(wxCommandEvent& event);
		void OnBitmapButton2Click(wxCommandEvent& event);
		void OnBitmapButton3Click(wxCommandEvent& event);
		void OnBitmapButton4Click(wxCommandEvent& event);
		void OnBitmapButton5Click(wxCommandEvent& event);
		void OnBitmapButton6Click(wxCommandEvent& event);
		void OnBitmapButton7Click(wxCommandEvent& event);
		void OnBitmapButton8Click(wxCommandEvent& event);
		void OnBitmapButton9Click(wxCommandEvent& event);
		void OnBitmapButton10Click(wxCommandEvent& event);
		void OnBitmapButton11Click(wxCommandEvent& event);
		void OnBitmapButton12Click(wxCommandEvent& event);
		void OnBitmapButton13Click(wxCommandEvent& event);
		void OnBitmapButton14Click(wxCommandEvent& event);
		void OnBitmapButton15Click(wxCommandEvent& event);
		void OnBitmapButton16Click(wxCommandEvent& event);
		void OnButtonLosuj(wxCommandEvent& event);
		void OnButtonReset(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
		wxBitmapButton* pole[16];
        wxBitmap rysunki[9];
        map<int, int> id2nr;
        void restart();
        void losowanie();
        wxBitmap pl[16];
        int numery_bitmap[16];
        vector<int> numerki;
        void ChangeEl(int n,int x);

        void obsluga(int);
        int proby=0;
        int wygranko=0;
};

#endif
