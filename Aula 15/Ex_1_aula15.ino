#define pin_botao1 2 //Aqui definimos o botao na entrada 2 e 3
#define pin_botao2 3
int cont = 0; //Essas são variaveis auxiliares.
int tic1 = 0; //tic1 e tic2 são usados para evitar contagens repetidas enquanto o botão ainda está pressionado.
int tic2 = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {     // 
  bool botaoA = digitalRead(pin_botao1);
  bool botaoB = digitalRead(pin_botao2);

  Serial.println(cont);
 if (botaoA == 1 && tic1 == 0) {  //Se o botão 1 (botaoA) for pressionado (== 1) e tic1 == 0 (ou seja, ainda não contou esse click)
    cont += 1;                    //Incrementa cont,  ou seja conta 1
    tic1 += 1;                    //Marca tic1 como 1 para não contar novamente enquanto o botão estiver pressionado.
  }                               //Se o botão 1 for solto (== 0), tic1 volta a 0, fazendo com que tenha uma nova contagem no próximo click.
  if (botaoA == 0) {
    tic1 = 0;
  }
    
  if (botaoB == 1 && tic2 == 0) {
    cont -= 1;
    tic2 += 1;
  }
  if (botaoB == 0) {
    tic2 = 0;
  }
}