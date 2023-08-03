# Ultrasonic Sensor
This readme file provides information about the design and programming of a circuit for sensing distances using an ultrasonic sensor. The circuit is implemented using an Arduino board and uses the provided code to measure the distance to an object.

## Components Required
- Arduino board (e.g., Arduino Uno R3)
- Ultrasonic sensor (e.g., HC-SR04)
- Jumper wires

## Circuit Diagram
Connect the components as follows:
![image](https://github.com/AtheerAldawsari1/Ultrasonic-Sensor/assets/139083849/ce400b3e-955d-465e-ac90-729c3bf9d941)


## Code Explanation

The provided code measures the distance to an object using an ultrasonic sensor and displays the result on the serial monitor.

- The setup() function initializes the pins and starts the serial communication.

- In the loop() function:
  - The trigger pin is briefly set to HIGH and then LOW to send an ultrasonic pulse.
  - The pulseIn() function measures the time it takes for the pulse to travel to the object and back.
  - The distance is calculated by multiplying the time by a conversion factor and dividing by 2.
  - The calculated distance is printed on the serial monitor.

## Usage
1. Connect the circuit components according to the provided circuit diagram.
2. Upload the code to your Arduino board.
3. Open the serial monitor in the Arduino IDE (or any other serial monitor application) to view the measured distance in centimeters.
![image](https://github.com/AtheerAldawsari1/Ultrasonic-Sensor/assets/139083849/27629bbe-5f85-4f0b-a03b-73cd5ade6b94)
![image](https://github.com/AtheerAldawsari1/Ultrasonic-Sensor/assets/139083849/acb63ee2-9fc2-4473-af58-d1aa3d4d218a)

## Conclusion

If you have any questions or suggestions, feel free to contact me at Atheeraldossri1@gmail.com . I appreciate your feedback!
