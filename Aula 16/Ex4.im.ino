#define pin_led1 8  //Aqui definimos os leds em seus devidos pinos juntamente dos botões.
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botaoA 2
#define pin_botaoB 3
#define pin_botaoC 4

void setup() {
  pinMode(pin_led1, OUTPUT); //Definimos os leds como saida(OUTPUT) e os botões como entrada(INPUT).
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botaoA, INPUT);
  pinMode(pin_botaoB, INPUT);
  pinMode(pin_botaoC, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool bot1 = digitalRead(pin_botaoA); //Criamos variaveis para ler os botões.
  bool bot2 = digitalRead(pin_botaoB);
  bool bot3 = digitalRead(pin_botaoC);

  if ((bot1 == 0) && (bot2 == 0) && ( bot3 == 1 )) {
    digitalWrite(pin_led1, HIGH);
  } else {
    digitalWrite(pin_led1, LOW);
  }


  if (( bot1 == 0 ) && ( bot2 == 1 ) && ( bot3 == 0 )) {
    digitalWrite(pin_led1, HIGH);
  } else {
    digitalWrite(pin_led1, LOW);
  }


  if ((bot1 == 1) && ( bot2 == 0 ) && ( bot3 == 0 )) {
    digitalWrite(pin_led1, HIGH);
  } else {
    digitalWrite(pin_led1, LOW);
  }


  if ((bot1 == 1 ) && ( bot2 == 1 ) && ( bot3 == 1 )) {
    digitalWrite(pin_led1, HIGH);
  } else {
    digitalWrite(pin_led1, LOW);
  }
}