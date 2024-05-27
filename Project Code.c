#define FWD 17
#define PLAY 12
#define RECLED 13 // record LED
const int IRs_1 = 7;
const int IRs_2 = 8;
const int Voice_Sensors = 14;
const int ma_1 = 5;
const int ma_2 = 6;
const int mb_1 = 9;
const int mb_2 = 10;
int IR_1 =0;
int IR_2 =0;
int Voice_Sensor =1;
void setup()
{
pinMode(FWD, OUTPUT);// set pin as OUTPUT for FWD
pinMode(PLAY, OUTPUT);// set pin as OUTPUT for PLAY
pinMode(RECLED, OUTPUT);// set pin as OUTPUT for RECLED (record LED)
digitalWrite(FWD, HIGH);//turn OFF the pin: FWD
digitalWrite(PLAY, HIGH);//turn OFF the pin: PLAY
digitalWrite(RECLED, LOW);
pinMode(ma_1, OUTPUT); // initialize digital pin LED_BUILTIN as an output. pinMode(ma_2, OUTPUT);
pinMode(mb_1, OUTPUT);
pinMode(mb_2, OUTPUT);
pinMode(IRs_1, INPUT_PULLUP);
pinMode(IRs_2, INPUT_PULLUP);
pinMode(Voice_Sensors, INPUT_PULLUP);
delay(4000);
}
void loop() // the loop function runs over and over again forever
{
(IR_1 = digitalRead(IRs_1);
IR_2 = digitalRead(IRs_2);
Voice_Sensor = digitalRead(Voice_Sensors);
ifVoice_Sensor ==LOW);
{
digitalWrite(RECLED, LOW);
if(IR_1 == LOW) //If IR_1 Sensor is Detected Then Turning Robot to Left. 
{
digitalWrite(ma_1, HIGH);
digitalWrite(ma_2, LOW);
digitalWrite(mb_1, LOW);
digitalWrite(mb_2, LOW);
}
if(IR_2 == LOW) //If IR_2 Sensor is Detected Then Turning Robot to Right. 
{
digitalWrite(mb_1, LOW);
digitalWrite(mb_2, HIGH);
digitalWrite(ma_1, LOW);
digitalWrite(ma_2, LOW);
}
}
if(Voice_Sensor ==HIGH)
{
action();
delay(5000);
Forward();
}
}
void action()
{
digitalWrite(PLAY,LOW);// start the command
delay(1);
digitalWrite(PLAY,HIGH);// stop the command
}
void Forward()
{
digitalWrite(FWD,LOW);// start the command
delay(1);
digitalWrite(FWD,HIGH);// stop the command
}