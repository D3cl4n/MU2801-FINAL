/*
Final Project
*/

//solenoid pins
int do1 = 3;
int re = 5;
/*
int mi = ;
int fa = ;
int so = ;
int la = ;
int ti = ;
int do2 = ;
*/
int ontime = 50;


void setup() {
    pinMode(do1, OUTPUT);
    pinMode(re, OUTPUT);
    /*
    pinMode(mi, OUTPUT);
    pinMode(fa, OUTPUT);
    pinMode(so, OUTPUT);
    pinMode(la, OUTPUT);
    pinMode(ti, OUTPUT);
    pinMode(do2, OUTPUT);
    */
    while (!Serial);
    
    Serial.begin(9600);
}

void play(int note, int velocity){
    int dynamic = (velocity/127)*50;
    
    if (note == 0){
        Serial.println("Playing note c");
        digitalWrite(do1, HIGH);
        Serial.println("Powered pin");
        delay(dynamic);
        digitalWrite(do1, LOW);
        delay(ontime);
    }else if (note == 2){
        digitalWrite(re, HIGH);
        delay(dynamic);
        digitalWrite(re, LOW);
        delay(ontime);
    }else if (note == 4){
        digitalWrite(mi, HIGH);
        delay(dynamic);
        digitalWrite(mi, LOW);
        delay(ontime);
    }else if (note == 5){
        digitalWrite(fa, HIGH);
        delay(dynamic);
        digitalWrite(fa, LOW);
        delay(ontime);
    }else if (note == 7){
        digitalWrite(so, HIGH);
        delay(dynamic);
        digitalWrite(so, LOW);
        delay(ontime);
    }else if (note == 9){
        digitalWrite(la, HIGH);
        delay(dynamic);
        digitalWrite(la, LOW);
        delay(ontime);
    }else if (note == 11){
        digitalWrite(ti, HIGH);
        delay(dynamic);
        digitalWrite(ti, LOW);
        delay(ontime);
    }else if (note == 12){
        digitalWrite(do2, HIGH);
        delay(dynamic);
        digitalWrite(do2, LOW);
        delay(ontime);
    }
}

void loop() {
    if (Serial.available() > 0){
      int note = Serial.parseInt(); 
      int velocity = Serial.parseInt();
      if (velocity>0){
        Serial.println("velocity > 0");
        play(note, velocity);
      }
    }
}
