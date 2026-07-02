# Obstacle Avoider Robot Simulation using Arduino UNO

A simulation-based obstacle avoidance robot developed using **Tinkercad Circuits**. The project demonstrates the integration of an Arduino Uno, an HC-SR04 ultrasonic sensor, an L293D motor driver, and two DC motors to create an autonomous obstacle avoidance system.

> **Project Type:** Simulation (Tinkercad)
>
> **Platform:** Arduino UNO
>
> **Programming Language:** Arduino C/C++

---

## Project Overview

This project simulates the behavior of an autonomous mobile robot capable of detecting obstacles and avoiding collisions without human intervention.

The robot continuously measures the distance to objects in front of it using an HC-SR04 ultrasonic sensor. When an obstacle is detected within a predefined threshold, the Arduino executes an obstacle avoidance algorithm that stops the robot, reverses briefly, turns left, and then continues moving forward.

The objective of this project is to demonstrate sensor integration, motor control, and autonomous navigation logic in a virtual environment using Tinkercad.

---

## Features

- Arduino Uno based control system
- HC-SR04 ultrasonic distance measurement
- L293D dual H-Bridge motor driver simulation
- Autonomous obstacle detection
- Automatic forward movement
- Collision avoidance logic
- Reverse and turning mechanism
- PWM-based motor speed control
- Fully simulated in Tinkercad

---

## Components Used

| Component | Quantity |
|-----------|---------:|
| Arduino UNO | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| L293D Motor Driver IC | 1 |
| DC Motor | 2 |
| Breadboard | 1 |
| Jumper Wires | As required |
| Power Supply (Simulation) | 1 |

---

## Software Used

- Tinkercad Circuits
- Arduino IDE (Code Development)
- GitHub

---

## Circuit Connections

### HC-SR04

| Sensor Pin | Arduino UNO |
|------------|-------------|
| VCC | 5V |
| GND | GND |
| TRIG | D9 |
| ECHO | D10 |

### L293D Motor Driver

| Arduino | L293D |
|----------|-------|
| D5 | EN1 |
| D2 | IN1 |
| D3 | IN2 |
| D6 | EN2 |
| D4 | IN3 |
| D7 | IN4 |

### Motor Connections

| Motor | L293D Output |
|--------|--------------|
| Left Motor | OUT1 & OUT2 |
| Right Motor | OUT3 & OUT4 |

---

## Working Principle

The Arduino continuously triggers the HC-SR04 ultrasonic sensor to measure the distance in front of the robot.

The measured distance is compared with a predefined threshold.

- If the measured distance is greater than 20 cm:
  - Robot moves forward.
- If the measured distance is less than or equal to 20 cm:
  - Robot stops.
  - Moves backward briefly.
  - Turns left.
  - Continues moving forward.

This process repeats continuously throughout the simulation.

---

## Algorithm

1. Initialize Arduino and peripherals.
2. Read the distance from the ultrasonic sensor.
3. Compare the measured distance with the threshold.
4. If no obstacle is detected:
   - Move forward.
5. Otherwise:
   - Stop the motors.
   - Reverse for a short duration.
   - Turn left.
   - Resume forward motion.
6. Repeat the process.

---

## Simulation Results

The simulation successfully demonstrates autonomous obstacle avoidance.

| Distance | Robot Action |
|----------|--------------|
| >20 cm | Moves Forward |
| ≤20 cm | Stops, Reverses, Turns Left |

The obstacle distance can be modified within Tinkercad to observe different robot behaviors in real time.

---

## Project Structure

```
Obstacle-Avoider-Robot/
│
├── code/
│   └── obstacle_avoider.ino
│
├── images/
│   ├── circuit.png
│   ├── simulation.png
│
├── report/
│   └── Project_Report.pdf
│
├── README.md
└── LICENSE
```

---

## Learning Outcomes

This project demonstrates:

- Arduino programming
- Ultrasonic sensor interfacing
- Motor driver interfacing
- PWM motor control
- Autonomous navigation logic
- Embedded systems fundamentals
- Robotics simulation using Tinkercad

---

## Future Improvements

Possible enhancements include:

- Servo-mounted ultrasonic sensor for intelligent path selection
- Dynamic obstacle avoidance algorithm
- Bluetooth-based manual control
- Integration of multiple sensors
- Line-following capability
- ESP32-based wireless monitoring

---

## Screenshots

Add the following screenshots here:

- Tinkercad circuit
- Simulation running
- Robot moving forward
- Robot detecting an obstacle
- Robot turning

---

## Author

**Sachin**

B.Tech Smart Manufacturing

IIITDM Kancheepuram

---

## License

This project is intended for educational purposes.

```

## ⭐ To make it look even more professional

Include these files in your GitHub repository:

```
README.md
LICENSE
code/obstacle_avoider.ino
images/circuit.png
images/simulation.png
report/Obstacle_Avoider_Report.pdf
```

Add your Tinkercad circuit screenshots under the **Screenshots** section, and if your instructor allows it, include the public Tinkercad simulation link. That will make the repository look polished and easy for anyone to review.