# SOS Morse Code Blinker

This is an Arduino project using PlatformIO that blinks an SOS distress signal ("... --- ...") in Morse code using an LED.

## Features
- Blinks the universal SOS distress signal using an LED.
- Compatible with any Arduino-compatible board.
- Easy to configure and extend.

## Requirements

- [PlatformIO](https://platformio.org/install) installed on your system.
- A compatible Arduino board (e.g., Arduino Uno, ESP32, etc.).
- An LED connected to the appropriate GPIO pin (or use the built-in LED on pin 13 for most Arduino boards).

## Installation & Setup

1. Clone this repository:
   ```sh
   git clone https://github.com/yourusername/sos-morse-blinker.git
   cd sos-morse-blinker
   ```
2. Open the project in PlatformIO (VS Code or CLI).
3. Connect your Arduino board.
4. Build and upload the code:
   ```sh
   pio run --target upload
   ```

## Morse Code Timing
Morse code uses short and long signals:
- **Dot (.)**: 1 unit (short blink)
- **Dash (-)**: 3 units (long blink)
- **Pause between symbols**: 1 unit
- **Pause between letters**: 3 units
- **Pause between words**: 7 units

The SOS signal consists of:
```
... --- ...
```
which translates to:
- 3 short blinks (S)
- 3 long blinks (O)
- 3 short blinks (S)

## Configuration

Modify `main.cpp` to change the LED pin or timing constants if needed.

## License

This project is licensed under the MIT License.

## Author
[Gabriel Rodriguez](https://github.com/Irexvi)
