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