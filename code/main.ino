#include "interface.h"

void setup()
{
	
}

void loop()
{
	int bpm = 60;

	Note qnC;
	qnC.noteValue = (60 / bpm) * 1000;
	qnC.noteName = "C";

	Note qnB;
	qnB.noteValue = (60 / bpm) * 1000;
	qnB.noteName = "b";

	Note enA;
	enA.noteValue = (60 / (bpm * 2)) * 1000;
	enA.noteName = "a"

	Note enG;
	enG.noteValue = (60 / (bpm * 2)) * 1000;
	enG.noteName = "g";

	Note qnF;
	qnF.noteValue = (60 / bpm) * 1000;
	qnF.noteName = "f";

	Note qnE;
	qnE.noteValue = (60 / bpm) * 1000;
	qnE.noteName = "e";

	Note qnD;
	qnD.noteValue = (60 / bpm) * 1000;
	qnD.noteName = "d";


	uint16_t firstSong[58] = {}	// joy to world
}
