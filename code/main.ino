/*
Final Project
*/

//solenoid pins
int do1 = ;
int re = ;
int mi = ;
int fa = ;
int so = ;
int la = ;
int ti = ;
int do2 = ;

int ontime = 50;


void setup() {
    pinMode(do1, OUTPUT);
    pinMode(re, OUTPUT);
    pinMode(mi, OUTPUT);
    pinMode(fa, OUTPUT);
    pinMode(so, OUTPUT);
    pinMode(la, OUTPUT);
    pinMode(ti, OUTPUT);
    pinMode(do2, OUTPUT);
    
    while (!Serial);
    
    Serial.begin(9600);
}

void play(byte note, byte velocity){
    int dynamic = (velocity/127)*50;
    
    if (note == 0){
        digitalWrite(do1, HIGH);
        delay(dynamic);
        digitalWrite(do1, LOW);
        delay(ontime);
    }else if (note == 2){
        digitalWrite(do1, HIGH);
        delay(dynamic);
        digitalWrite(do1, LOW);
        delay(ontime);
    }else if (note == 4){
        digitalWrite(do1, HIGH);
        delay(dynamic);
        digitalWrite(do1, LOW);
        delay(ontime);
    }else if (note == 5){
        digitalWrite(do1, HIGH);
        delay(dynamic);
        digitalWrite(do1, LOW);
        delay(ontime);
    }else if (note == 7){
        digitalWrite(do1, HIGH);
        delay(dynamic);
        digitalWrite(do1, LOW);
        delay(ontime);
    }else if (note == 9){
        digitalWrite(do1, HIGH);
        delay(dynamic);
        digitalWrite(do1, LOW);
        delay(ontime);
    }else if (note == 11){
        digitalWrite(do1, HIGH);
        delay(dynamic);
        digitalWrite(do1, LOW);
        delay(ontime);
    }else if (note == 12){
        digitalWrite(do1, HIGH);
        delay(dynamic);
        digitalWrite(do1, LOW);
        delay(ontime);
    }
}

void loop() {
    if (Serial.available>2){
      byte note = Serial.read(); 
      byte velocity = Serial.read();
      if (velocity>0){
        play(note, velocity);
      }
    }
}
