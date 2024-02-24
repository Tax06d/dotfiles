//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"󰍛 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0}, //

	{" 󰭗  ", "~/.local/bin/upt",      		60,                  	2},
 
	{"   ", "~/.local/bin/pacupdate",  		360,               	9},
     
	{"   ", "~/.local/bin/memory",   		6,                   	1},
 
	{" 🔊 ", "~/.local/bin/volume",     		0,                      10},
 
	{" 󰃰  ", "~/.local/bin/clock",        		60,                  	0},


//	{" ", "date '+%b %d (%a) %I:%M%p'",				5,		0}, //
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " # ";
static unsigned int delimLen = 5;
