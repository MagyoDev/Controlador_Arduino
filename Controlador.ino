#include <Servo.h>   // Inclui a biblioteca Servo para controlar o motor servo
Servo motor;        // Cria um objeto motor do tipo Servo

int pot;            // Variável para armazenar o valor lido do potenciômetro
int LED = 4;        // Pino do LED
const int pinBuzzer = 7;  // Pino do buzzer

void setup()
{
  Serial.begin(9600);       // Inicia a comunicação serial
  motor.attach(9);          // Anexa o motor servo ao pino 9
  pinMode(LED, OUTPUT);     // Define o pino do LED como saída
  pinMode(pinBuzzer, OUTPUT);   // Define o pino do buzzer como saída
}

void loop()
{
  pot = map(analogRead(A1), 0, 1023, 0, 180);   // Lê o valor do potenciômetro e mapeia para o intervalo de 0 a 180
  Serial.println(pot);   // Imprime o valor do potenciômetro na porta serial
  delay(400);   // Aguarda 400 milissegundos

  motor.write(pot);   // Define o ângulo do motor servo com base no valor do potenciômetro

  if (pot >= 0 && pot <= 70)
  {
    digitalWrite(pinBuzzer, LOW);   // Desliga o buzzer
    digitalWrite(LED, HIGH);   // Liga o LED
    delay(200);   // Aguarda 200 milissegundos
    digitalWrite(LED, LOW);   // Desliga o LED
    delay(200);   // Aguarda 200 milissegundos
  }

  if (pot > 90 && pot <= 1023)
  {
    digitalWrite(LED, LOW);   // Desliga o LED
    digitalWrite(pinBuzzer, HIGH);   // Liga o buzzer

    tone(pinBuzzer, 440);   // Gera um tom de 440 Hz no buzzer
    delay(800);   // Mantém o tom por 800 milissegundos
    noTone(pinBuzzer);   // Desliga o tom do buzzer
    delay(500);   // Aguarda 500 milissegundos

    tone(pinBuzzer, 530, 300);   // Gera um tom de 530 Hz por 300 milissegundos
    delay(500);   // Aguarda 500 milissegundos
  }
}