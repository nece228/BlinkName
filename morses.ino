 
int led1 = D6; 

int led2 = D7; 

void setup() {


    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);

}


void loop() {
    // s
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);

    delay(500);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    delay(500);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);

    delay(500);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    // i
    delay(2000);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);

    delay(500);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    delay(500);
    
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    // m
    delay(2000);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);

    delay(1000);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    delay(1000);
    

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    // o
    delay(2000);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);

    delay(1000);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    delay(1000);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);

    delay(1000);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    // n
    delay(2000);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);

    delay(1000);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    delay(500);
    

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    // a
    delay(2000);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);

    delay(500);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    delay(1000);
    

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    // s
    delay(2000);
    
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);

    delay(500);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    delay(500);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);

    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    // end
    delay(2000);

}
