# RAK3183
RAK LoRaWAN ISM2400 Project  

## AT  

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


