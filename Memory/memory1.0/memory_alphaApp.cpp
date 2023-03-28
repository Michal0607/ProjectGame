/***************************************************************
 * Name:      memory_alphaApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2021-12-16
 * Copyright:  ()
 * License:
 **************************************************************/

#include "memory_alphaApp.h"

//(*AppHeaders
#include "memory_alphaMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(memory_alphaApp);

bool memory_alphaApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	memory_alphaDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
