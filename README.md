# Controlador Arduino

Este é um projeto de um controlador utilizando a plataforma Arduino para controlar um servo motor, um buzzer e um LED, com a interação de um potenciômetro.

## Componentes

Para implementar este projeto, você precisará dos seguintes componentes:

- Placa Arduino (por exemplo, Arduino Uno, Arduino Nano, Arduino Mega)
- Protoboard (para fazer as conexões)
- Servo motor
- Buzzer (ou um alto-falante piezoelétrico)
- Resistor (recomendado para limitar a corrente do LED)
- 1 LED
- Potenciômetro
- Cabos e jumpers para conexões

## Esquema de Conexões

Conecte os componentes da seguinte maneira:

- Conecte o pino GND do Arduino ao trilho negativo da protoboard.
- Conecte o pino 5V do Arduino ao trilho positivo da protoboard.
- Conecte o pino de controle do servo motor a um pino digital do Arduino (por exemplo, pino 9).
- Conecte o pino positivo do buzzer a um pino digital do Arduino (por exemplo, pino 8).
- Conecte o pino negativo do buzzer ao GND do Arduino.
- Conecte o anodo do LED (o lado mais longo) a um resistor e o outro lado do resistor a um pino digital do Arduino (por exemplo, pino 7).
- Conecte o catodo do LED (o lado mais curto) ao GND do Arduino.
- Conecte o pino central do potenciômetro ao pino analógico A0 do Arduino.
- Conecte os pinos de extremidade do potenciômetro ao GND e 5V do Arduino.

Certifique-se de verificar o datasheet dos componentes utilizados para entender suas características e requisitos de conexão.

## Funcionalidades

- **Servo Motor**: O potenciômetro controla a posição do servo motor. Ao girar o potenciômetro, o servo motor se moverá para uma posição correspondente.
- **Buzzer**: O potenciômetro controla o tom do buzzer. Ao girar o potenciômetro, o buzzer emitirá diferentes tons.
- **LED**: O potenciômetro controla o brilho do LED. Ao girar o potenciômetro, o LED ficará mais brilhante ou mais fraco.

## Como executar o projeto

1. Certifique-se de ter o ambiente de desenvolvimento Arduino IDE instalado em sua máquina.
2. Conecte os componentes de acordo com o esquema de conexões descrito acima.
3. Abra o código-fonte do projeto no Arduino IDE.
4. Selecione o tipo de placa Arduino correta e a porta serial correta.
5. Faça o upload do código para a placa Arduino.
6. Abra o monitor serial para visualizar as informações e interagir com o projeto.

![logo](https://github.com/MagyoDev/Controlador_Arduino/blob/main/Autor.png)
