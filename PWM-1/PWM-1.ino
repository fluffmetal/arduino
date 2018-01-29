#define R_pin D5  // Red
#define Y_pin D4  // Yellow
#define G_pin D5  // Green
int st_R = 1023;
int st_Y = 0;
int st_G = 0;

void setup()
{
  pinMode(R_pin,OUTPUT);
  pinMode(Y_pin,OUTPUT);
  pinMode(G_pin,OUTPUT);
}

void loop()
{
  for (int i=0; 1<1024; i++)
  {
    st_R--;
    st_Y++;
    displayPWM(st_R,st_Y,st_G);
    delay(30);
  }
  for (int i=0; i<1024; i++)
  {
    st_R = 0;
    st_Y--;
    displayPWM(st_R,st_Y,st_G);
    delay(30);
  }
  for (int i=0; i<1024; i++)
  {
    st_Y = 0;
    st_G++;
    displayPWM(st_R,st_Y,st_G);
    delay(30);
  }
  for (int i=0; i<1024; i++)
  {
    st_Y = 0;
    st_G--;
    displayPWM(st_R,st_Y,st_G);
    delay(30);
  }
  for (int i=0; i<1024; i++)
  {
    st_R++;
    st_G = 0;
    displayPWM(st_R,st_Y,st_G);
    delay(30);
  }
  for (int i=0; i<1024; i++)
  {
    st_R--;
    displayPWM(st_R,st_Y,st_G);
    delay(30);
  }
}

void displayPWM(int R, int Y, int G)
// Drive LED with PWM by using analogWrite function
{
  analogWrite(R_pin,R);
  analogWrite(Y_pin,Y);
  analogWrite(G_pin,G);
}

