#ifdef PRECOMPILEDHEADERS
	#include "Utils All.h"
	#include "_Ja25EnglishText.h"
#else
	#include "Language Defines.h"
	#ifdef ENGLISH
		#include "text.h"
		#include "Fileman.h"
		#include "JA2 Demo Ads.h"
	#endif
#endif

#ifdef GERMAN

// VERY TRUNCATED FILE COPIED FROM JA2.5 FOR ITS FEATURES FOR JA2 GOLD

STR16	zNewTacticalMessages[]=
{
	L"Entfernung zum Ziel: %d Felder",
	L"Verbinden Sie den Transmitter mit Ihrem Laptop-Computer.",
	L"Sie haben nicht genug Geld, um %s anzuheuern",
	L"Das obenstehende Honorar deckt für einen begrenzten Zeitraum die Kosten der Gesamtmission, und schließt untenstehendes Equipment mit ein.",
	L"Engagieren Sie %s jetzt und nutzen Sie den Vorteil unseres beispiellosen 'Ein Betrag für alles'-Honorars. Das persönliche Equipment des Söldners ist gratis in diesem Preis mit inbegriffen.",
	L"Honorar",
	L"Da ist noch jemand im Sektor...",
	L"Waffen-Rchwt.: %d Felder, Entf. zum Ziel: %d Felder",
	L"Deckung anzeigen",
	L"Sichtfeld",
	L"Neue Rekruten können dort nicht hinkommen.",
	L"Da Ihr Laptop keinen Transmitter besitzt, können Sie keine neuen Teammitglieder anheuern. Vielleicht ist dies eine guter Zeitpunkt, ein gespeichertes  Spiel zu laden oder ein neues zu starten!",
	L"%s hört das Geräusch knirschenden Metalls unter Jerry hervordringen. Es klingt grässlich - die Antenne ihres Laptop-Computers ist  zerstört.",  //the %s is the name of a merc.  @@@  Modified
	L"Nach Ansehen des Hinweises, den Commander Morris hinterließ, erkennt %s eine einmalige Gelegenheit. Der Hinweis enthält Koordinaten für den Start von Raketen gegen verschiedene Städte in Arulco. Aber er enthält auch die Koordinaten des Startpunktes - der Raketenanlage.",
	L"Das Kontroll-Board studierend, entdeckt %s, dass die Zahlen umgedreht werden könnten, so dass die Raketen diese Anlage selbst zerstören. %s muss nun einen Fluchtweg finden. Der Aufzug scheint die schnellstmögliche Route zu bieten...",         //!!! The original reads:	L"Noticing the control panel %s, figures the numbers can be reversed..." That sounds odd for me, but I think the comma is placed one word too late... (correct?)
	L"Dies ist ein IRON MAN-Spiel, und es kann nicht gespeichert werden, wenn sich Gegner in der Nähe befinden.",		
	L"(Kann während Kampf nicht speichern)", 
	L"Der Name der aktuellen Kampagne enthält mehr als 30 Buchstaben.",						
	L"Die aktuelle Kampagne kann nicht gefunden werden.",																	
	L"Kampagne: Standard ( %S )",																							
	L"Kampagne: %S",																													
	L"Sie haben die Kampagne %S gewählt. Diese ist eine vom Spieler modifizierte Version der Originalkampagne von JA2UB. Möchten Sie die Kampagne %S spielen?",			
	L"Um den Editor zu benutzen, müssen Sie eine andere als die Standardkampgane auswählen.",		
};

//@@@:  New string as of March 3, 2000.
STR16	gzIronManModeWarningText[]=
{
	L"Sie haben den IRON MAN-Modus gewählt. Dies macht das Spiel eventuell schwieriger als Sie vielleicht möchten, denn Sie können so lange nicht abspeichern, wie Ihr Sektor von Feinden infiltriert ist. Dies beeinflusst das gesamte Spiel. Wollen Sie wirklich im IRON MAN-Modus spielen?",
};


#endif

#ifdef POLISH

// VERY TRUNCATED FILE COPIED FROM JA2.5 FOR ITS FEATURES FOR JA2 GOLD
// MISSING POLISH Tactical Messages from J2.5

STR16	zNewTacticalMessages[]=
{
	L"Range to target: %d tiles",
	L"Attaching the transmitter to your laptop computer.",
	L"You cannot afford to hire %s",
	L"For a limited time, the above fee covers the cost of the entire mission and includes the equipment listed below.",
	L"Hire %s now and take advantage of our unprecedented 'one fee covers all' pricing.  Also included in this unbelievable offer is the mercenary's personal equipment at no charge.",
	L"Fee",
	L"There is someone else in the sector...",
	L"Gun Range: %d tiles, Range to target: %d tiles",
	L"Display Cover",
	L"Line of Sight",
	L"New Recruits cannot arrive there.",
	L"Since your laptop has no transmitter, you won't be able to hire new team members.  Perhaps this would be a good time to load a saved game or start over!",
	L"%s hears the sound of crumpling metal coming from underneath Jerry's body.  It sounds disturbingly like your laptop antenna being crushed.",  //the %s is the name of a merc.  @@@  Modified
	L"After scanning the note left behind by Deputy Commander Morris, %s senses an oppurtinity.  The note contains the coordinates for launching missiles against different towns in Arulco.  It also gives the coodinates of the origin - the missile facility.",
	L"Noticing the control panel, %s figures the numbers can be reveresed, so that the missile might destroy this very facility.  %s needs to find an escape route.  The elevator appears to offer the fastest solution...",
	L"This is an IRON MAN game and you cannot save when enemies are around.",	//	@@@  new text
	L"(Cannot save during combat)", //@@@@ new text
	L"The current campaign name is greater than 30 characters.",							// @@@ new text
	L"The current campaign cannot be found.",																	// @@@ new text
	L"Campaign: Default ( %S )",																							// @@@ new text
	L"Campaign: %S",																													// @@@ new text
	L"You have selected the campaign %S. This campaign is a player-modified version of the original Unfinished Business campaign. Are you sure you wish to play the %S campaign?",			// @@@ new text
	L"In order to use the editor, please select a campaign other than the default.",		///@@new
};

//@@@:  New string as of March 3, 2000.
STR16	gzIronManModeWarningText[]=
{
	L"You have chosen IRON MAN mode. This setting makes the game considerably more challenging as you will not be able to save your game when in a sector occupied by enemies. This setting will affect the entire course of the game.  Are you sure want to play in IRON MAN mode?",
};


#endif

#ifdef RUSSIAN

// VERY TRUNCATED FILE COPIED FROM JA2.5 FOR ITS FEATURES FOR JA2 GOLD
// MISSING RUSSIAN Tactical Messages from J2.5

STR16	zNewTacticalMessages[]=
{
	L"Range to target: %d tiles",
	L"Attaching the transmitter to your laptop computer.",
	L"You cannot afford to hire %s",
	L"For a limited time, the above fee covers the cost of the entire mission and includes the equipment listed below.",
	L"Hire %s now and take advantage of our unprecedented 'one fee covers all' pricing.  Also included in this unbelievable offer is the mercenary's personal equipment at no charge.",
	L"Fee",
	L"There is someone else in the sector...",
	L"Gun Range: %d tiles, Range to target: %d tiles",
	L"Display Cover",
	L"Line of Sight",
	L"New Recruits cannot arrive there.",
	L"Since your laptop has no transmitter, you won't be able to hire new team members.  Perhaps this would be a good time to load a saved game or start over!",
	L"%s hears the sound of crumpling metal coming from underneath Jerry's body.  It sounds disturbingly like your laptop antenna being crushed.",  //the %s is the name of a merc.  @@@  Modified
	L"After scanning the note left behind by Deputy Commander Morris, %s senses an oppurtinity.  The note contains the coordinates for launching missiles against different towns in Arulco.  It also gives the coodinates of the origin - the missile facility.",
	L"Noticing the control panel, %s figures the numbers can be reveresed, so that the missile might destroy this very facility.  %s needs to find an escape route.  The elevator appears to offer the fastest solution...",
	L"This is an IRON MAN game and you cannot save when enemies are around.",	//	@@@  new text
	L"(Cannot save during combat)", //@@@@ new text
	L"The current campaign name is greater than 30 characters.",							// @@@ new text
	L"The current campaign cannot be found.",																	// @@@ new text
	L"Campaign: Default ( %S )",																							// @@@ new text
	L"Campaign: %S",																													// @@@ new text
	L"You have selected the campaign %S. This campaign is a player-modified version of the original Unfinished Business campaign. Are you sure you wish to play the %S campaign?",			// @@@ new text
	L"In order to use the editor, please select a campaign other than the default.",		///@@new
};

//@@@:  New string as of March 3, 2000.
STR16	gzIronManModeWarningText[]=
{
	L"You have chosen IRON MAN mode. This setting makes the game considerably more challenging as you will not be able to save your game when in a sector occupied by enemies. This setting will affect the entire course of the game.  Are you sure want to play in IRON MAN mode?",
};


#endif

#ifdef DUTCH

// VERY TRUNCATED FILE COPIED FROM JA2.5 FOR ITS FEATURES FOR JA2 GOLD
// MISSING DUTCH Tactical Messages from J2.5

STR16	zNewTacticalMessages[]=
{
	L"Range to target: %d tiles",
	L"Attaching the transmitter to your laptop computer.",
	L"You cannot afford to hire %s",
	L"For a limited time, the above fee covers the cost of the entire mission and includes the equipment listed below.",
	L"Hire %s now and take advantage of our unprecedented 'one fee covers all' pricing.  Also included in this unbelievable offer is the mercenary's personal equipment at no charge.",
	L"Fee",
	L"There is someone else in the sector...",
	L"Gun Range: %d tiles, Range to target: %d tiles",
	L"Display Cover",
	L"Line of Sight",
	L"New Recruits cannot arrive there.",
	L"Since your laptop has no transmitter, you won't be able to hire new team members.  Perhaps this would be a good time to load a saved game or start over!",
	L"%s hears the sound of crumpling metal coming from underneath Jerry's body.  It sounds disturbingly like your laptop antenna being crushed.",  //the %s is the name of a merc.  @@@  Modified
	L"After scanning the note left behind by Deputy Commander Morris, %s senses an oppurtinity.  The note contains the coordinates for launching missiles against different towns in Arulco.  It also gives the coodinates of the origin - the missile facility.",
	L"Noticing the control panel, %s figures the numbers can be reveresed, so that the missile might destroy this very facility.  %s needs to find an escape route.  The elevator appears to offer the fastest solution...",
	L"This is an IRON MAN game and you cannot save when enemies are around.",	//	@@@  new text
	L"(Cannot save during combat)", //@@@@ new text
	L"The current campaign name is greater than 30 characters.",							// @@@ new text
	L"The current campaign cannot be found.",																	// @@@ new text
	L"Campaign: Default ( %S )",																							// @@@ new text
	L"Campaign: %S",																													// @@@ new text
	L"You have selected the campaign %S. This campaign is a player-modified version of the original Unfinished Business campaign. Are you sure you wish to play the %S campaign?",			// @@@ new text
	L"In order to use the editor, please select a campaign other than the default.",		///@@new
};

//@@@:  New string as of March 3, 2000.
STR16	gzIronManModeWarningText[]=
{
	L"You have chosen IRON MAN mode. This setting makes the game considerably more challenging as you will not be able to save your game when in a sector occupied by enemies. This setting will affect the entire course of the game.  Are you sure want to play in IRON MAN mode?",
};


#endif


#ifdef ITALIAN

// VERY TRUNCATED FILE COPIED FROM JA2.5 FOR ITS FEATURES FOR JA2 GOLD
// MISSING ITALIAN Tactical Messages from J2.5

STR16	zNewTacticalMessages[]=
{
	L"Range to target: %d tiles",
	L"Attaching the transmitter to your laptop computer.",
	L"You cannot afford to hire %s",
	L"For a limited time, the above fee covers the cost of the entire mission and includes the equipment listed below.",
	L"Hire %s now and take advantage of our unprecedented 'one fee covers all' pricing.  Also included in this unbelievable offer is the mercenary's personal equipment at no charge.",
	L"Fee",
	L"There is someone else in the sector...",
	L"Gun Range: %d tiles, Range to target: %d tiles",
	L"Display Cover",
	L"Line of Sight",
	L"New Recruits cannot arrive there.",
	L"Since your laptop has no transmitter, you won't be able to hire new team members.  Perhaps this would be a good time to load a saved game or start over!",
	L"%s hears the sound of crumpling metal coming from underneath Jerry's body.  It sounds disturbingly like your laptop antenna being crushed.",  //the %s is the name of a merc.  @@@  Modified
	L"After scanning the note left behind by Deputy Commander Morris, %s senses an oppurtinity.  The note contains the coordinates for launching missiles against different towns in Arulco.  It also gives the coodinates of the origin - the missile facility.",
	L"Noticing the control panel, %s figures the numbers can be reveresed, so that the missile might destroy this very facility.  %s needs to find an escape route.  The elevator appears to offer the fastest solution...",
	L"This is an IRON MAN game and you cannot save when enemies are around.",	//	@@@  new text
	L"(Cannot save during combat)", //@@@@ new text
	L"The current campaign name is greater than 30 characters.",							// @@@ new text
	L"The current campaign cannot be found.",																	// @@@ new text
	L"Campaign: Default ( %S )",																							// @@@ new text
	L"Campaign: %S",																													// @@@ new text
	L"You have selected the campaign %S. This campaign is a player-modified version of the original Unfinished Business campaign. Are you sure you wish to play the %S campaign?",			// @@@ new text
	L"In order to use the editor, please select a campaign other than the default.",		///@@new
};

//@@@:  New string as of March 3, 2000.
STR16	gzIronManModeWarningText[]=
{
	L"You have chosen IRON MAN mode. This setting makes the game considerably more challenging as you will not be able to save your game when in a sector occupied by enemies. This setting will affect the entire course of the game.  Are you sure want to play in IRON MAN mode?",
};


#endif

#ifdef FRENCH

// VERY TRUNCATED FILE COPIED FROM JA2.5 FOR ITS FEATURES FOR JA2 GOLD
// MISSING FRENCH Tactical Messages from J2.5

STR16	zNewTacticalMessages[]=
{
	L"Range to target: %d tiles",
	L"Attaching the transmitter to your laptop computer.",
	L"You cannot afford to hire %s",
	L"For a limited time, the above fee covers the cost of the entire mission and includes the equipment listed below.",
	L"Hire %s now and take advantage of our unprecedented 'one fee covers all' pricing.  Also included in this unbelievable offer is the mercenary's personal equipment at no charge.",
	L"Fee",
	L"There is someone else in the sector...",
	L"Gun Range: %d tiles, Range to target: %d tiles",
	L"Display Cover",
	L"Line of Sight",
	L"New Recruits cannot arrive there.",
	L"Since your laptop has no transmitter, you won't be able to hire new team members.  Perhaps this would be a good time to load a saved game or start over!",
	L"%s hears the sound of crumpling metal coming from underneath Jerry's body.  It sounds disturbingly like your laptop antenna being crushed.",  //the %s is the name of a merc.  @@@  Modified
	L"After scanning the note left behind by Deputy Commander Morris, %s senses an oppurtinity.  The note contains the coordinates for launching missiles against different towns in Arulco.  It also gives the coodinates of the origin - the missile facility.",
	L"Noticing the control panel, %s figures the numbers can be reveresed, so that the missile might destroy this very facility.  %s needs to find an escape route.  The elevator appears to offer the fastest solution...",
	L"This is an IRON MAN game and you cannot save when enemies are around.",	//	@@@  new text
	L"(Cannot save during combat)", //@@@@ new text
	L"The current campaign name is greater than 30 characters.",							// @@@ new text
	L"The current campaign cannot be found.",																	// @@@ new text
	L"Campaign: Default ( %S )",																							// @@@ new text
	L"Campaign: %S",																													// @@@ new text
	L"You have selected the campaign %S. This campaign is a player-modified version of the original Unfinished Business campaign. Are you sure you wish to play the %S campaign?",			// @@@ new text
	L"In order to use the editor, please select a campaign other than the default.",		///@@new
};

//@@@:  New string as of March 3, 2000.
STR16	gzIronManModeWarningText[]=
{
	L"You have chosen IRON MAN mode. This setting makes the game considerably more challenging as you will not be able to save your game when in a sector occupied by enemies. This setting will affect the entire course of the game.  Are you sure want to play in IRON MAN mode?",
};


#endif