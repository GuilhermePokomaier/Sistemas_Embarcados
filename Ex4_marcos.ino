#define pin_led1 8    //define o pino 8 como led1
#define pin_led2 9    //define o pino 9 como led2
#define pin_led3 10   //define o pino 10 como led3
#define pin_led4 11   //define o pino 11 como led4


void setup() {
  Serial.begin(9600);          //define a velocidade da comunicação
  pinMode (pin_led1, OUTPUT);  //define o led1 como saida
  pinMode (pin_led2, OUTPUT);  //define o led2 como saida
  pinMode (pin_led3, OUTPUT);  //define o led3 como saida
  pinMode (pin_led4, OUTPUT);  //define o led4 como saida

}

void loop() {
  if (Serial.avaible() == 1){
    char i = Serial.read();
    serial.println(i);
  }
 /*
 Serial.println("liga LED");    //manda mensagem pro serial monitor sempre que acontece isso
 digitalWrite (pin_led1, HIGH);  //define o led1 como alto
 digitalWrite (pin_led2, HIGH);  //define o led2 como alto
 digitalWrite (pin_led3, HIGH);  //define o led3 como alto
 digitalWrite (pin_led4, HIGH);  //define o led4 como alto
 delay (500);                    // espera 500 milissegundos
 Serial.println("desliga LED");  //manda mensagem pro serial monitor sempre que acontece isso
 digitalWrite (pin_led1, LOW);   //define o led1 como baixo
 digitalWrite (pin_led2, LOW);   //define o led2 como baixo
 digitalWrite (pin_led3, LOW);   //define o led3 como baixo
 digitalWrite (pin_led4, LOW);   //define o led4 como baixo
 delay (500);                    // espera 500 milissegundos
*/
}
