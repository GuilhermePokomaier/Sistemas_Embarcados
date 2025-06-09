#define led1 8 //Aqui definimos os pinos 8, 9, 10  e 11 e os botões 1 e 2
#define led2 9
#define led3 10
#define led4 11
#define botaoA 2
#define botaoB 3

int contador = 0; //Aqui estão nossas variaveis auxiliares.
bool ultimoA = 0;
bool ultimoB = 0;
bool estadoA = 0;
bool estadoB = 0;
int i = 0;


void setup() {
  pinMode(botaoA, INPUT); //Aqui definimos os botões como entrada(INPUT) e os pinos como saida(OUTPUT)
  pinMode(botaoB, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  estadoA = digitalRead(botaoA);
  if (estadoA != ultimoA){
    if (estadoA == 1){
      if (contador < 15){
        contador++;
        Serial.println(contador);
      }
    }
  }
  ultimoA = estadoA;

    estadoB = digitalRead(botaoB);
  if (estadoB != ultimoB){
    if (estadoB == 1){
      if (contador > 0){
        contador--;
        Serial.println(contador);
      }
    }
  }
  ultimoB = estadoB;

  if (contador % 2 == 1 || contador == 1){
    digitalWrite(led1, 1);
  }
  else{
    digitalWrite(led1,0);
  }

  i =contador ;

  if (i == 2||i == 3||i == 6||i == 7||i == 10||i == 11||i == 14||i == 15){
    digitalWrite(led2, 1);
  }
  else{
    digitalWrite(led2,0);
  }

  if ((contador / 4 >= 1 && contador / 4 < 2) || contador / 4 >=3 ){
    digitalWrite(led3, 1);
  }
  else{
    digitalWrite(led3,0);
  }

  if (contador>=8){
    digitalWrite(led4, 1);
  }
  else{
    digitalWrite(led4,0);
  }

}