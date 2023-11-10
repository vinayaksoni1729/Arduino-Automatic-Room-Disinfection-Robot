Certainly! Here's a well-formatted readme for your project's repository, including the code and circuit diagram, to make it look presentable:

```markdown
# Arduino Ultrasonic Sensor Robot

This is an Arduino project that uses three ultrasonic distance sensors to detect obstacles in the front, right, and left directions and take appropriate actions. The code provided in this repository is for an Arduino sketch that interfaces with these sensors and takes action based on the detected distances.

## Components

- Arduino board (e.g., Arduino Uno)
- Three ultrasonic distance sensors (e.g., HC-SR04 or similar)
- Jumper wires
- Breadboard (optional but recommended for easier wiring)

## Circuit Diagram

Here's a simplified circuit diagram for this setup:
****To be added****
## Working Video
https://github.com/vinayaksoni1729/Arduino-Automatic-Room-Disinfection-Robot/assets/113187290/feee3fab-0543-4a2d-b0fe-ae41f92a15a8


Here are the connections:

- Connect the `TRIGGER_PIN` of the front sensor to Arduino pin 4.
- Connect the `ECHO_PIN` of the front sensor to Arduino pin 5.
- Connect the `TRIGGER_PIN` of the right sensor to Arduino pin 6.
- Connect the `ECHO_PIN` of the right sensor to Arduino pin 7.
- Connect the `TRIGGER_PIN` of the left sensor to Arduino pin 8.
- Connect the `ECHO_PIN` of the left sensor to Arduino pin 9.

Make sure to connect the sensors and Arduino as shown in the diagram.

## Arduino Sketch

The Arduino sketch provided in this repository is for reading distance measurements from the three ultrasonic sensors and taking appropriate actions based on the detected distances. The code can be found in the `arduino_sketch` folder.

## Usage

1. Upload the Arduino sketch to your Arduino board using the Arduino IDE.
2. Make sure the circuit connections are correctly set up as described in the circuit diagram.
3. Power up the Arduino board.
4. The robot will use the ultrasonic sensors to detect obstacles and take action accordingly.

Feel free to modify and improve upon this project for your specific needs.

Happy robotics!
```
