// reader types

#define READER_MFRC522 0
#define READER_WIEGAND 1
#define READER_PN532 2
#define READER_RDM6300 3
#define READER_MFRC522_RDM6300 4
#define READER_WIEGAND_RDM6300 5
#define READER_PN532_RDM6300 6

// timing constants

#define COOLDOWN_MILIS 2000 // Milliseconds the RFID reader will be blocked between inouts 
#define KEYBOARD_TIMEOUT_MILIS 10000 // timeout in milis for keyboard input
#define WIFI_CONNECT_TIMEOUT 30 // number of seconds we try to connect in station mode

// user related numbers

#define ACCESS_GRANTED 1

// System defines

// Logfile operation takes too long with large logfiles.
// if the file grows above this size, we will truncate it.

#define MAXLOGSIZE 20000
#define WIEGANDTYPE_KEYPRESS 4
#define WIEGANDTYPE_PICC26 26
#define WIEGANDTYPE_PICC34 34