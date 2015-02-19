#include "SWClock.h"

SWClock::SWClock() {
	strClock = "00:00:00";
	total_sec = -1;
}

const wxString& SWClock::GetStrTime() {
	
	total_sec = floor( this->Time() / 1000 );
	
	int hours = total_sec / 3600;
	int minutes = ( total_sec % 3600 ) / 60;
	int seconds = total_sec % 60;
	
	strClock.Clear();
	
	if( hours < 10 )
		strClock << "0" << hours;
	else
		strClock << hours;
	
	strClock << ":";
	
	if( minutes < 10 )
		strClock << "0" << minutes;
	else
		strClock << minutes;
	
	strClock << ":";
	
	if( seconds < 10 )
		strClock << "0" << seconds;
	else
		strClock << seconds;
	
	return strClock;
}

const int SWClock::GetTotalSeconds() {
	total_sec = floor( this->Time() / 1000 );
	return total_sec;
}

const int SWClock::GetSeconds() {
	if( total_sec == -1 ) GetTotalSeconds();
	return ( total_sec % 60 );
}

const int SWClock::GetMinutes() {
	if( total_sec == -1 ) GetTotalSeconds();
	return ( ( total_sec % 3600 ) / 60 );
}

const int SWClock::GetHours() {
	if( total_sec == -1 ) GetTotalSeconds();
	return ( total_sec / 3600 );
}

void SWClock::Reset( bool is_running ) {
	strClock = "00:00:00";
	this->Start(0);
	if( !is_running ) this->Pause();
}

void SWClock::Reset() {
	strClock = "00:00:00";
	this->Start(0);
}

SWClock::~SWClock() {
	
}

