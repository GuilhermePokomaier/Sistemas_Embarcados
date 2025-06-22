#define pin_led1 8  //Aqui estamos definindo os leds em seus devidos pinos e os botões.
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botaoA 2
#define pin_botaoB 3
#define pin_botaoC 4

void setup() {
  pinMode(pin_led1, OUTPUT);  //Definimos os leds como saida (OUTPUT), e os botões como entrada (INPUT).
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botaoA, INPUT);
  pinMode(pin_botaoB, INPUT);
  pinMode(pin_botaoC, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool ruaA = digitalRead(pin_botaoA); //Aqui criamos a variavel "ruaA" e "ruaB" e elas vão ler os botões A e B.
  bool ruaB = digitalRead(pin_botaoB);


  if ((ruaA == 1) && (ruaB == 1)) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, LOW);
  } else {
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led2, LOW);
  }

  if ((ruaA == 1) && (ruaB == 0)) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, LOW);
  } else {
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led2, LOW);
  }

  if ((ruaA == 0) && (ruaB == 1)) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, LOW);
  } else {
    digitalWrite(pin_led2, LOW);
  }
}