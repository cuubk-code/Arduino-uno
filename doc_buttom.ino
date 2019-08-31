#define led 7
#define button 5
int trangthaiLED =0;

void setup() {
  pinMode(led , OUTPUT);
  pinMode(button , INPUT);
  // put your setup code here, to run once:

}

void loop() {
  if(digitalRead(button)== HIGH && trangthaiLED == 0){
    digitalWrite(led, HIGH);
    delay(200);
     
    trangthaiLED = 1;
  }
  if(digitalRead(button)== HIGH && trangthaiLED == 1){
    digitalWrite(led, LOW);
    delay(200);
    trangthaiLED = 0;
  }
  // put your main code here, to run repeatedly:

}
