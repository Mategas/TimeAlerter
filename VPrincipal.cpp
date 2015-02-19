#include "VPrincipal.h"

VPrincipal::VPrincipal(wxWindow *parent) : CoreFrame(parent) {
	WindowSetUp();
	mainClock = NULL;
	ovClock = NULL;
	
	swtime = "00:00:00";
	
	mainTimer = new wxTimer(GetEventHandler());
	Connect( wxEVT_TIMER, wxTimerEventHandler( VPrincipal::UpdateClock ) );
	mainTimer->Start(100, wxTIMER_CONTINUOUS);
	
	Show();
}

VPrincipal::~VPrincipal() {
	Disconnect( wxEVT_TIMER, wxTimerEventHandler( VPrincipal::UpdateClock ) );
	delete mainTimer;
	delete mainClock;
}

void VPrincipal::Saltear( wxCommandEvent& event )  {
	event.Skip();
}

void VPrincipal::WindowSetUp(){
	// Evitar que Logs cambie de color al clickear o pasarle por encima.
	hlLogs->SetVisitedColour( hlLogs->GetNormalColour() );
	hlLogs->SetHoverColour( hlLogs->GetNormalColour() );
	
	// Iniciar "Intrusivo" en el 3er Estado y esconderlo.
	cbIntrusive->Set3StateValue( wxCHK_UNDETERMINED );
	Left->Show( bSizerL0, false );
}

/*----------------- Timer Event -------------------*/
void VPrincipal::UpdateClock( wxTimerEvent& event ){
	
	if( mainClock ){
		wxString last_swtime = mainClock->GetStrTime();
		if( last_swtime != swtime ){
			swtime = last_swtime;
			tcClock->ChangeValue( swtime );
			if( ovClock ) ovClock->UpdateLabel( swtime, LEFT );
		}
	}
	else {
		if( swtime != "00:00:00" ){
			tcClock->ChangeValue( "00:00:00" );
			if( ovClock ) ovClock->UpdateLabel( "00:00:00", LEFT );
		}
	}
	
//	Update Overlay
	if( ovClock ){											// Si el Overlay está activo,
		now = wxDateTime::UNow();							// Pido la hora actual	
		now.ToTimezone(wxDateTime::Local, true);			// La convierto a TimeZone local
		ovClock->UpdateLabel( now.FormatISOTime(), RIGHT ); // Y Actualizo la izq con el Reloj y la der con la Hora.
	}
}

/*----------------- Clock -------------------------*/
void VPrincipal::OnStart( wxCommandEvent& event )  {
	
	if( tgbStart->GetValue() ){							// -- SI "APRETAMOS" EL BOTON (se ejecuta el evento -> cambia el estado del boton -> preguntamos el estado)
		if( !mainClock ){								// - Y ES LA PRIMERA VEZ QUE LO HACEMOS (no existe el reloj todavia)
			mainClock = new SWClock();					// Creamos un nuevo Reloj
		} else											// - PERO SI YA HABIA ESTADO CORRIENDO EL TIEMPO (existe el Reloj)
			mainClock->Resume();						// Resumimos su marcha.
		
		tgbStart->SetLabel("Pause");
	}
	else {												// -- SI "SOLTAMOS" EL BOTON
		mainClock->Pause();								// Paramos el tiempo.
		tgbStart->SetLabel("Start");
	}
	
}

void VPrincipal::OnReset( wxCommandEvent& event )  {
	
	if( mainClock ){												// Pregunto si el Reloj estuvo andando- sino no hay nada que resetear!
		if( tgbStart->GetValue() ){									// Ahora, consulto el estado del Start:
			mainClock->Reset();										// Si esta apretado (corriendo), llamo al Reset() y que se encargue.
		}
		else {														// Si esta suelto (parado)...
			delete mainClock;										// Limpio el Reloj, y lo dejo en NULL para proximas consultas.
			mainClock = NULL;
		}
	}
	
}
/*----------------- Clock END ---------------------*/

/*----------------- Overlay -----------------------*/
void VPrincipal::OnCheckOverlay( wxCommandEvent& event )  {
	if( cbOverlay->IsChecked() ){
		ovClock = new DOverlay(this);
		ovClock->UpdateLabel( tcClock->GetValue(), LEFT );	// Al crearlo, quiero que muestre lo mismo que el Reloj- indiferente de si este esta corriendo o no.
		ovClock->Show();
	}
	else {
		ovClock->Show();
		ovClock->Destroy();
		delete ovClock;
		ovClock = NULL;
	}
}

void VPrincipal::OnMinimize( wxIconizeEvent& event )  {
	if( ovClock ) ovClock->Iconize(false);					// Si minimizamos la Ventana Principal, no arrastrar el Overlay!
}
/*----------------- Overlay END -------------------*/

void VPrincipal::OnCheckAvisar( wxCommandEvent& event )  {
	if( cbNotify->IsChecked() ){
		Left->Show( bSizerL0, true );
		cbIntrusive->Set3StateValue( wxCHK_UNCHECKED );
		this->Layout();
	}
	else {
		Left->Show( bSizerL0, false );
		cbIntrusive->Set3StateValue( wxCHK_UNDETERMINED );
		this->Layout();
	}
}

void VPrincipal::OnCheckIntrusive( wxCommandEvent& event )  {
	event.Skip();
}

void VPrincipal::OnCheckLimitar( wxCommandEvent& event )  {
	event.Skip();
}

/*-------------------- Log ------------------------*/
void VPrincipal::OnCheckLogs( wxCommandEvent& event )  {
	event.Skip();
}

void VPrincipal::OnLogsClick( wxHyperlinkEvent& event )  {
	event.Skip();
}
/*----------------- Log END -----------------------*/


