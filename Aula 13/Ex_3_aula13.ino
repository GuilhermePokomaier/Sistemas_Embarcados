// ESSE EXERCICIO VAI LER UM BOTAO E LIGAR UM LED.
#define pin_led1 8         //Aqui definimos os pinos 8, 9, 10 e 11 como pin_led.
#define pin_led2 9         
#define pin_led3 10          
#define pin_led4 11          
#define pin_botao 2

void setup() {
  pinMode(pin_led1, OUTPUT);        //Definimos eles como saida (OUTPUT) e o botão como uma entrada (INPUT). 
  pinMode(pin_led2, OUTPUT);       
  pinMode(pin_led3, OUTPUT);        
  pinMode(pin_led4, OUTPUT);        
  pinMode(pin_botao, INPUT);

}
void loop() {
  bool estado = digitalRead(pin_botao); //Aqui se o botão estiver pressionado o led liga, caso contrário não vair liga.
  if (estado == 1) {
    digitalWrite(pin_led1, HIGH);
  } else{
    digitalWrite(pin_led1, LOW);
  }
}