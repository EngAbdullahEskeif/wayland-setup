//asdasdModify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
	// {"", "cat /tmp/recordingicon 2>/dev/null",	0,	9},
	// {"",	"sb-tasks",	10,	26},
//	 {"",	"/home/aboud/.local/bin/scripts/statusbar/sb-music",	1,	11}, 
	// {"",	"sb-pacpackages",	0,	8},
	// {"",	"sb-news",		0,	6},
	// /* {"",	"sb-price xmr Monero 🔒 24",			9000,	24}, */
	// /* {"",	"sb-price eth Ethereum 🍸 23",	9000,	23}, */
	// /* {"",	"sb-price btc Bitcoin 💰 21",				9000,	21}, */
	// {"",	"sb-torrent",	20,	7},
	 {"",	"/home/aboud/.local/bin/scripts/statusbar/sb-disk",	10,	14},
	// /* {"",	"sb-cpu",		10,	18}, */
	// /* {"",	"sb-moonphase",	18000,	17}, */
	// {"",	"sb-doppler",	0,	13},
	// {"",	"sb-forecast",	18000,	5},
	// {"",	"sb-mailbox",	180,	12},
	// {"",	"sb-nettraf",	1,	16},
	{"",	"/home/aboud/.local/bin/scripts/statusbar/sb-vol",	1,	10},
	{"",	"/home/aboud/.local/bin/scripts/statusbar/sb-battery",	5,	3},
	{"",	"/home/aboud/.local/bin/scripts/statusbar/sb-clock",	60,	1},
	{"",	"/home/aboud/.local/bin/scripts/statusbar/sb-internet",	1,	4},
	/* {"",	"sb-iplocate", 0,	27}, */
	// {"",	"sb-help-icon",	0,	15},
};


//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
