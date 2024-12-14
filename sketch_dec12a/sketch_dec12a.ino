#include <IRremote.h> //Library for Infrared reciever and remote communication
int IRpin = 9; //Connects IR reciever to pin 9
IRrecv IR(IRpin); //IRrecv is a class in IRremote.h. Therefore IR becomes a object of IRrecv. IRrecv class is used to interface with an IR receiver.
decode_results cmd;// Variable to hold decoded results
//Gets reult from reciever
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  IR.enableIRIn(); //Starts the reciever
}


void loop() {
  // put your main code here, to run repeatedly:
  while ( IR.decode(&cmd)==0){ //Detects if signal is
  }
  Serial.println(cmd.value, HEX); // Print the decoded value, value is a key word for usigned long variable
  if (cmd.value==0xFD30CF){ //0xFD30CF indicates that 0 is assigned the heaxadecimal of FD30CF
    Serial.println("You pressed ZERO");
  }
  delay(1500);
  IR.resume();// Prepare to receive the next signal
}




