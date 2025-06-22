#define pin_led1 8 //Aqui estamos definindo os leds em seus devidos pinos e os botões.
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botaoA 2
#define pin_botaoB 3
#define pin_botaoC 4

void setup() {
  pinMode(pin_led1, OUTPUT); //Aqui definimos os botões como entrada(INPUT) e os leds como saída(OUTPUT).
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botaoA, INPUT);
  pinMode(pin_botaoB, INPUT);
  pinMode(pin_botaoC, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool botA = digitalRead(pin_botaoA); //As variaveis vão ler os botões A e B
  bool botB = digitalRead(pin_botaoB);

  if ((botA==0) && (botB==0)) {
    digitalWrite(pin_led1, HIGH);
  } else {
    digitalWrite(pin_led1, LOW);
  }


  if ((botA==0) && (botB==1)) {
    digitalWrite(pin_led1, LOW);
  }


  if ((botA==1) && (botB==0)) {
    digitalWrite(pin_led1, LOW);
  }


  if ((botA==1) && (botB==1)) {
    digitalWrite(pin_led1, LOW);
  }


}
