int ledAltaTemp  = 13; // Define a saída digital 13 como "ledAltaTemp"
int ledTempIdeal  = 12; // Define a saída digital 12 como "ledTempIdeal"
int ledBaixaTemp  = 11; // Define a saída digital 11 como "ledBaixaTemp"
int TMP = 0; // Define a saída analógica 0 como "TMP"

float temperatura = 0; // atribui um valor flutuante a temperatura

void setup(){
  pinMode(ledAltaTemp ,OUTPUT); // Define o "ledAltaTemp" como uma saída
  pinMode(ledTempIdeal ,OUTPUT); // Define o "ledTempIdeal" como uma saída
  pinMode(ledBaixaTemp ,OUTPUT); // Define o "ledBaixaTemp" como uma saída
}
void loop()
{
  temperatura = map(analogRead(TMP),0,1023,-50,450); // Calculo para transformar a temperatura em celsius
  if (temperatura < 20) { // Se a temperatura for maior que 20
    digitalWrite(ledBaixaTemp, HIGH); // Esse LED liga
    digitalWrite(ledTempIdeal, LOW);
    digitalWrite(ledAltaTemp, LOW);
  } else if (temperatura >= 20 && temperatura <= 28) { // Se for maior ou igual a 20 e maior ou igual a 28
    digitalWrite(ledBaixaTemp, LOW);
    digitalWrite(ledTempIdeal, HIGH); // Esse LED liga
    digitalWrite(ledAltaTemp, LOW);
  } else { // Se não
    digitalWrite(ledBaixaTemp, LOW);
    digitalWrite(ledTempIdeal, LOW);
    digitalWrite(ledAltaTemp, HIGH); // Esse LED liga
  }

  delay(200); // Aguardar 0.2 segundo antes de fazer nova leitura
}
