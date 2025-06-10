#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botaoA 2
#define pin_botaoB 3


void setup() {
  pinMode(pin_led1, OUTPUT);   // Aqui estamos definindo o led1 como saida
  pinMode(pin_led2, OUTPUT);   // Aqui estamos definindo o led2 como saida
  pinMode(pin_led3, OUTPUT);   // Aqui estamos definindo o led3 como saida
  pinMode(pin_led4, OUTPUT);   // Aqui estamos definindo o led4 como saida
  pinMode(pin_botaoA, INPUT);  // Aqui estamos definindo o botaoA como entrada
  pinMode(pin_botaoB, INPUT);  // Aqui estamos definindo o botaoB como entrada
  Serial.begin(9600);
}

void loop() {
  bool botaoA = digitalRead(pin_botaoA);
  bool botaoB = digitalRead(pin_botaoB);
  if (botaoA == 1) {
    Serial.println("Botao A apertado");
  }
  if ((botaoA == 1) && (botaoB == 1)) {
    Serial.println("Dois bot Apertados");
    digitalWrite(pin_led1, 1);
  } else {
    digitalWrite(pin_led1, 0);
  }
  if ((botaoA == 1) || (botaoB == 1)) {
    digitalWrite(pin_led2, 1);
  } else {
    digitalWrite(pin_led2, 0);
  }
  if ((botaoA == 1) ^ (botaoB == 1)) {
    digitalWrite(pin_led3, 1);
  } else {
    digitalWrite(pin_led3, 0);
  }
}

