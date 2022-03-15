// global variables for the lights
//E is East, NS is North South, W is West, EW is East West (I know)
//R is for Red, Y is for Yellow, G is for Green, and P is the Pedstrian Light

int GNS = 12;

int YNS = 11;

int RNS = 10;

int PNS = 9;

int GW = 8;

int YEW = 7;

int RW = 6;

int PW = 5;

int GE = 4;

int RE = 3;

int PE = 2;


// the setup function runs once when you press reset or power the board

void setup() {

  // initialize the pin2 - pin12 as an output

  pinMode(GNS, OUTPUT);

  pinMode(YNS, OUTPUT);

  pinMode(RNS, OUTPUT);

  pinMode(PNS, OUTPUT);

  pinMode(GW, OUTPUT);

  pinMode(YEW, OUTPUT);

  pinMode(RW, OUTPUT);

  pinMode(PW, OUTPUT);

  pinMode(GE, OUTPUT);

  pinMode(RE, OUTPUT);

  pinMode(PE, OUTPUT);            

 

}


// the loop function runs over and over again forever

void loop() {

  //  turn on all red LED lights:

  digitalWrite(RNS, HIGH);

  digitalWrite(RW, HIGH);

  digitalWrite(RE, HIGH);

  delay(2000);  // wait for 2 seconds


  // run the traffic lights and the pedestrians in North and South: 

  digitalWrite(RNS, LOW); //turns off red lights

  digitalWrite(GNS, HIGH);  //turns on green lights 

  digitalWrite(PNS, HIGH);  //turns on pedestrian lights 

  delay(3000);  // wait for 3 seconds

  for(int LOOP = 0; LOOP < 4; LOOP++){  // run it with an increase of 1 everytime it is completed - only stop when the value is 4 (blinks 4 times then stops)

     digitalWrite(PNS, LOW); //turns off pedestrian lights

     delay(500);  // wait for 0.5 seconds

     digitalWrite(PNS, HIGH); //turns on pedestrian lights 

     delay(500);  // wait for 0.5 seconds

  }

  digitalWrite(PNS, LOW);  //turns off pedestrian lights

  digitalWrite(GNS, LOW); //turns off green lights

  digitalWrite(YNS, HIGH); //turns on yellow lights

  delay(2000); // wait for 2 seconds 

  digitalWrite(YNS, LOW);  //turns off rellow lights after 2 seconds

  digitalWrite(RNS, HIGH);  //turns on red lights

  delay(2000);  // wait for 2 seconds


  // run the advance green light in West:

  digitalWrite(RW, LOW); //turns off red light

  digitalWrite(PW, HIGH); //turns on pedestrian light

  digitalWrite(GW, HIGH); //turns on green light

  for(int LOOP = 0; LOOP < 4; LOOP++){  // run it with an increase of 1 everytime it is completed - only stop when the value is 4 (blinks 4 times) 

    digitalWrite(GW, LOW); //turns off green light

    delay(500); // wait for 0.5 seconds

    digitalWrite(GW, HIGH); //turns on green light

    delay(500); // wait for 0.5 seconds

  }

  // run the traffic lights and the pedestrians in West and East:

  digitalWrite(PE, HIGH); //turns on pedestrian light

  digitalWrite(RE, LOW); //turns off red light

  digitalWrite(GE, HIGH); //turns on green light

  delay(3000);  // wait for 3 seconds

  for(int LOOP = 0; LOOP < 4; LOOP++){ // run it with an increase of 1 everytime it is completed - only stop when the value is 4 (blinks 4 times)

     digitalWrite(PE, LOW); //turns off pedestrian light

     digitalWrite(PW, LOW); //turns off pedestrian light

     delay(500);  // wait for 0.5 seconds

     digitalWrite(PE, HIGH); //turns on pedestrian light

     digitalWrite(PW, HIGH); //turns on pedestrian light

     delay(500);  // wait for 0.5 seconds

  }

  digitalWrite(PE, LOW); //turns off pedestrian light

  digitalWrite(PW, LOW); //turns off pedestrian light

  digitalWrite(GW, LOW); //turns off green light

  digitalWrite(GE, LOW); //turns off green light

  digitalWrite(YEW, HIGH); //turns on yellow lights

  delay(2000);  // wait for 2 seconds

  digitalWrite(YEW, LOW); //turns off yellow lights

  digitalWrite(RW, HIGH); //turns on red light

  digitalWrite(RE, HIGH); //turns on red light

  delay(2000);  // wait for 2 seconds


 // run the traffic lights and the pedestrians in North and South: 

  digitalWrite(RNS, LOW); //turns off red lights

  digitalWrite(GNS, HIGH);  //turns on green lights

  digitalWrite(PNS, HIGH);  //turns on pedestrian lights

  delay(3000);  // wait for 3 seconds

  for(int LOOP = 0; LOOP < 4; LOOP++){  // run it with an increase of 1 everytime it is completed - only stop when the value is 4 (blinks 4 times)

     digitalWrite(PNS, LOW); //turns off pedestrian lights

     delay(500);  // wait for 0.5 seconds

     digitalWrite(PNS, HIGH);  //turns on pedestrian lights

     delay(500);  // wait for 0.5 seconds

  }

  digitalWrite(PNS, LOW);  //turns off pedestrian lights

  digitalWrite(GNS, LOW); //turns off green lights

  digitalWrite(YNS, HIGH); //turns on yellow lights

  delay(2000); // wait for 2 seconds

  digitalWrite(YNS, LOW);  //turns off yellow lights

  digitalWrite(RNS, HIGH);  //turns in red lights

  delay(2000);  // wait for 2 seconds



  // run the advance green light in East:

  digitalWrite(RE, LOW); //turns off red light

  digitalWrite(PE, HIGH); //turns on pedestrian light

  digitalWrite(GE, HIGH); //turns on green light

  for(int LOOP = 0; LOOP < 4; LOOP++){ // run it with an increase of 1 everytime it is completed - only stop when the value is 4 (blinks 4 times)

    digitalWrite(GE, LOW); //turns off green light

    delay(500); // wait for 0.5 seconds

    digitalWrite(GE, HIGH); //turns on green light

    delay(500); // wait for 0.5 seconds

  }

   // run the traffic lights and the pedestrians in West and East:

  digitalWrite(PW, HIGH); //turns on pedestrian light

  digitalWrite(RW, LOW); //turns off red light

  digitalWrite(GW, HIGH); //turns on green light

  delay(3000);  // wait for 3 seconds

  for(int LOOP = 0; LOOP < 4; LOOP++){ // run it with an increase of 1 everytime it is completed - only stop when the value is 4 (blinks 4 times)

     digitalWrite(PE, LOW); //turns off pedestrian light

     digitalWrite(PW, LOW); // turns off pedestrian light

     delay(500);  // wait 0.5 seconds

     digitalWrite(PE, HIGH); //turns on pedestrian light

     digitalWrite(PW, HIGH); //turns on pedestrian light

     delay(500);  // wait 0.5 seconds

  }

  digitalWrite(PE, LOW); //turns off pedestrian light

  digitalWrite(PW, LOW); //turns off pedestrian light

  digitalWrite(GW, LOW); //turns off green light

  digitalWrite(GE, LOW); //turns off green light

  digitalWrite(YEW, HIGH); //turns on yellow lights

  delay(2000);  // wait 2 seconds

  digitalWrite(YEW, LOW); //turns off yellow lights

   } 