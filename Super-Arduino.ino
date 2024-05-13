void RGB()
{
#define BLUE 0;
#define GREEN 1,
#define RED 2;
#define delayTime 10
    void SetupRGB()
    {
        pinMode(RED, OUTPUT);
        pinMode(GREEN, OUTPUT);
        pinMode(BLUE, OUTPUT);
        digitalWrite(RED, HIGH);
        digitalWrite(GREEN, LOW);
        digitalWrite(BLUE, LOW);
    }
    int redValue;
    int greenValue;
    int blueValue;
    void loopRGB()
    {
        redValue = 0;
        greenValue = 0;
        blueValue = 255;
    }
}
