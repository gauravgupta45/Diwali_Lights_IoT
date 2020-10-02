# Diwali_Lights-IoT-
Controlling Diwali home light with Blynk Application on phone from anywhere in the world(that's what IoT is xD). 

***


## Components


1. ESP8266

2. Arduino UNO

3. 5V Relay

4. Jumper Cables

5. 12v Power Supply

Now to get started, you have to install all the drivers required for blynk and also for esp8266. Next step is to interface with Blynk app.
Once you download it, create a new project and get a Auth token for the project. Setup the wifi device which you are using i.e. esp8266. Place a button in the workspace and configure its output. Set output pin to be gp2. You will be connecting the relay module to this gp2 pin of esp8266. Relay will be further connected to the lights. So we are giving signals to relay to get on/off from our app which will be connected with esp8266. Once esp8266 is online(means it is connected to the wifi whose ssid you put in the code), it will show in app. Click the button you created in Blynk and you will get the results.
