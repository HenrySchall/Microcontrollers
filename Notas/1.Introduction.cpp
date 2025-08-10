// Estrutura básica Arduino 

// Função que estabelece os slots a serem executados
void setup() {}

// Função que estabelece os comandos a serem executados
void loop() {}

// Exemplo de código
void setup() {pinMode(13, OUTPUT);}

void loop() {digitalWrite(13, HIGH);delay(1000); digitalWrite(13, LOW);delay(1000);}


// Variáveis

#include <Servo.h>
#define PI  3.1415

int quantidade;
void setup() {quantidade = 30; float rad = PI / 180.0 * 60.0;}
 ...

// Vetores

int dados[15]

#define GRAVIDADE  9.8
 
int valor = 10;
valor = valor + 5;
valor += 5;
valor++;

float massa = 75;
float altura = 1.75;
float peso = massa * GRAVIDADE; 
float imc = massa / (altura * altura)