class MDD10A {
public:
    MDD10A(int pwmPin, int dirPin, bool forward = true, int pwm = 0);
    void setDirection(bool forward);
    bool getDirection();
    void setPWM(int val);
    int getPWM();
private:
    int _pwmPin;
    int _dirPin;
    bool _forward;
    int _PWM;
};