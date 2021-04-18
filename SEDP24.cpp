void setup() {
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}

int ditTime = 250;
int intraCharacterTime = ditTime;
int interCharacterTime = 3*ditTime;
int dahTime = 3*ditTime;
int spacePause = 7*ditTime;

void loop()
{
    String input = "it is windy";
    for (int i = 0; i < input.length(); i++)
    {
        flashCharacter(input.charAt(i));
        delay(interCharacterTime);
    }
    delay(10000);
}


void flashLong()
{
    digitalWrite(5, HIGH);
    delay(dahTime);
    digitalWrite(5, LOW);
    delay(intraCharacterTime);

}
void flashShort()
{
    digitalWrite(5, HIGH);
    delay(ditTime);
    digitalWrite(5, LOW);
    delay(intraCharacterTime);
}
void flashCharacter(char input)
{
    switch (input)
    {
        case 'a':
            flashShort();
            flashLong();
            break;

        case 'b':
            flashLong();
            flashShort();
            flashShort();
            flashShort();
            break;

        case 'c':
            flashLong();
            flashShort();
            flashLong();
            flashShort();
            break;

        case 'd':
            flashLong();
            flashShort();
            flashShort();
            break;

        case 'e':
            flashShort();
            break;

        case 'f':
            flashShort();
            flashShort();
            flashLong();
            flashShort();
            break;

        case 'g':
            flashLong();
            flashLong();
            flashShort();
            break;

        case 'h':
            flashShort();
            flashShort();
            flashShort();
            flashShort();
            break;

        case 'i':
            flashShort();
            flashShort();
            break;

        case 'j':
            flashShort();
            flashLong();
            flashLong();
            flashLong();
            break;

        case 'k':
            flashLong();
            flashShort();
            flashLong();
            break;

        case 'l':
            flashShort();
            flashLong();
            flashShort();
            flashShort();
            break;

        case 'm':
            flashLong();
            flashLong();
            break;

        case 'n':
            flashLong();
            flashShort();
            break;

        case 'o':
            flashLong();
            flashLong();
            flashLong();
            break;

        case 'p':
            flashShort();
            flashLong();
            flashLong();
            flashShort();
            break;

        case 'q':
            flashLong();
            flashLong();
            flashShort();
            flashLong();
            break;

        case 'r':
            flashShort();
            flashLong();
            flashShort();
            break;

        case 's':
            flashShort();
            flashShort();
            flashShort();
            break;

        case 't':
            flashLong();
            break;

        case 'u':
            flashShort();
            flashShort();
            flashLong();
            break;

        case 'v':
            flashShort();
            flashShort();
            flashShort();
            flashLong();
            break;

        case 'w':
            flashShort();
            flashLong();
            flashLong();
            break;

        case 'x':
            flashLong();
            flashShort();
            flashShort();
            flashLong();
            break;

        case 'y':
            flashLong();
            flashShort();
            flashLong();
            flashLong();
            break;

        case 'z':
            flashLong();
            flashLong();
            flashShort();
            flashShort();
            break;

        case '1':
            flashShort();
            flashLong();
            flashLong();
            flashLong();
            flashLong();
            break;

        case '2':
            flashShort();
            flashShort();
            flashLong();
            flashLong();
            flashLong();
            break;

        case '3':
            flashShort();
            flashShort();
            flashShort();
            flashLong();
            flashLong();
            break;

        case '4':
            flashShort();
            flashShort();
            flashShort();
            flashShort();
            flashLong();
            break;

        case '5':
            flashShort();
            flashShort();
            flashShort();
            flashShort();
            flashShort();
            break;

        case '6':
            flashLong();
            flashShort();
            flashShort();
            flashShort();
            flashShort();
            break;

        case '7':
            flashLong();
            flashLong();
            flashShort();
            flashShort();
            flashShort();
            break;

        case '8':
            flashLong();
            flashLong();
            flashLong();
            flashShort();
            flashShort();
            break;

        case '9':
            flashLong();
            flashLong();
            flashLong();
            flashLong();
            flashShort();
            break;

        case '0':
            flashLong();
            flashLong();
            flashLong();
            flashLong();
            flashLong();
            break;

        default:
            delay(spacePause);
            break;
    }

}