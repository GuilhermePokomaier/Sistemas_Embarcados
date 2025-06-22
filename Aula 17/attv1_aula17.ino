// 1- Usando 1 botão com PULLUP interno faça:
// quando o botão for apertado um LED deve começar a piscar com intervalo de 500ms.
// o LED deve parar de piscar se o botão for precionado pela segunda vez.

#define INTERVALO 500
#define pin_botaoA 2
#define pin_led1 8
int cont = 0;
int tic = 0;
unsigned long tempo = 0;
bool estado = 0,

void setup() {

  pinMode(pin_led1, OUTPUT);
  pinMode(pin_botao, INPUT_PULLUP);
  

}

void loop() {
  bool botaoA = !digitalRead(pin_bataoA);
  if (botaoA == 1 && tic ==0 ){
    cont += 1;
    tic = 1;
  }

  if (botaoA == 0) {
    tic = 0;
  }

  if (cont % 2 == 0) {
    unsigned long temp_atual = millis();
    if ((tempo_atual - tempo_anterior) >= intervalo) {
      estado = !estado;
      digitalWrite(pin_led1, estado);
      tempo_anterior = tempo_atual;
    }
  } else {
    digitalWrite(pin_led1, LOW);
  }
  

}
