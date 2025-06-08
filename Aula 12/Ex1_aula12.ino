// Esse código foi feito para ligar e desligar quatro LEDs conectados aos pinos digitais 8, 9, 10 e 11 da placa.

#define pin_led1 8        // Da linha 3 a linha 6 definem apelidos para os pinos digitais do Arduino.
#define pin_led2 9      
#define pin_led3 10
#define pin_led4 11

void setup() {

  pinMode(pin_led1, OUTPUT);   //Da linha 8 até a 13 a função é executada uma única vez quando o Arduino é ligado. Nela, os quatro pinos são configurados como saídas (OUTPUT)
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);

}

void loop() {

  digitalWrite(pin_led1, HIGH); // A função loop() é executada repetidamente em um ciclo infinito.
  digitalWrite(pin_led2, HIGH); // Liga todos os 4 LEDs (HIGH)                           
 digitalWrite(pin_led3, HIGH);  //Espera 1 segundo (delay(1000)   
  digitalWrite(pin_led4, HIGH); //Desliga todos os 4 LEDs (LOW)
  delay(1000);                  //Espera mais 1 segundo     
  digitalWrite(pin_led1, LOW);  //E depois repete esse processo continuamente.
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);
  delay(1000);