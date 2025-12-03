//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

//	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
//};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
//static char delim[] = " | ";
//static unsigned int delimLen = 5;
//

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
    /*{" 🐧 ", "kernel",		    360,		        5},

    {" 🔺 ", "upt",		        60,		            4},

	{" 💻 ", "memory",	        6,		            2},

	{" 📦 ", "pacupdate",		360,		        9},*/

	{"",     "volume",  		0,		            10},

    {"",     "battery",         5,                  3},

	{" 🕑 ", "clock",			60,		            1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';

