#include <Servo.h>

Servo servo_pin_9;
Servo servo_pin_10;
Servo servo_pin_11;
int _ABVAR_1_a;
int _ABVAR_2_a;

void BEEP();
void MOVE();
void heartbeat();

void setup()
{
  servo_pin_9.attach(9);
  servo_pin_10.attach(10);
  servo_pin_11.attach(11);
  pinMode( 7 , OUTPUT);
}

void loop()
{
  heartbeat();
  BEEP();
  MOVE();
}

void MOVE()
{
  servo_pin_9.write( 180 );
  delay( 1000 );
  servo_pin_9.write( 1 );
  delay( 1000 );
  servo_pin_10.write( 180 );
  delay( 1000 );
  servo_pin_10.write( 1 );
  delay( 1000 );
  servo_pin_11.write( 180 );
  delay( 1000 );
  servo_pin_11.write( 1 );
  delay( 1000 );
}

void heartbeat()
{
  for (_ABVAR_1_a=1; _ABVAR_1_a<= ( 5 ); ++_ABVAR_1_a )
  {
    digitalWrite( 7 , HIGH );
    delay( 16 );
    digitalWrite( 7 , LOW );
    delay( 16 );
  }
  for (_ABVAR_2_a=1; _ABVAR_2_a<= ( 2 ); ++_ABVAR_2_a )
  {
    digitalWrite( 7 , HIGH );
    delay( 1000 );
    digitalWrite( 7 , LOW );
    delay( 1000 );
  }
  digitalWrite( 7 , HIGH );
}

void BEEP()
{
  tone(6, 261);
  delay( 1000 );
  tone(6, 311);
  delay( 1000 );
  tone(6, 369);
  delay( 1000 );
  tone(6, 440);
  delay( 1000 );
  tone(6, 293);
  delay( 1000 );
  tone(6, 329);
  delay( 1000 );
  tone(6, 392);
  delay( 1000 );
  tone(6, 466);
  delay( 1000 );
  tone(6, 493);
  delay( 1000 );
  tone(6, 349);
  delay( 1000 );
  tone(6, 329);
  delay( 1000 );
}


