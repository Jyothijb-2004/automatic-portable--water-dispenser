# automatic-portable--water-dispenser
I designed and simulated an automatic portable water dispenser using Tinkercad. I implemented a functionally equivalent design using available components. The simulation focuses on verifying the control logic and system behavior, while real hardware performance is discussed conceptually.
# Components Used in Tinkercad Simulation
• 9V Battery – power source
• IR Sensor – hand detection
• Small signal NMOS transistor – motor switching device
• DC Motor – represents the water pump
• Diode – flyback protection for motor
• Pushbutton – manual enable/reset
• LED – motor ON indication
# working
1. The 9V battery provides power to the Arduino, IR sensor, and motor driver circuit.
2. The IR sensor detects the presence of a hand near the dispensing outlet and sends a signal to the Arduino.
3. A push button is used as a manual trigger for testing or override operation.
4. The Arduino acts as the control unit and processes inputs from the IR sensor and pushbutton.
5. Based on the input, the Arduino sends a control signal to the NMOS transistor.
6. The NMOS transistor works as a motor driver and switches the DC motor ON or OFF.
7. A flyback diode is connected across the motor to protect the circuit from voltage spikes.
8. The DC motor represents the water pump and operates when the transistor is activated.
9. An LED indicator shows the operational status of the system.
