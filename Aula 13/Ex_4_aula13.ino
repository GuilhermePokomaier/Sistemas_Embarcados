#define pin_led1 8           //Aqui definimos os pinos 8, 9, 10 e 11 e um botão.
#define pin_led2 9           
#define pin_led3 10        
#define pin_led4 11        
#define pin_botao 2

void setup() {
  pinMode(pin_led1, OUTPUT);        //Aqui os pinos serão definimos como saida(OUTPUT) e o botão como entrada (INPUT).
  pinMode(pin_led2, OUTPUT);       
  pinMode(pin_led3, OUTPUT);       
  pinMode(pin_led4, OUTPUT);       
  pinMode(pin_botao, INPUT);

}
void loop() {
  bool estado = digitalRead(pin_botao); //Quando o botão estiver pressionado o led1 liga, led2 desliga, led3 liga e o led4 desliga, caso contrario vai reverter a ordem dos pinos que irão liga e desligar
  if (estado == 1) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, LOW);
    digitalWrite(pin_led3, HIGH);
    digitalWrite(pin_led4, LOW);
  } else{
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led2, HIGH);
    digitalWrite(pin_led3, LOW);
    digitalWrite(pin_led4, HIGH);
  }
}