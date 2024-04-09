# Interactive "Simon Says" Embedded Game Box

## Description
This project aims to create an interactive "Simon Says" game using an Arduino Uno microcontroller. The game features four buttons for player input, four LEDs to indicate the game's and player's choices, a 7-segment display to show the player's score, and a 74HC595 shift register to expand the digital output pins of the Arduino.

## Hardware Components
- 1 x Arduino Uno
- 1 x Breadboard
- 4 x Pushbutton switches
- 4 x LEDs
- 1 x 7-segment display
- 1 x 74HC595 shift register
- Jumper wires
- 110 Ω resistors
- 330 Ω resistors

## Circuit Diagram
![Circuit Diagram][]

## Software Implementation
The game logic is implemented in Arduino C++. The main steps are:

1. Initialize the input/output pins for the buttons, LEDs, and 7-segment display.
2. Generate a random sequence of button presses and light up the corresponding LEDs.
3. Wait for the player to input the sequence using the buttons.
4. Compare the player's input with the generated sequence.
5. Increment the score if the player's input matches the sequence, otherwise reset the score.
6. Update the 7-segment display to show the current score.
7. Repeat the process with an increasingly longer sequence.

## Usage
1. Connect all the hardware components as shown in the circuit diagram.
2. Upload the Arduino sketch to the board.
3. Press any of the four buttons to start the game.
4. Observe the sequence of lit LEDs and try to replicate the sequence using the buttons.
5. The 7-segment display will show your current score.
6. The game will continue with an increasingly longer sequence.

## Dependencies
- Arduino IDE
- Standard Arduino libraries (e.g., `digitalWrite()`, `digitalRead()`, `delay()`)
- Custom library for the 74HC595 shift register (e.g., `ShiftRegister74HC595.h`)

## License
This project is licensed under the [MIT License](LICENSE).
