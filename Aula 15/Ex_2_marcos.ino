#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botaoA 2
#define pin_botaoB 3

int conta = 0;
int aux = 0;
int auxb = 0;

void setup() {
  pinMode(pin_led1, OUTPUT);   // Aqui estamos definindo o led1 como saida
  pinMode(pin_led2, OUTPUT);   // Aqui estamos definindo o led2 como saida
  pinMode(pin_led3, OUTPUT);   // Aqui estamos definindo o led3 como saida
  pinMode(pin_led4, OUTPUT);   // Aqui estamos definindo o led4 como saida
  pinMode(pin_botaoA, INPUT);  // Aqui estamos definindo o botaoA como entrada
  pinMode(pin_botaoB, INPUT);  // Aqui estamos definindo o botaoB como entrada
  Serial.begin(9600);
}

void loop() {
  bool botaoA = digitalRead(pin_botaoA);
  bool botaoB = digitalRead(pin_botaoB);
  if (botaoA == 1) {
   if (aux == 0) {
     conta++;
     aux = 1;
   }
  } else {
    aux  = 0;
  }
  if (botaoB == 1) {
   if (auxb == 0) {
     conta--;
     auxb = 1;
   }
  } else {
    auxb  = 0;
  }
    Serial.println(conta);
  }
  

