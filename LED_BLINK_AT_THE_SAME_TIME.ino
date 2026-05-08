#define my_led 7
#define m_led 2
void setup() {
  Serial.begin(9600);
  pinMode(my_led,OUTPUT);
  pinMode(m_led,OUTPUT);

}

void loop(){
    digitalWrite(my_led,HIGH);
    digitalWrite(m_led,HIGH);
    Serial.println("MY_LED is ON");
    Serial.println("M_LED is ON");
   delay(1000);
  
    digitalWrite(my_led,LOW);
    digitalWrite(m_led,LOW);
    Serial.println("MY_LED is OF");
    Serial.println("MY_LED is OF");
    delay(1000);

}