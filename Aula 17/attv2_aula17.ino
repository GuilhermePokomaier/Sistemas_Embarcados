// 2- Corredor de LED. Os 4 LEDS devem ligam na sequência:
//  ->LED1 ---> LED2 ---> LED3 ---> LED4 ---> Apaga todos--| 
// |  125ms      250ms     500ms     1s                   |
// |______________________________________________________|

#define pin_led1 10
#define pin_led2 11
#define pin_led3 12
#define pin_led4 13

unsigned long tempo_inicial = 0;




void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  

}

void loop() {
  unsigned long tempo_atual = millis();
  
  if ((tempo_atual - tempo_inicial) >= 125){
    digitalWrite(pin_led1, 1);
  } else{
    digitalWrite(pin_led1, 0);
    }  
  
  if ((tempo_atual - tempo_inicial) >= 250){
    digitalWrite(pin_led2, 1);
  } else{
    digitalWrite(pin_led2, 0);
    }
  
  if ((tempo_atual - tempo_inicial )>= 500){
    digitalWrite(pin_led3, 1);
  } else{
    digitalWrite(pin_led3, 0);
    }
  
  if ((tempo_atual - tempo_inicial) >= 1000){
    digitalWrite(pin_led4, 1);
  } else{
    digitalWrite(pin_led4, 0);
    }
  
  if (tempo_atual - tempo_inicial >= 1200) {
    tempo_inicial = tempo_atual;
  }
}
