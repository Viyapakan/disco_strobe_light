const int pot_pin=A0;
int red_led=12;
int yellow_led=11;
int pot_val=0;


void setup() {
  // put your setup code here, to run once:
  pinMode(red_led,  OUTPUT);
  pinMode(yellow_led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
pot_val=analogRead(pot_pin);
int delay_time=map(pot_val,0,1023,50,500);

digitalWrite(red_led,  HIGH);
delay(delay_time);
digitalWrite(red_led, LOW);
delay(delay_time);
digitalWrite(red_led,  HIGH);
delay(delay_time);
digitalWrite(red_led, LOW);
delay(delay_time);

digitalWrite(yellow_led,  HIGH);
delay(delay_time);
digitalWrite(yellow_led, LOW);
delay(delay_time);
digitalWrite(yellow_led,  HIGH);
delay(delay_time);
digitalWrite(yellow_led, LOW);
delay(delay_time);


}
