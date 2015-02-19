#ifndef DOVERLAY_H
#define DOVERLAY_H
#include "Ventanas.h"

enum side { LEFT = 0, RIGHT };

class DOverlay : public OverlayDialog {
	
public:
	DOverlay(wxWindow *parent=NULL) : OverlayDialog(parent){};
	void UpdateLabel( const wxString& str, bool side );
	void UpdateLabel( const wxString& left, const wxString& right );
};

#endif

