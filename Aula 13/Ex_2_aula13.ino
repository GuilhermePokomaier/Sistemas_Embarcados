#define pin_led1 8           //Aqui definimos os pinos 8, 9, 10 e 11.
#define pin_led2 9           
#define pin_led3 10          
#define pin_led4 11        

void setup() {
  Serial.begin(9600);
  pinMode(pin_led1, OUTPUT);        //Aqui definimos que os pinos serão saidas (OUTPUT).
  pinMode(pin_led2, OUTPUT);   
  pinMode(pin_led3, OUTPUT);       
  pinMode(pin_led4, OUTPUT);        

}

void loop() {
  if (Serial.available() == 1) {
    char i = Serial.read();
    Serial.print(i);
  }
  Serial.println("Liga led");
  digitalWrite(pin_led1, HIGH);        //definimos que os leds estarão ligados.
  digitalWrite(pin_led2, HIGH);        
  digitalWrite(pin_led3, HIGH);       
  digitalWrite(pin_led4, HIGH);        
  delay(1000);      //Eles vão ter uma esperda de 1 segundo.
  Serial.println("Desliga led");
  digitalWrite(pin_led1, LOW);        //E por ultimo definimos que os leds serão desligados
  digitalWrite(pin_led2, LOW);        
  digitalWrite(pin_led3, LOW);       
  digitalWrite(pin_led4, LOW);        
  delay(1000);      //Eles vão ter uma esperda de 1 segundo