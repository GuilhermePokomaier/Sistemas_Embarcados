//3- Corredor de LEDS com inversão de sentido
// 2 botões (PULLP INTERNO): 1° botão: liga a sequência 1 --> 2 --> 3 --> 4
//                           2° botão: Liga a sequência 4 --> 3 --> 2 --> 1

#define pin_led1 10
#define pin_led2 11
#define pin_led3 12
#define pin_led4 13
#define pin_botao1 3
#define pin_botao2 4

unsigned long tempo_anterior = 0;
int etapa = 0;
const unsigned long intervalo = 300;




void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);

  pinMode(pin_botao1, INPUT_PULLUP);
  pinMode(pin_botao2, INPUT_PULLUP);

}

void loop() {
  unsigned long tempo_atual = millis();
  
  bool sentidoNormal = !digitalRead(pin_botao1);
  bool sentidoRevers = !digitalRead(pin_botao2);
  
    
  if ((sentidoNormal || sentidoRevers) && (tempo_atual - tempo_anterior) >= intervalo){
   
    tempo_anterior = tempo_atual;
      
   digitalWrite(pin_led1, LOW);
   digitalWrite(pin_led2, LOW);
   digitalWrite(pin_led3, LOW);
   digitalWrite(pin_led4, LOW);
    
    if (sentidoNormal){
      if (etapa == 0) digitalWrite(pin_led1, HIGH);
      else if (etapa == 1) digitalWrite(pin_led2, HIGH);
      else if (etapa == 2) digitalWrite(pin_led3, HIGH);
      else if (etapa == 3) digitalWrite(pin_led4, HIGH);
    }

    if (sentidoRevers) {
      if (etapa == 0) digitalWrite(pin_led4, HIGH);
      else if (etapa == 1) digitalWrite(pin_led3, HIGH);
      else if (etapa == 2) digitalWrite(pin_led2, HIGH);
      else if (etapa == 3) digitalWrite(pin_led1, HIGH);
    }

    etapa++;
    if (etapa > 3) etapa = 0;
  }
}
   