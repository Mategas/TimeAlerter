#ifndef VPRINCIPAL_H
#define VPRINCIPAL_H
#include "Ventanas.h"
#include "SWClock.h"
#include "DOverlay.h"
#include <wx/timer.h>
#include <wx/datetime.h>

class VPrincipal : public CoreFrame {
	
private:
	wxTimer* mainTimer;
	SWClock* mainClock;
	
	DOverlay* ovClock;
	
	wxString swtime;
	wxDateTime now;
	
	void WindowSetUp();
protected:
	void OnMinimize( wxIconizeEvent& event ) ;
	void OnStart( wxCommandEvent& event ) ;
	void OnReset( wxCommandEvent& event ) ;
	void UpdateClock( wxTimerEvent& event ) ;
	
	void OnCheckLogs( wxCommandEvent& event ) ;
	void OnLogsClick( wxHyperlinkEvent& event ) ;
	
	void OnCheckAvisar( wxCommandEvent& event ) ;
	void OnCheckIntrusive( wxCommandEvent& event ) ;
	void OnCheckLimitar( wxCommandEvent& event ) ;
	
	void OnCheckOverlay( wxCommandEvent& event ) ;
	
	void Saltear( wxCommandEvent& event ) ;
	
public:
	VPrincipal(wxWindow *parent=NULL);
	~VPrincipal();
};

#endif

