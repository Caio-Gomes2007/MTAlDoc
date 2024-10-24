#define LDR A0  //Define o nome da porta A0 como "LDR"
#define LED 8  //Define o nome da porta 8 como "LED"
int VLDR=0;     
void setup() {
  pinMode(LDR, INPUT); // Define o "LDR" como entrada
  pinMode(LED, OUTPUT); // Define o "LED" como saída
  Serial.begin(9600); // Define o tick do loop
}

void loop() {
 VLDR = analogRead(LDR); // atribui a leitura analógica da porta "LDR" a variavel "VLDR"
  if(VLDR <= 30){ // Se o "VLDR" for menor ou igual a 30
    digitalWrite(LED,HIGH); // o LED liga
  }else{ // Se não
    digitalWrite(LED, LOW); // O LED não liga
  }
  Serial.println(VLDR); // Imprime o valor de "VLDR" no monitor serial
  delay(200); // um delay de 0.2 segundo para reiniciar o loop
}