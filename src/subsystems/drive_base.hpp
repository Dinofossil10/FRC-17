#pragma once

#include <WPILib.h>

class Drive_Base : public Subsystem {
public:
	Drive_Base();
	void InitDefaultCommand();
	void set_motors_normalized(float left_speed, float right_speed);

private:
	Talon *left_motor,
			*right_motor;
	float constrain(float input);
};
