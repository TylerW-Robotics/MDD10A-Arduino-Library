class MDD10A {
public:
    MDD10A();
    void setDirection(bool forward);
    bool getDirection();
    void setPWM();
    int getPWM();
private:
    int _pwmPin;
    int _dirPin;
    bool _forward;
    int _PWM;
};