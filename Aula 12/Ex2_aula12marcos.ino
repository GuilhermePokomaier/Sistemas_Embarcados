void setup() {
  pinMode(8, OUTPUT); //Aqui vai ser definido o pino 8 como saida.
}

void loop() {   //A função loop() executa o padrão de piscar o LED em código Morse para "SOS" infinitamente.


  digitalWrite(8, HIGH); 
  delay(200);           // Aqui representa a letra 'S'.
  digitalWrite(8, LOW); //Três piscadas curtas, com pausas de 200 ms, depois uma pausa de 600 ms entre letras.
  delay(200);
  digitalWrite(8, HIGH); 
  delay(200); 
  digitalWrite(8, LOW); 
  delay(200);
  digitalWrite(8, HIGH); 
  delay(200); 
  digitalWrite(8, LOW); 
  delay(600);


  digitalWrite(8, HIGH);  .//Aqui representa a letra 'O'.
  delay(600);             //Três piscadas longas, com pausas de 200 ms e depois 600 ms para a próxima letra.
  digitalWrite(8, LOW); 
  delay(200);
  digitalWrite(8, HIGH); 
  delay(600); 
  digitalWrite(8, LOW); 
  delay(200);
  digitalWrite(8, HIGH); 
  delay(600); 
  digitalWrite(8, LOW); 
  delay(600);


  digitalWrite(8, HIGH); //E aqui representa o 'S' denovo
  delay(200);            // Uma pausa maior (1400 ms) para indicar o fim da palavra antes de repetir.
  digitalWrite(8, LOW); 
  delay(200);
  digitalWrite(8, HIGH); 
  delay(200); 
  digitalWrite(8, LOW); 
  delay(200);
  digitalWrite(8, HIGH); 
  delay(200); 
  digitalWrite(8, LOW); 
  delay(1400);
}