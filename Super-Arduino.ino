

// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6
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
