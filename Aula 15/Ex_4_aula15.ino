#define pin_led1 8 //Aqui definimos os botões 1 e 2 nas estradas 2 e 3 e os leds 1, 2, 3 e 4.
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botao1 2
#define pin_botao2 3
int cont1 = 0;
int cont2 = 0;
int cont3 = 0;
int cont4 = 0;
int tic1 = 0;
int tic2 = 0;
void setup() {
  pinMode(pin_led1, OUTPUT); //Aqui definimos os pinos "leds" como saida (OUTPUT) e o botões como entrada (INPUT).
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool botaoA = digitalRead(pin_botao1);
  bool botaoB = digitalRead(pin_botao2);


if (botaoA == 1 && tic1 == 0) {
    cont1 += 1;
    tic1 += 1;
 }
if(cont1 == 2){
cont1 -= 2;
cont2 += 1;
    }
if(cont2 == 2){
cont2 -= 2;
cont3 += 1;
}
if(cont3 == 2){
cont3 -= 2;
 cont4 += 1;
 }
if(cont4 == 2){
cont1 = 1;
cont2 = 1;
cont3 = 1;
cont4 = 1;
}
  
if (botaoA == 0) {
    tic1 = 0;
}
    
if (botaoB == 1 && tic2 == 0) {
    cont4 -= 1;
    tic2 += 1;
 }
if(cont4 == -1){
cont4 += 1;
cont1 -= 1;
cont3 = 3;
    }
if(cont3 == 3){
cont3 = 0;
cont1 += 1;
cont2 = 3;
}
if(cont2 == 3){
cont2 = 0;
cont1 = 3;

 }
if(cont1 == 3){
cont1 = 0;
cont2 = 0;
cont3 = 0;
cont4 = 0;
}
  
if (botaoB == 0) {
    tic2 = 0;
}
 
  
  if (botaoB == 0) {
    tic2 = 0;
  }
  if (cont1 == 1){
    digitalWrite(pin_led1, 1);
  }else{
    digitalWrite(pin_led1, 0);
  }
  if (cont2 == 1){
    digitalWrite(pin_led2, 1);
  }else{
    digitalWrite(pin_led2, 0);
  }
  if (cont3 == 1){
    digitalWrite(pin_led3, 1);
  }else{
    digitalWrite(pin_led3, 0);
  }
  if (cont4 == 1){
    digitalWrite(pin_led4, 1);
  }else{
    digitalWrite(pin_led4, 0);
  }
}