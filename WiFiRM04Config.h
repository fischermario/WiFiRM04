#ifndef WIFI_RM04_CONFIG_H
#define WIFI_RM04_CONFIG_H

extern "C" {
  #include "utility/wl_definitions.h"
}


/* 1. Number of sockets
 * 
 * ...
 */



/* 2. Serial type
 * 
 * There is some auto-detection logic in place that tries to determine
 * the most appropriate serial interface for the used Arduino board.
 * 
 * If you want to explicitly specify the serial interface ...
 * 
 * Note: If you choose AltSoftSerial you need to keep in mind that
 * the RX/TX pins are fixed (RX pin 8, TX pin 9).
 * 
 */

//#define SERIAL_TYPE_NUM				IS_HARDWARESERIAL

//#define SERIAL_TYPE_NUM				IS_SOFTSERIAL
//#define SOFTSERIAL_RX_PIN			10
//#define SOFTSERIAL_TX_PIN			11

//#define SERIAL_TYPE_NUM				IS_ALTSOFTSERIAL


/* 3. Baud rate
 * 
 * The standard baudrate is 38400 bps which is considered safe.
 * If you want to choose another baudrate you can set a separate
 * baudrate for each serial interface by uncommenting the according
 * line.
 */

//#define DEFAULT_BAUD1			57600
//#define DEFAULT_BAUD2			57600


/* 4. Hardware pin for switching to AT mode
 * 
 * Define USE_ESCAPE_PIN to use a hardware pin to switch mode (if not 
 * defined, software mode is used).
 * Use ESCAPE_PIN to pull up/down the ES/RTS pin of the RM04 module to
 * switch to AT mode.
 * Set ESCAPE_PIN_ACTIVE
 *   to "LOW" to pull ESCAPE_PIN to ground or
 *   to "HIGH" to pull ESCAPE_PIN to 5V
 * when switching the RM04 module to AT mode.
 */

#define USE_ESCAPE_PIN
#define ESCAPE_PIN				21
#define ESCAPE_PIN_ACTIVE		LOW


/* 5. Limit functionality
 * 
 * In order to save memory (especially on constrained boards like UNO)
 * you can remove functionality from the library that you do not need.
 * 
 * Uncomment a line of the following groups to limit the functionality
 * to one function of a group.
 * 
 * a) Client/Server
 * 
 * CLIENT_ONLY ...
 * SERVER_ONLY ...
 * 
 * b) TCP/UDP communication
 * 
 * TCP_ONLY ...
 * UDP_ONLY ...
 * 
 * c) Last resort: try to squeeze the last bits out of the library by
 * giving up on some reporting functionality to save space (there will
 * be a warning if you try to use them).
 * 
 * LOW_FAT ...
 *  
 */

//#define CLIENT_ONLY

//#define SERVER_ONLY

//#define TCP_ONLY

//#define UDP_ONLY

#define LOW_FAT


#endif
