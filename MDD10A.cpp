#include "Arduino.h"
#include "MDD10A.h"

MDD10A::MDD10A(int pwmPin, int dirPin, bool forward = true, int pwm = 0) {
    _pwmPin = pwmPin;
    _dirPin = dirPin;
    _forward = forward;
    _PWM = pwm;

    pinMode(_pwmPin, OUTPUT);
    pinMode(_dirPin, OUTPUT);

    setDirection(_forward);
    setPWM(_PWM);
}

void MDD10A::setDirection(bool forward) {
    _forward = forward;
    digitalWrite(_dirPin, _forward);
}

bool MDD10A::getDirection() {
    return _forward;
}

void MDD10A::setPWM(int val) {
    _PWM = constrain(val, 0, 255);
    analogWrite(_pwmPin, _PWM);
}

int MDD10A::getPWM() {
    return _PWM;
}


