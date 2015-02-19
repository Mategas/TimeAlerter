void VPrincipal::UpdateClock( wxTimerEvent& event ){
	if( mainClock )							// Si el StopWatch !NULL (el reloj esta corriendo)
		swtime = mainClock->GetStrTime();	// Pido el tiempo transcurrido
	else									// ...Pero si es NULL...
		swtime = "00:00:00";				// Marco el tiempo en "0", para las funciones de abajo.
	
//	Update Main Clock
	tcClock->ChangeValue( swtime );			// Actualizo el Reloj Central
	
//	Update Overlay
	if( ovClock ){											// Si el Overlay está activo,
		now = wxDateTime::UNow();							// Pido la hora actual	
		now.ToTimezone(wxDateTime::Local, true);			// La convierto a TimeZone local
		ovClock->UpdateLabel( swtime, now.FormatISOTime() );// Y Actualizo la izq con el Reloj y la der con la Hora.
	}
}

