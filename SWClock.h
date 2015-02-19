#ifndef SWCLOCK_H
#define SWCLOCK_H
#include <wx/stopwatch.h>
#include <wx/string.h>
#include <cmath>
using namespace std;

class SWClock : public wxStopWatch {
private:
	wxString strClock;
	int total_sec;
protected:
public:
	SWClock();
	const wxString& GetStrTime();
	const int GetTotalSeconds();
	const int GetSeconds();
	const int GetMinutes();
	const int GetHours();
	void Reset( bool is_running );
	void Reset();
	~SWClock();
};

#endif

