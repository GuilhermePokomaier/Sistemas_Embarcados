#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botA 2
#define pin_botB 3
int botstateB = 0;
int lastbotstateB = 0;
int countA = 0;
bool botstateA = 0;
bool lastbotstateA = 0;

void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botA, INPUT);
  pinMode(pin_botB, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool botstateA = digitalRead(pin_botA);
  bool botstateB = digitalRead(pin_botB);

  if (botstateA != lastbotstateA){
    if (botstateA == 1) {
      countA += 1;
      Serial.println("vezes pressionadas ");
      Serial.println(countA);
    }
  }
 
  if (botstateB != lastbotstateB){
    if (botstateB == 1) {
      countA -= 1;
      Serial.println("Botão B pressionado diminuindo contador ");
      Serial.println(countA);
    }
  }
if (count > 50)
  if (countA == 50){
    digitalWrite(pin_led1, 1);
  }
  else{
    digitalWrite(pin_led1, 0);
  }

  if (countA == 50){
  digitalWrite(pin_led2, 0);
  digitalWrite(pin_led1, 1);
  }

  else{
    digitalWrite(pin_led2, 1);
    digitalWrite(pin_led1, 0);
  }
  
  lastbotstateA = botstateA;
  lastbotstateB = botstateB;
  
}
