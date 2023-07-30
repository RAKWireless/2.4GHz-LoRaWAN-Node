# RAK3183
RAK LoRaWAN ISM2400 Project  

## AT Commands

### AT+VERSION - Get firmware version 
### AT+RESET - Reset device 
### AT+DEVEUI - Set/Get device EUI
### AT+JOINEUI - Set/Get join EUI
### AT+APPKEY - Set/Get application key
### AT+JOIN - Join network
### AT+SEND - Send data to server 
Usage: AT+SEND=PORT:CONFIRM:payload

Parameters:

PORT: an integer between 1 and 223 that represents the port number of the packet.
CONFIRM: a boolean value that indicates whether the data needs to be confirmed. It can be 0 (not confirmed) or 1 (confirmed).
payload: the data payload to be sent. It must be a hexadecimal-encoded string.
Examples:

Send an unconfirmed packet with port number 10 and payload "48656C6C6F":
AT+SEND=10:0:48656C6C6F
Send a confirmed packet with port number 3 and payload "010203":
AT+SEND=3:1:010203
### AT+CLASS - Set/Get class (0-CLASSA 2-CLASSC)
### AT+DR - Set/Get datarate (0-5)
### AT+TCONF - Set/Get RF test config

Usage: AT+TCONF=2403000000:13:1:3:0:10

Parameters:

frequency_hz 2403000000
tx_power_dbm 13
sf 1-8 SF5-SF12
bw 3-BW200 4-BW400 5-BW-800 6-BW1600
cr 0-CR4/5 1-CR4/6 2-CR4/7 3-CR4/8
preamble_size 10

### AT+TTX - RF test tx 
### AT+TRX - RF test rx continuously receive mode
### AT+TRXNOP - RF test terminate an ongoing continuous rx mode 




