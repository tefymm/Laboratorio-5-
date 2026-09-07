# Laboratorio 5 - Electrónica Digital 2

Universidad del Valle de Guatemala  
Curso: Electrónica Digital 2  
Estudiante: Stephany Mejía  
Carnet: 24037  

## Descripción

En este laboratorio se implementó un juego de carrera para dos jugadores utilizando STM32 NUCLEO-F446RE.

Cada jugador cuenta con un botón y cuatro LEDs que representan su avance desde la posición 0 hasta la posición 4.

El juego inicia únicamente cuando se recibe el comando `S` o `s` mediante comunicación UART. Después de recibirlo, se ejecuta una secuencia de semáforo:

1. Rojo durante 1 segundo.
2. Amarillo durante 1 segundo.
3. Verde durante 1 segundo.

Durante esta secuencia los botones de ambos jugadores permanecen bloqueados.

Al finalizar el semáforo, se envía por UART el mensaje:

`Inicia el juego!`

y los jugadores pueden comenzar a avanzar.

## Funcionamiento

Cada jugador avanza una posición cada vez que presiona su botón.

Las pulsaciones son detectadas mediante interrupciones externas y cuentan con un sistema de antirrebote de 200 ms utilizando `HAL_GetTick()`.

El avance de cada jugador es independiente.

Cuando uno de los jugadores llega a la posición 4:

- Se identifica al ganador.
- Se bloquean inmediatamente los botones de ambos jugadores.
- Los contadores dejan de incrementarse.
- Se envía mediante UART un mensaje indicando al ganador.

Ejemplo:

`El ganador es Jugador 1!`

o

`El ganador es Jugador 2!`

El sistema permanece bloqueado después de finalizar la carrera.

Para iniciar una nueva carrera es necesario enviar nuevamente el comando `S` o `s`.

## Hardware utilizado

- STM32 NUCLEO-F446RE
- 2 botones
- 8 LEDs para los contadores
- 3 LEDs para el semáforo
- Resistencias para los LEDs
- Protoboard
- Cables jumper
- Computadora con terminal serial

## Pines utilizados

| Elemento | Pin |
|---|---|
| Botón Jugador 1 | PA0 |
| Botón Jugador 2 | PA1 |
| USART2 TX | PA2 |
| USART2 RX | PA3 |
| Jugador 1 LED 1 | PA4 |
| Jugador 1 LED 2 | PB0 |
| Jugador 1 LED 3 | PC1 |
| Jugador 1 LED 4 | PC0 |
| Jugador 2 LED 1 | PC7 |
| Jugador 2 LED 2 | PB6 |
| Jugador 2 LED 3 | PA7 |
| Jugador 2 LED 4 | PA6 |
| Semáforo rojo | PA8 |
| Semáforo amarillo | PB10 |
| Semáforo verde | PB4 |

## Configuración UART

La comunicación serial se realizó utilizando USART2 con la siguiente configuración:

- Baud rate: 115200
- Data bits: 8
- Stop bits: 1
- Paridad: None
- Flow control: None
- Modo: TX/RX

La recepción del comando se realiza mediante interrupciones utilizando:

```c
HAL_UART_Receive_IT(&huart2, &datoUART, 1);
