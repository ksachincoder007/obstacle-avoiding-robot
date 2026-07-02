// ---------------------------
// Motor Pins (L293D)
// ---------------------------
#define ENA 5
#define IN1 2
#define IN2 3

#define ENB 6
#define IN3 4
#define IN4 7

// ---------------------------
// Ultrasonic Sensor
// ---------------------------
#define TRIG 9
#define ECHO 10

long duration;
int distance;

// ---------------------------
// Setup
// ---------------------------
void setup()
{
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  Serial.begin(9600);
}

// ---------------------------
// Main Loop
// ---------------------------
void loop()
{
  distance = getDistance();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if(distance > 20)
  {
    forward();
  }
  else
  {
    stopRobot();
    delay(300);

    backward();
    delay(500);

    stopRobot();
    delay(200);

    turnLeft();
    delay(700);

    stopRobot();
    delay(200);
  }

  delay(50);
}

// ---------------------------
// Measure Distance
// ---------------------------
int getDistance()
{
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH);

  distance = duration * 0.0343 / 2;

  return distance;
}

// ---------------------------
// Move Forward
// ---------------------------
void forward()
{
  analogWrite(ENA, 180);
  analogWrite(ENB, 180);

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

// ---------------------------
// Move Backward
// ---------------------------
void backward()
{
  analogWrite(ENA, 180);
  analogWrite(ENB, 180);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

// ---------------------------
// Turn Left
// ---------------------------
void turnLeft()
{
  analogWrite(ENA, 180);
  analogWrite(ENB, 180);

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

// ---------------------------
// Stop
// ---------------------------
void stopRobot()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
