#include "DOverlay.h"

void DOverlay::UpdateLabel( const wxString& str, bool side ){
	if( !side )						// LEFT = 0 (false) | RIGHT > 0 (true)
		stLeft->SetLabel( str );
	else
		stRight->SetLabel( str );
}

void DOverlay::UpdateLabel( const wxString& left, const wxString& right ){
	stLeft->SetLabel( left );
	stRight->SetLabel( right );
}

