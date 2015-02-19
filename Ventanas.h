///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __VENTANAS_H__
#define __VENTANAS_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/textctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/combobox.h>
#include <wx/button.h>
#include <wx/hyperlink.h>
#include <wx/tglbtn.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class CoreFrame
///////////////////////////////////////////////////////////////////////////////
class CoreFrame : public wxFrame 
{
	private:
	
	protected:
		wxTextCtrl* tcClock;
		wxCheckBox* cbNotify;
		wxCheckBox* cbIntrusive;
		wxComboBox* combNotify;
		wxCheckBox* cbLimit;
		wxComboBox* combLimit;
		wxButton* bAlarma;
		wxButton* bApps;
		wxCheckBox* cbLogs;
		wxHyperlinkCtrl* hlLogs;
		wxToggleButton* tgbStart;
		wxButton* bReset;
		wxCheckBox* cbOverlay;
		
		wxBoxSizer* Left;
		wxBoxSizer* bSizerL0;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnMinimize( wxIconizeEvent& event ) { event.Skip(); }
		virtual void Saltear( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCheckAvisar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCheckIntrusive( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCheckLimitar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCheckLogs( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnLogsClick( wxHyperlinkEvent& event ) { event.Skip(); }
		virtual void OnStart( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnReset( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCheckOverlay( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		CoreFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("TimeAlerter!"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 350,220 ), long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLIP_CHILDREN|wxTAB_TRAVERSAL );
		
		~CoreFrame();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class OverlayDialog
///////////////////////////////////////////////////////////////////////////////
class OverlayDialog : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* stLeft;
		wxStaticText* stRight;
	
	public:
		
		OverlayDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 250,60 ), long style = wxCAPTION|wxSTAY_ON_TOP|wxCLIP_CHILDREN|wxTAB_TRAVERSAL ); 
		~OverlayDialog();
	
};

#endif //__VENTANAS_H__
