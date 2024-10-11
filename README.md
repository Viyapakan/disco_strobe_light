Turning the potentiometer up or down changes the speed of the flashing
lights, creating a strobe effect

The sketch works by setting the analog signal from the potentiometer
to the Arduino as an input and the pins connected to the LEDs as outputs.
The Arduino reads the analog input from the potentiometer and
uses this value as the delay value—the amount of time that passes
before the LEDs change state (either on or off). This means that the
LEDs are on and off for the duration of the potentiometer value, so
changing this value alters the speed of the flashing. The sketch
cycles through the LEDs to produce a strobe effect.
