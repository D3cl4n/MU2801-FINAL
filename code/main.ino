/*
Final Project
*/

//solenoid pins
int do1 = 5;
int re = 12;
int mi = 6;
int fa = 9;
int so = 11;
int la = 10;
int ti = 4;
int do2 = 2;

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

void play(byte note){
    int dynamic = 25;   //originally was going to utilize velocity to determine the extension of solenoid, therefore dynamic,
                        //but placement of solenoid and movement of pipe made it difficult to incorporate given time frame
    if (note == 0){
        digitalWrite(do1, HIGH);
        delay(50);
        digitalWrite(do1, LOW);
        delay(ontime);
    }else if (note == 2){
        digitalWrite(re, HIGH);
        delay(dynamic);
        digitalWrite(re, LOW);
        delay(ontime);
    }else if (note == 4){
        digitalWrite(mi, HIGH);
        delay(50);
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
    if (Serial.available() > 1){
      byte note = Serial.read(); 
      byte velocity = Serial.read();
      if (velocity>0){
        Serial.println("velocity > 0");
        play(note);
      }
    }
}
