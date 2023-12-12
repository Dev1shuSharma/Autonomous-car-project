//assinging pin for the morors as they are connected together
int pinM12in1= //pin for motor 1 and 2 input1
int pinM12in2=//pin for motor input2
int pinM34in1=//pin for motor 3 and 4 input 1
int pinM34in2=//pin for motor 3 and 4 input 2
float distance=// received from python code
float width=// received from python code
float circumference= //circumference of tyre
float rounds=(distance-5)/circumference;
int time= (3*rounds)/5;


void setup() {
  // put your setup code here, to run once:
  pinMode(pinM12in1,OUTPUT);
  pinMode(pinM34in1,OUTPUT);
  pinMode(pinM12in2,OUTPUT);
  pinMode(pinM34in2,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

void forward()
  {
   digitalWrite(pinM12in1,1);
   digitalWrite(pinM12in2,0);
   digitalWrite(pinM34in1,1);
   digitalWrite(pinM34in2,0);
  }

void backward()
{
  digitalWrite(pinM12in1,0);
  digitalWrite(pinM12in2,1);
  digitalWrite(pinM34in1,0);
  digitalWrite(pinM34in2,1);
  
}
void left()
{
  digitalWrite(pinM12in1,1);
  digitalWrite(pinM12in2,0);
  digitalWrite(pinM34in1,0);
  digitalWrite(pinM34in2,0);
  
}
void right()
{
  digitalWrite(pinM12in1,0);
  digitalWrite(pinM12in2,0);
  digitalWrite(pinM34in1,1);
  digitalWrite(pinM34in2,0);
  
}
//We will take input from the python code about the distance of the obstacle
//since out motor speed is 100 rpm so it move around, we have to take the measure that how much distance out wheel measure in  1 round 
// from that will divide the distance form it "no. of rounds"="distance/circumferance of tyre" we will get the no of rounds and out motor is moving with 100 rpm so that
//will will divide the rounds taken in 1 second(5/3 round) then our time for runnign the motor is (3/5*no. of rounds)





