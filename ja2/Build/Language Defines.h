#ifndef __LANGUAGE_DEFINES_H
#define __LANGUAGE_DEFINES_H

//ONLY ONE OF THESE CAN BE DEFINED AT A TIME!

//#define ENGLISH
#define GERMAN
//#define RUSSIAN
//#define DUTCH
//#define POLISH
//#define ITALIAN
//#define FRENCH

#define BLOOD_N_GORE_ENABLED

#define MARTY2LIFE

//if the language represents words as single chars
#ifdef TAIWAN
	#define	SINGLE_CHAR_WORDS
#endif

#endif