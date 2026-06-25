#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_PN532.h>
 
#define PN532_IRQ   (2)
#define PN532_RESET (3)  // Not connected by default on the NFC Shield
 
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32;
 
Adafruit_PN532 nfc(PN532_IRQ, PN532_RESET);
 
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
 
void setup(void) 
{
  Serial.begin(115200);
  while (!Serial) delay(10); // for Leonardo/Micro/Zero
  Serial.println("Hello!");
 
  nfc.begin();
 
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS))
  {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); // Don't proceed, loop forever
  }
 
  uint32_t versiondata = nfc.getFirmwareVersion();
  if (! versiondata) 
  {
    Serial.print("Didn't find PN53x board");
    while (1); // halt
  }
  
  // Got ok data, print it out!
  Serial.print("Found chip PN5"); 
  Serial.println((versiondata>>24) & 0xFF, HEX); 
  Serial.print("Firmware ver. "); 
  Serial.print((versiondata>>16) & 0xFF, DEC); 
  Serial.print('.'); Serial.println((versiondata>>8) & 0xFF, DEC);
 
  display.clearDisplay();
  display.setCursor(0, 0); //oled display
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.print("Found chip PN5");
  display.print((versiondata >> 24) & 0xFF, HEX);
 
  display.setCursor(0, 20); //oled display
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.print("Firmware ver. ");
  display.print((versiondata >> 16) & 0xFF, DEC);
  display.print(".");
  display.print((versiondata >> 8) & 0xFF, DEC);
  
  nfc.setPassiveActivationRetries(0xFF);
  
  // configure board to read RFID tags
  nfc.SAMConfig();
  
  Serial.println("Waiting for an ISO14443A card");
 
  display.setCursor(0, 40); //oled display
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.print("Waiting for NFC Card");
  display.display();
 
}
 
void loop(void) 
{
  boolean success;
  uint8_t uid[] = { 0, 0, 0, 0, 0, 0, 0 };  // Buffer to store the returned UID
  uint8_t uidLength;        // Length of the UID (4 or 7 bytes depending on ISO14443A card type)
  
 
  success = nfc.readPassiveTargetID(PN532_MIFARE_ISO14443A, &uid[0], &uidLength);
  
  if (success) {
    Serial.println("Found a card!");
    Serial.print("UID Length: ");
    Serial.print(uidLength, DEC);
    Serial.println(" bytes");
    Serial.print("UID Value: ");
 
     display.clearDisplay();
    display.setCursor(10, 0); //oled display
    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.print("UID Length:");
    display.print(uidLength, DEC);
    display.print(" bytes");
 
    display.setCursor(35, 20); //oled display
    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.println("UID Value: ");
    display.setCursor(5, 35); //oled display
 
    
    for (uint8_t i=0; i < uidLength; i++) 
    {
    
      Serial.print(" 0x");
      Serial.print(uid[i], HEX); 
       display.print(" 0x");
      display.print(uid[i], HEX);
      display.display();
    }
    Serial.println("");
  // Wait 1 second before continuing
  delay(1000);
  }
  else
  {
    // PN532 probably timed out waiting for a card
    Serial.println("Timed out waiting for a card");
  }
}

// Sadrita 
