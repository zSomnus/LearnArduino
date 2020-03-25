#include <Stepper.h>

const int PROGMEM STEPS_PER_ROTOR_REV = 32;
const int PROGMEM GEAR_REDUCTION = 64;

const float PROGMEM STEPS_PER_OUT_REV = STEPS_PER_ROTOR_REV * GEAR_REDUCTION;

int StepsRequired;

Stepper steppermotor(STEPS_PER_ROTOR_REV, 8, 10, 9, 11);

void setup(){

}

void loop(){
    // 极慢转动4步，用于观察电机驱动板LED变化
    steppermotor.setSpeed(1);
    StepsRequired = 4;
    steppermotor.step(StepsRequired);
    delay(1000);

    // 慢速顺时针旋转一圈
    StepsRequired = STEPS_PER_OUT_REV;
    steppermotor.setSpeed(500);
    steppermotor.step(StepsRequired);
    delay(1000);

    // 快速逆时针旋转一圈
    StepsRequired = - STEPS_PER_OUT_REV;
    steppermotor.setSpeed(800);
    steppermotor.step(StepsRequired);
    delay(2000);

}