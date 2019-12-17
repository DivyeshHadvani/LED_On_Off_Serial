char serialData;
int pin=8;


void setup() 
{
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
  digitalWrite( pin, HIGH);
  // put your setup code here, to run once:

}

void loop() 
{
  if (Serial.available() >0)
  {
    serialData = Serial.read();
    Serial.print(serialData);
  }
  if (serialData == '1') // if (serialData == 49)
  {
    digitalWrite( pin, HIGH);
  }
    else if (serialData == '0') // elseif (serialData == 48)
  {
    digitalWrite( pin, LOW);
  }
  // put your main code here, to run repeatedly:
}
