// #include <Wire.h>
// #include <Adafruit_PWMServoDriver.h>

// // called this way, it uses the default address 0x40
// Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
// // you can also call it with a different address you want
// //Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x41);
// // you can also call it with a different address and I2C interface
// //Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40, Wire);

// // Depending on your servo make, the pulse width min and max may vary, you 
// // want these to be as small/large as possible without hitting the hard stop
// // for max range. You'll have to tweak them as necessary to match the servos you
// // have!
// #define SERVOMIN  0 // This is the 'minimum' pulse length count (out of 4096)
// #define SERVOMAX  4096 // This is the 'maximum' pulse length count (out of 4096)
// #define USMIN  600 // This is the rounded 'minimum' microsecond length based on the minimum pulse of 150
// #define USMAX  2400 // This is the rounded 'maximum' microsecond length based on the maximum pulse of 600
// #define SERVO_FREQ 50 // Analog servos run at ~50 Hz updates

// // our servo # counter
// uint8_t servonum = 0;

// void setup() {
//     Serial.begin(9600);
//     Serial.println("8 channel Servo test!");

//     pwm.begin();

//     pwm.setOscillatorFrequency(27000000);
//     pwm.setPWMFreq(3052); //Datasheet limit is 3052=50MHz/(4*4096)

//     //25%
//     pwm.setPWM(0, 0, 1024); //max 50C ??
    
//     // //50%
//     // pwm.setPWM(0, 0, 2048);
    
//     // //100%
//     // pwm.setPWM(0, 4096, 0);

//     //pinMode(D6, OUTPUT);
//     //analogWriteFreq(25000);
//     //analogWrite(D6, 128);
//     //delay(10);
// }

// void loop() {


//     // //0%
//     // pwm.setPWM(0, 0, 4096);
//     // delay(5000);
    
//     // // //25%
//     // pwm.setPWM(0, 0, 1024);
//     // delay(5000);
    
//     // // //50%
//     // pwm.setPWM(0, 0, 2048);
//     // delay(5000);
    
//     // // //75%
//     // pwm.setPWM(0, 0, 3072);
//     // delay(5000);
    
//     // //100%
//     // pwm.setPWM(0, 4096, 0);
//     // Serial.println("100%");
//     // delay(5000);

// }