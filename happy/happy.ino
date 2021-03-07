#include <Servo.h> //используем библиотеку для работы с сервоприводом

int val1, val2, val3;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
	val1=150;
	val2=150;
	val3=60;
	servo1.attach(2); 
	servo2.attach(3); 
	servo3.attach(4); 
	servo4.attach(5); 
	servo1.write(100);
	servo2.write(100);
	servo3.write(95);
	servo4.write(105);
}

void srv1() {
	servo1.write(120); 
	delay(val1); 
	servo1.write(100);
	delay(val2);
}

void srv2() {
	servo2.write(83); 
	delay(val1); 
	servo2.write(100);
	delay(val2);
}


void srv3() {
	servo1.write(85); 
	delay(val1); 
	servo1.write(100);
	delay(val2);
}

void srv4() {
	servo2.write(112); 
	delay(val1); 
	servo2.write(100);
	delay(val2);
}

void srv5() {
	servo3.write(72); 
	delay(val1); 
	servo3.write(90);
	delay(val2);
}

void srv6() {
	servo4.write(90); 
	delay(val1); 
	servo4.write(105);
	delay(val2);
}

void loop() {
	srv1();
	srv1();
	srv2();delay(2*val3);
	srv1();delay(2*val3);
	srv4();delay(2*val3);
	srv3();delay(2*val3);
	delay(270);
	srv1();
	srv1();
	srv2();delay(2*val3);
	srv1();delay(2*val3);
	srv5();delay(2*val3);
	srv4();delay(2*val3);
	delay(270);
	srv1();
	srv1();
	srv6();delay(2*val3);
	srv5();delay(2*val3);
	srv4();delay(2*val3);
	srv3();delay(2*val3);
	srv2();delay(2*val3);
	delay(270);
	srv5();
	srv4();
	srv5();delay(2*val3);
	srv3();delay(2*val3);
	srv4();delay(2*val3);
	srv3();delay(2*val3);
	delay(800);

}
