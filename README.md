
| Title | NFC Decoder |
| :-- | :---|
|Author |Sadrita Neogi|

### About
It's an NFC device that is use to configure NFC tags for various use . This is mainly for those who does not have an phone which accept NFC but you want to configure the NFC the you can use this to configure the NFC and use it

### Why I chose this project?
Since previously, I have made one business card using an NFC tag and I do not have any phone which accept NFC tag so I could not configure the thing, so I started thinking what can I do because I need to configure the NFC tag so that I can use the business card and give it to someone and they can also feel it. So then I thought what if I can make my own NFC card, reader and writer such that I can then configure it easily. So for that reason I was making this project since I need it


### How to use this project
This project or the overall project can be used in reading and writing, or we can say configuring the NFC tags to their designated things like if we want to configure it such that when the NFC tag is read, then it will open and website or open any social media account, so we can configure that through this device.
### Wiring Diagram

<img width="780" height="419" alt="wiring Diagram" src="https://github.com/user-attachments/assets/68e0b074-404f-4c9b-853b-ed755d6ba251" />


### Working 
PN532 is an NFC controller by NXP that’s based on the 80C51  microcontroller, allowing for contactless communication at 13.56 MHz. Furthermore, the support for MIFARE Classic 1K/MIFARE Classic 4K card allows for higher transfer speeds up to 424 kbit/s in both directions.

---

**Firmware**
There are different communication options available for PN532, hence the correct library must be used in each case. The most advanced library that supports all the communication protocol is from PN532 Elechouse library. Download the zip folder and extract all the libraries and then add it to the Arduino library folder. Microcontrollers

In the case of a UART communication, the following libraries are used.

* PN532_HSU Library
* PN532_SWHSU Library


---

### CAD Work 


<img width="1470" height="956" alt="3" src="https://github.com/user-attachments/assets/c3be0bb9-a034-4394-b1eb-61f07c4bd1fc" />
<img width="1470" height="956" alt="6" src="https://github.com/user-attachments/assets/4c4cec12-c5b6-4dc6-b55c-04214721c22c" />
<img width="1470" height="956" alt="7" src="https://github.com/user-attachments/assets/a20e7792-5855-4f67-b479-1949f6205c5a" />

<img width="1470" height="956" alt="13" src="https://github.com/user-attachments/assets/869a41ab-5d4a-42a6-8043-a62b41f7fc21" />
<img width="1470" height="956" alt="14" src="https://github.com/user-attachments/assets/9a29e90f-3c1a-4a91-b6ea-3846767c24b9" />
<img width="1470" height="956" alt="17" src="https://github.com/user-attachments/assets/242b0c44-730f-489f-af98-183253c83999" />

<img width="1470" height="956" alt="18" src="https://github.com/user-attachments/assets/afe838e2-0165-4081-8f2e-7a64e8fef1c1" />
<img width="1470" height="956" alt="19" src="https://github.com/user-attachments/assets/7fb95215-27af-48c7-b606-2c4a66e96d71" />
<img width="1470" height="956" alt="21" src="https://github.com/user-attachments/assets/463ebb0e-aed1-4203-9c99-1872b1833ec4" />
<img width="1470" height="956" alt="22" src="https://github.com/user-attachments/assets/36756000-3c59-4410-8a67-f62278115820" />

<div align="center">
  <h2> Bill of Materials </h2>
</div>

| Component Name | Purpose | Qty | Unit Price | Total Price in USD | Link |
| :--- | :--- | :---: | :---: | :---: | :---: |
| **3d Printing** | The Case | 1 | $0.00 | $0.00 | [Link](https://printlegion.hackclub.com/) |
| **ON-OFF Round Rocker Switch** | To turn ON and OFF the circuit | 1 | $0.26 | $0.26 | [Link](https://robu.in/product/3a-250v-ac-spst-on-off-round-rocker-switch/) |
| **0.96 Inch Display** | To show the status of the tags | 1 | $2.33 | $2.33 | [Link](https://robu.in/product/0-96-inch-i2c-iic-oled-lcd-module-4pin-with-vcc-gnd-white/?gad_source=1&gad_campaignid=17416544847&gbraid=0AAAAADvLFWeV6_fecEXW7yD2KwMGyNReC&gclid=CjwKCAjwgO7RBhBKEiwAZNP85pMhbqMl-v5m1zvKEvrUq9B0d-LvNmgelreYeh2LO49TPiD8CQqj2hoCI5cQAvD_BwE) |
| **125KHz RFID Key Tags** | To use the tags | 1 | $0.78 | $0.78 | [Link](https://robu.in/product/125k-rfid-tag/) |
| **PN532 NFC RFID Reader Writer Module** | To read and write the NFC tag | 1 | $2.96 | $2.96 | [Link](https://robu.in/product/pn532-nfc-rfid-read-write-module-v3-kit/?gad_source=1&gad_campaignid=17416544847&gbraid=0AAAAADvLFWeV6_fecEXW7yD2KwMGyNReC&gclid=CjwKCAjwgO7RBhBKEiwAZNP85rSwp_ngtcO8Bjd_ONtm39mhj41ojcR920rApEHez6F2z-NC-cA8pRoChhUQAvD_BwE) |
| **Arduino Uno** | The Main Board | 1 | $2.60 | $2.60 | [Link](https://robu.in/product/uno-r3-ch340g-atmega328p-development-board-with-micro-usb/?gad_source=1&gad_campaignid=17413441824&gbraid=0AAAAADvLFWdfI1XB-KkKXV0RB4QUU0TIl&gclid=CjwKCAjwgO7RBhBKEiwAZNP85jI5Gq2if25G8qQpSHFhbCwcJ_pwk3JFtFhn1uoxxevPr2fZOn2WABoCKIoQAvD_BwE) |

<div align="center">
  <table border="0" cellpadding="0" cellspacing="0" style="border-collapse: collapse; max-width: 600px;">
    <tr>
      <td style="background: #ffffff; border: 1px solid #d0d7de; border-radius: 12px; padding: 20px; box-shadow: 0 4px 12px rgba(0,0,0,0.05); font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Helvetica, Arial, sans-serif;">
        <div style="font-size: 16px; font-weight: 600; color: #24292f; margin-bottom: 12px; border-bottom: 1px solid #d0d7de; padding-bottom: 8px;">
           Final Summary Title
        </div>
        <table width="100%" border="0" style="border-collapse: collapse; font-size: 14px; color: #57606a;">
          <tr>
            <td style="padding: 4px 0;">Component Subtotal:</td>
            <td align="right" style="font-weight: 500; color: #24292f;">$8.93</td>
          </tr>
          <tr>
            <td style="padding: 4px 0;">Shipping Cost:</td>
            <td align="right" style="font-weight: 500; color: #24292f;">$1.58</td>
          </tr>
          <tr>
            <td style="padding: 4px 0; padding-bottom: 8px;">Tax / VAT:</td>
            <td align="right" style="font-weight: 500; color: #24292f;">$0.2</td>
          </tr>
          <tr style="border-top: 1px dashed #d0d7de;">
            <td style="padding: 12px 0 0 0; font-weight: 600; color: #24292f; font-size: 15px;">Net Total Cost:</td>
            <td align="right" style="padding: 12px 0 0 0; font-weight: bold; color: #2da44e; font-size: 18px;">$10.17</td>
          </tr>
          <tr>
            <td style="padding: 2px 0 0 0; font-size: 11px; color: #8c959f;">Projected Budget Allocation:</td>
            <td align="right" style="padding: 2px 0 0 0; font-weight: 500; font-size: 12px; color: #8c959f;">$11</td>
          </tr>
        </table>
      </td>
    </tr>
  </table>
</div>

---

**Project Under Hack Club**


