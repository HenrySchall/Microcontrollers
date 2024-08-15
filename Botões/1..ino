// Define os pinos para o LED e o botão
const int ledPin = 13;    // Pino onde o LED está conectado
const int buttonPin = 2;  // Pino onde o botão está conectado

// Variável para armazenar o estado do botão
int buttonState = 0;

void setup() {
  // Define o pino do LED como saída
  pinMode(ledPin, OUTPUT);
  

  // Define o pino do botão como entrada
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Lê o estado do botão
  buttonState = digitalRead(buttonPin);

  // Verifica se o botão foi pressionado
  if (buttonState == HIGH) {
    // Se o botão estiver pressionado, acende o LED
    digitalWrite(ledPin, HIGH);
  } else {
    // Se o botão não estiver pressionado, apaga o LED
    digitalWrite(ledPin, LOW);
  } 
}