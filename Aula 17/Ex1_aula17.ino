#define pin_led1 10 //LIB(LIBERADO)
#define pin_led2 11 //LOT(LOTADO)
#define pin_led3 12 //VER(VERIFICAR)
#define pin_botaoA 2 //SEV(SENSOR ENTRADA)
#define pin_botaoB 3 //SSV(SENSOR SAIDA)
#define pin_botaoC 4 //RESET

int cont = 0;
const int maxvagas = 10;
bool resetFeito = false;


void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_botaoA, INPUT_PULLUP);
  pinMode(pin_botaoB, INPUT_PULLUP);
  pinMode(pin_botaoC, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  bool bot_SEV = !digitalRead(pin_botaoA);
  bool bot_SSV = !digitalRead(pin_botaoB);
  bool bot_RST = !digitalRead(pin_botaoC);
   
  if (bot_SEV == 1){
    if (cont < maxvagas){
    cont++;
    Serial.print("Veículo entrou. Vagas ocupadas: ");
    Serial.println(cont);
    }
  	delay(500);
  }
  
  if (bot_SSV == 1){
    delay(200);
    if (cont > 0){
    cont--;
    Serial.print("Veículo saiu. Vagas ocupadas: ");
    Serial.println(cont);
    }
    delay(500);
  }
  if (cont == 0 && !resetFeito){
  digitalWrite(pin_led3, 1);
  }else{
  digitalWrite(pin_led3, 0);
  }
  
  if((bot_RST == 1) &&(cont == 0)){
  cont == 0;
  resetFeito = true;
  digitalWrite(pin_led3, 0);
  Serial.println("Contador zerado.");
   delay(500);
  }
  if (cont < maxvagas){
  digitalWrite(pin_led1, 1);
  digitalWrite(pin_led2, 0);
  }else{
  digitalWrite(pin_led1, 0);
  digitalWrite(pin_led2, 1);
  }
  if (cont > 0) {
  resetFeito = false;
}
}

 
  
    
  

   
