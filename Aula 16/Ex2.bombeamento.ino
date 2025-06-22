#define pin_led1 8   //Aqui definimos os botões os leds em seus devidos pinos e os botões.
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botaoA 2
#define pin_botaoB 3
#define pin_botaoC 4

void setup() {
  pinMode(pin_led1, OUTPUT);    //Aqui definimos os leds como saida(OUTPUT) e os botões como entrada(INPUT).
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botaoA, INPUT);
  pinMode(pin_botaoB, INPUT);
  pinMode(pin_botaoC, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool bombH = digitalRead(pin_botaoA); //Aqui as variaveis vão estar lendo os botões.
  bool bobmL = digitalRead(pin_botaoB);

  if ((bombL==0)&&(bombH==0)) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, HIGH);
  }


  if ((bombL==0)&&(bombH==1)) {
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led2, HIGH);
  }


  if ((bombL==1)&&(bombH==0)) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, LOW);
  }


  if ((bombL==1)&&(bombH==1)) {
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led2, LOW);
  }
}