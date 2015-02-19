///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Ventanas.h"

///////////////////////////////////////////////////////////////////////////

CoreFrame::CoreFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DLIGHT ) );
	
	wxBoxSizer* MainSizer;
	MainSizer = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* Top;
	Top = new wxBoxSizer( wxHORIZONTAL );
	
	tcClock = new wxTextCtrl( this, wxID_ANY, wxT("00:00:00"), wxPoint( -1,-1 ), wxSize( -1,-1 ), wxTE_CENTRE|wxTE_NO_VSCROLL|wxTE_PROCESS_ENTER|wxTE_READONLY );
	tcClock->SetFont( wxFont( 43, 70, 90, 92, false, wxEmptyString ) );
	tcClock->SetForegroundColour( wxColour( 230, 0, 0 ) );
	tcClock->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INFOBK ) );
	
	Top->Add( tcClock, 1, wxALIGN_CENTER|wxEXPAND, 5 );
	
	
	MainSizer->Add( Top, 1, wxALIGN_CENTER_HORIZONTAL|wxEXPAND|wxALL, 10 );
	
	wxBoxSizer* Bot;
	Bot = new wxBoxSizer( wxHORIZONTAL );
	
	/*wxBoxSizer* Left;*/
	Left = new wxBoxSizer( wxVERTICAL );
	
	cbNotify = new wxCheckBox( this, wxID_ANY, wxT("Avisar cada:"), wxDefaultPosition, wxDefaultSize, 0 );
	Left->Add( cbNotify, 1, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	/*wxBoxSizer* bSizerL0;*/
	bSizerL0 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizerL0->Add( 15, 0, 0, 0, 5 );
	
	cbIntrusive = new wxCheckBox( this, wxID_ANY, wxT("Intrusivo"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	bSizerL0->Add( cbIntrusive, 1, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	
	Left->Add( bSizerL0, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizerL1;
	bSizerL1 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizerL1->Add( 15, 0, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	combNotify = new wxComboBox( this, wxID_ANY, wxT("99:99:99"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizerL1->Add( combNotify, 1, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxLEFT|wxRIGHT, 5 );
	
	
	Left->Add( bSizerL1, 0, wxEXPAND, 5 );
	
	cbLimit = new wxCheckBox( this, wxID_ANY, wxT("Limitar hasta:"), wxDefaultPosition, wxDefaultSize, 0 );
	Left->Add( cbLimit, 1, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	wxBoxSizer* bSizerL2;
	bSizerL2 = new wxBoxSizer( wxHORIZONTAL );
	
	
	bSizerL2->Add( 15, 0, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	combLimit = new wxComboBox( this, wxID_ANY, wxT("99:99:99"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizerL2->Add( combLimit, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );
	
	
	Left->Add( bSizerL2, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_BOTTOM|wxBOTTOM, 2 );
	
	
	Bot->Add( Left, 1, wxEXPAND, 5 );
	
	wxBoxSizer* Centre;
	Centre = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizerC0;
	bSizerC0 = new wxBoxSizer( wxHORIZONTAL );
	
	bAlarma = new wxButton( this, wxID_ANY, wxT("Alarma"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerC0->Add( bAlarma, 0, wxALIGN_CENTER|wxALL, 5 );
	
	
	Centre->Add( bSizerC0, 1, wxALIGN_CENTER, 5 );
	
	wxBoxSizer* bSizerC1;
	bSizerC1 = new wxBoxSizer( wxHORIZONTAL );
	
	bApps = new wxButton( this, wxID_ANY, wxT("Ejecutables"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerC1->Add( bApps, 0, wxALIGN_CENTER|wxALL, 5 );
	
	
	Centre->Add( bSizerC1, 1, wxALIGN_CENTER|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	wxBoxSizer* bSizerC2;
	bSizerC2 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizerLogs;
	bSizerLogs = new wxBoxSizer( wxHORIZONTAL );
	
	cbLogs = new wxCheckBox( this, wxID_ANY, wxT("Generar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerLogs->Add( cbLogs, 0, wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	hlLogs = new wxHyperlinkCtrl( this, wxID_ANY, wxT("Logs"), wxEmptyString, wxDefaultPosition, wxDefaultSize, wxHL_ALIGN_LEFT|wxNO_BORDER );
	hlLogs->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DLIGHT ) );
	
	bSizerLogs->Add( hlLogs, 0, wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	
	bSizerC2->Add( bSizerLogs, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	Centre->Add( bSizerC2, 1, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	Bot->Add( Centre, 0, wxEXPAND, 5 );
	
	wxBoxSizer* Right;
	Right = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizerR0;
	bSizerR0 = new wxBoxSizer( wxHORIZONTAL );
	
	tgbStart = new wxToggleButton( this, wxID_ANY, wxT("Start"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerR0->Add( tgbStart, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxSHAPED|wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	
	Right->Add( bSizerR0, 1, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizerR1;
	bSizerR1 = new wxBoxSizer( wxHORIZONTAL );
	
	bReset = new wxButton( this, wxID_ANY, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerR1->Add( bReset, 1, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxEXPAND|wxSHAPED|wxTOP|wxRIGHT|wxLEFT, 5 );
	
	
	Right->Add( bSizerR1, 1, wxALIGN_CENTER_HORIZONTAL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizerR2;
	bSizerR2 = new wxBoxSizer( wxHORIZONTAL );
	
	cbOverlay = new wxCheckBox( this, wxID_ANY, wxT("Overlay"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerR2->Add( cbOverlay, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	Right->Add( bSizerR2, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	Bot->Add( Right, 1, wxEXPAND, 5 );
	
	
	MainSizer->Add( Bot, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( MainSizer );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_ICONIZE, wxIconizeEventHandler( CoreFrame::OnMinimize ) );
	tcClock->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( CoreFrame::Saltear ), NULL, this );
	cbNotify->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( CoreFrame::OnCheckAvisar ), NULL, this );
	cbIntrusive->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( CoreFrame::OnCheckIntrusive ), NULL, this );
	cbLimit->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( CoreFrame::OnCheckLimitar ), NULL, this );
	cbLogs->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( CoreFrame::OnCheckLogs ), NULL, this );
	hlLogs->Connect( wxEVT_COMMAND_HYPERLINK, wxHyperlinkEventHandler( CoreFrame::OnLogsClick ), NULL, this );
	tgbStart->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( CoreFrame::OnStart ), NULL, this );
	bReset->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CoreFrame::OnReset ), NULL, this );
	cbOverlay->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( CoreFrame::OnCheckOverlay ), NULL, this );
}

CoreFrame::~CoreFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_ICONIZE, wxIconizeEventHandler( CoreFrame::OnMinimize ) );
	tcClock->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( CoreFrame::Saltear ), NULL, this );
	cbNotify->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( CoreFrame::OnCheckAvisar ), NULL, this );
	cbIntrusive->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( CoreFrame::OnCheckIntrusive ), NULL, this );
	cbLimit->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( CoreFrame::OnCheckLimitar ), NULL, this );
	cbLogs->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( CoreFrame::OnCheckLogs ), NULL, this );
	hlLogs->Disconnect( wxEVT_COMMAND_HYPERLINK, wxHyperlinkEventHandler( CoreFrame::OnLogsClick ), NULL, this );
	tgbStart->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( CoreFrame::OnStart ), NULL, this );
	bReset->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CoreFrame::OnReset ), NULL, this );
	cbOverlay->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( CoreFrame::OnCheckOverlay ), NULL, this );
	
}

OverlayDialog::OverlayDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* MainSizer;
	MainSizer = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* Left;
	Left = new wxBoxSizer( wxVERTICAL );
	
	stLeft = new wxStaticText( this, wxID_ANY, wxT("00:00:00"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	stLeft->Wrap( -1 );
	stLeft->SetFont( wxFont( 18, 70, 90, 92, false, wxEmptyString ) );
	
	Left->Add( stLeft, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	MainSizer->Add( Left, 1, wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* Right;
	Right = new wxBoxSizer( wxVERTICAL );
	
	stRight = new wxStaticText( this, wxID_ANY, wxT("00:00:00"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE );
	stRight->Wrap( -1 );
	stRight->SetFont( wxFont( 18, 70, 90, 92, false, wxEmptyString ) );
	
	Right->Add( stRight, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	MainSizer->Add( Right, 1, wxALIGN_CENTER_VERTICAL, 5 );
	
	
	this->SetSizer( MainSizer );
	this->Layout();
	
	this->Centre( wxBOTH );
}

OverlayDialog::~OverlayDialog()
{
}
