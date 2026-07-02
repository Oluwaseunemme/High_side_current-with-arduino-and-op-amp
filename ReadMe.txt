𝗛𝗶𝗴𝗵-𝗦𝗶𝗱𝗲 𝗖𝘂𝗿𝗿𝗲𝗻𝘁 𝗠𝗲𝗮𝘀𝘂𝗿𝗲𝗺𝗲𝗻𝘁 𝘂𝘀𝗶𝗻𝗴 𝗮 𝗗𝗶𝗳𝗳𝗲𝗿𝗲𝗻𝘁𝗶𝗮𝗹 𝗢𝗽-𝗔𝗺𝗽 𝗮𝗻𝗱 𝗔𝗿𝗱𝘂𝗶𝗻𝗼 ⚡

This project demonstrates a high-side current sensing circuit using a low-value shunt resistor, an op-amp configured as a differential amplifier, and an Arduino Uno.

The shunt resistor is placed on the positive supply rail, allowing the load to remain directly connected to ground while the small voltage drop across the shunt is measured.

The op-amp amplifies only the voltage difference across the shunt resistor while rejecting the common-mode voltage present on the supply line.

The differential amplifier follows the relationship:

Vout = Ad × (V₂ − V₁)

where Ad is the differential gain and (V₂ − V₁) is the voltage drop across the shunt resistor.

The load current is then determined using Ohm's Law:

I = Vshunt / Rshunt

The amplified output is connected to the Arduino's A0 analog input. In the firmware, the ADC reading is converted into a current value using a simple floating-point mapping function, scaling the measured voltage to a 0.00–5.00 A range before displaying the result on the Serial Monitor.

✅ The measured current from the Arduino closely matches the simulated ammeter reading, confirming that both the analog front-end and software scaling are working correctly.

This project highlights how a differential amplifier can accurately measure small voltage drops in high-side current sensing applications, making it useful for battery management, power monitoring, motor control, and embedded systems.