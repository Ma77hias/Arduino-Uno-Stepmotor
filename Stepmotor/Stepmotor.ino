//by Ma77hias
//stepmotor 28byj-48 have only 4 coils

static const int Pin1 = 8; 
static const int Pin2 = 9;
static const int Pin3 = 10;
static const int Pin4 = 11;

int motorSpeed = 3;

//Set Pins as Output
void setup(){
  pinMode(Pin1, OUTPUT);
  pinMode(Pin2, OUTPUT);
  pinMode(Pin3, OUTPUT);
  pinMode(Pin4, OUTPUT);
}


void loop(){
  forward();// or backward();

}

// 1st Coil 
void Step_A(){
  digitalWrite(Pin1, HIGH);//coil 1 
  digitalWrite(Pin2, LOW); //coil 2
  digitalWrite(Pin3, LOW); //coil 3
  digitalWrite(Pin4, LOW); //coil 4
}
// 2nd Coil 
void Step_B(){
  digitalWrite(Pin1, LOW); //coil 1
  digitalWrite(Pin2, HIGH);//coil 2
  digitalWrite(Pin3, LOW); //coil 3
  digitalWrite(Pin4, LOW); //coil 4
}
// 3rd Coil 
void Step_C(){
  digitalWrite(Pin1, LOW); //coil 1
  digitalWrite(Pin2, LOW); //coil 2
  digitalWrite(Pin3, HIGH);//coil 3
  digitalWrite(Pin4, LOW); //coil 4
}
// 4th Coil
void Step_D(){
  digitalWrite(Pin1, LOW); //coil 1
  digitalWrite(Pin2, LOW); //coil 2
  digitalWrite(Pin3, LOW); //coil 3
  digitalWrite(Pin4, HIGH);//coil 4
}
//all coils off
void step_OFF(){
  digitalWrite(Pin1, LOW); //coil 1
  digitalWrite(Pin2, LOW); //coil 2
  digitalWrite(Pin3, LOW); //coil 3
  digitalWrite(Pin4, LOW); //coil 4
}


void forward(){
  Step_A();
  delay(motorSpeed);
  Step_B();
  delay(motorSpeed);
  Step_C();
  delay(motorSpeed);
  Step_D();
  delay(motorSpeed);
}

void backward(){
  Step_D();
  delay(motorSpeed);
  Step_C();
  delay(motorSpeed);
  Step_B();
  delay(motorSpeed);
  Step_A();
  delay(motorSpeed);
}
