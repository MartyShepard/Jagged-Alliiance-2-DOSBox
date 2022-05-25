#ifdef PRECOMPILEDHEADERS
	#include "JA2 All.h"
#else
	#include <time.h>
	#include "Types.h"
	#include "GameVersion.h"
	#include "Language Defines.h"
#endif
 
   
//
//	Keeps track of the game version
//
 
#ifdef JA2BETAVERSION

//BETA/TEST BUILD VERSION
INT16		zVersionLabel[64]		= { L"Beta v. 0.98" }; 

#elif defined CRIPPLED_VERSION

//RELEASE BUILD VERSION 
INT16		zVersionLabel[16]		= { L"Beta v. 0.98" }; 

#else
	//RELEASE BUILD VERSION 
	#ifdef ENGLISH
		INT16		zVersionLabel[64]		= { L"Compiled 2019-06-13 By Marty2Life (English Release v1.12.01)" }; 

	#elif defined GERMAN
		INT16		zVersionLabel[64]		= { L"Compiled 2019-06-13 By Marty2Life (German Release v1.12.01)" };
		
	#elif defined RUSSIAN
		INT16		zVersionLabel[64]		= { L"Compiled 2019-06-13 By Marty2Life (Russian Release v1.12.01)" }; 

	#elif defined DUTCH
		INT16		zVersionLabel[64]		= { L"Compiled 2019-06-13 By Marty2Life (Dutch Release v1.12.01)" }; 

	#elif defined POLISH
		INT16		zVersionLabel[64]		= { L"Compiled 2019-06-13 By Marty2Life (Polish Release v1.12.01)" }; 

	#elif defined ITALIAN
		INT16		zVersionLabel[64]		= { L"Compiled 2019-06-13 By Marty2Life (Italian Release v1.12.01)" }; 

	#elif defined FRENCH
		INT16		zVersionLabel[64]		= { L"Compiled 2019-06-13 By Marty2Life (French Release v1.12.01)" }; 
	#endif


#endif

INT8		czVersionNumber[16]	= { "Build 04.12.02" };
INT16		zTrackingNumber[16]	= { L"Z" };
	

//
//		Keeps track of the saved game version.  Increment the saved game version whenever 
//	you will invalidate the saved game file

#define			SAVE_GAME_VERSION					99

const	UINT32	guiSavedGameVersion = SAVE_GAME_VERSION;
