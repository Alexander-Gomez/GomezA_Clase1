/*
*CAPÍTULO II: PUERTOS DIGITALES
*CÓDIGO 1: Manejo de puertos configurados como salidas
*OBJETIVO: Encender y apagar leds mediante diferentes tipos de variables
*NOMBRE: Gómez Alexander
*/
//variables: númericas enteras(int), decimales(float), caracteres(char)
const int led1=8;
const int led2=9;
const int led3=10;
const int led4=11;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop() {
  digitalWrite(led1,HIGH);
  delay(500);
  digitalWrite(led1,LOW);
  delay(100);
  digitalWrite(led2,HIGH);
  delay(500);
  digitalWrite(led2,LOW);
  delay(100);
  digitalWrite(led3,HIGH);
  delay(500);
  digitalWrite(led3,LOW);
  delay(100);
  digitalWrite(led4,HIGH);
  delay(500);
  digitalWrite(led4,LOW);
  delay(100);
}
