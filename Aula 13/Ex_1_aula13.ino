#define pin_led1 8
#define pin_led2 9    //Da linha 1 ate a 6 estamos defininindo os pinos 8, 9, 10, 11 e definimos os botões.
#define pin_led3 10
#define pin_led4 11
#define pin_botaoA 2
#define pin_botaoB 3
void setup() {
  pinMode(pin_led1, OUTPUT);    //Aqui definimos os pinos como saida (OUTPUT) e os botões como entrada (INPUT). 
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botaoA, INPUT);
  pinMode(pin_botaoB, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool botaoA = digitalRead(pin_botaoA);    //Lê os estados dos botões, pressionado = 1, não pressionado = 0.
  bool botaoB = digitalRead(pin_botaoB);

  if (botaoA == 1 && botaoB == 0) {         //Mostra mensagens diferentes no Monitor Serial dependendo de quais botões estão pressionados.
    Serial.println("Botão A funcionando");
  }

  if (botaoA == 1 && botaoB == 1) {
    Serial.println("Botão A e B funcionando");    
  }

  if (botaoA == 0 && botaoB == 1) {
    Serial.println("Botão B funcionando");
  }


  if ((botaoA == 1) && (botaoB == 1)) {   //Acende o LED1 somente quando os dois botões estão pressionados.
    digitalWrite(pin_led1, 1);
  } else {
    digitalWrite(pin_led1, 0);
  }

  if ((botaoA == 1) || (botaoB == 1)) {   //Acende o LED2 quando pelo menos um botão está pressionado.
    digitalWrite(pin_led2, 1);
  } else {
    digitalWrite(pin_led2, 0);
  }

  if ((botaoA == 1) ^ (botaoB == 1)) {    //Acende o LED3 quando apenas um dos dois botões está pressionado
    digitalWrite(pin_led3, 1);
  } else {
    digitalWrite(pin_led3, 0);
  }
}