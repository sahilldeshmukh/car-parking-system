void setup() { 
  Serial.begin(9600); 
}

void loop() {
  int a = analogRead(A0); 
  int b = map(a, 0, 1023, 0, 255); 
  Serial.println(b); 
  if (b > 240) { 
    Serial.println("car1 is arrived"); 
    delay(500); 
  } 
  if (b < 240) { 
    Serial.println("car1 is arrived"); 
    delay(500); 
  }

  int a1 = analogRead(A1); 
  int b1 = map(a1, 0, 1023, 0, 255); 
  Serial.println(b1); 
  if (b1 > 240) { 
    Serial.println("car2 is arrived"); 
    delay(500); 
  } 
  if (b1 < 240) { 
    Serial.println("car2 is arrived"); 
    delay(500); 
  }

  int a2 = analogRead(A2); 
  int b2 = map(a2, 0, 1023, 0, 255); 
  Serial.println(b2); 
  if (b2 > 240) { 
    Serial.println("car3 is arrived"); 
    delay(500); 
  } 
  if (b2 < 240) { 
    Serial.println("car3 is arrived"); 
    delay(500); 
  }
}
