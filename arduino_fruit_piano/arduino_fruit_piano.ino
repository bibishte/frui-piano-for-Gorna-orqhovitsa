void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  
}

void loop() {
  if(digitalRead(13)==HIGH)
  {
    while(true)
    {
      if (analogRead(A0) < 800)
      {
        tone(8, 523, 130);
        //Serial.println( analogRead(A0));
        delay(80);
      }
      else if (analogRead(A1) < 800)
      {
        tone(8, 587, 130);
        //Serial.println( analogRead(A1));
        delay(80);
      }
  
      else if (analogRead(A2) < 800)
      {
        tone(8, 659, 130);
        delay(80);
      }
      else if (analogRead(A3) < 800)
      {
        tone(8, 699, 130);
        delay(80);
      }
      else if (analogRead(A4) < 800)
      {
        tone(8, 784, 130);
        delay(80);
      }
      else if (analogRead(A5) < 800)
      {
      tone(8, 880, 130);
      delay(80);
      }
    }

  }
  else
  {

    //kym processing za zwuk

    Serial.println("hiiii");

  }
}
