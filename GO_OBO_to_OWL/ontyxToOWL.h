#ifndef _ONTYX_TO_OWL_H
#define _ONTYX_TO_OWL_H

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <ctime>

#include "OntyxKb.h"
#include "OntyxProperty.h"

using namespace std;

class ontyxToOWL
{
	private:

		void examineClashingCodes ( OntyxKb & KB );		// outputs to stderr kinds, assoc, prop, qual that clash with concept codes
		
		string characterEscape (const string & inString);

		

	public:

//		ontyxToOWL ();
		ontyxToOWL (const int,const char * [] );

		virtual ~ontyxToOWL();
		string otoo_getDayStamp (void);
		int otoo_Notmain (const int argc, const char * argv[]);

};

#endif