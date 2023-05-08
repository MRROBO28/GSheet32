# GSheet32
[![GitHub version](https://img.shields.io/github/v/release/MRROBO28/GSheet32?style=plastic)](https://github.com/MRROBO28/GSheet32/releases/latest)
[![Downloads](https://img.shields.io/github/downloads/MRROBO28/GSheet32/total?style=plastic)](https://github.com/MRROBO28/GSheet32/releases)
<br>
Sending Data from ESP32 To Google Sheets

# Downloads
**GSheet32 [Arduino Library](https://github.com/MRROBO28/GSheet32/releases/latest)**

# How to use
## Get GAS ID
- Go to google Spreadsheets <a href="https://docs.google.com/spreadsheets/u/0/"/>Click Links
- Create a new sheet or if it already exists select the sheet
- Copy and save your sheet id from the link in your sheet
  <img src="/img/SC3.png"/>
- Go to Extensions -> Apps Script
- Copy the code in <a href="/Code Apps Script/Script.txt">/Code Apps Script/Script.txt</a> to code.gs
- Replace the program var sheet_id with the sheet id you saved
  <img src="/img/sc2.png"/>
- Click apply -> New Deployment<br>
  <img src="/img/SC4.png"/>
- select type -> web application<br>
  <img src="/img/SC5.png"/>
- Set access to anyone and hit apply<br>
  <img src="/img/SC6.png"/>
- Follow the steps to give google account Permission
- Once done, Save the deployment id or GAS_ID<BR>
  <img src="/img/SC7.png"/>
  
## Use Library
  - You can visit <a href="https://github.com/MRROBO28/GSheet32/tree/main/examples/">Examples</a>
  - Print Data to Google Spreadsheet (Max 5 column)
    <pre><code>Sheet.sendData("C","D","E","F","G"); 
    </pre></code>
  - if you want to add space in 1 column then change the space to %20, or you can type it with the help of url encode
    <pre><code>Sheet.sendData("Hello%20World"); 
    </pre></code>
# License
This project is released under The MIT License (MIT)
