#include <Arduino.h>

#define JOYSTICK_X_PIN A0
#define JOYSTICK_Y_PIN A1
#define BUTTON_A_PIN 5
#define BUTTON_B_PIN 6

#define LEFT_THRESHOLD 150
#define RIGHT_THRESHOLD 850
#define UP_THRESHOLD 850
#define DOWN_THRESHOLD 150

class InputController {
	public:
		InputController();
		uint8_t getInput();

	private:
		
};

