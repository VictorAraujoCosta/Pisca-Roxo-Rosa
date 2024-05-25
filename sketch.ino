#define leds 4
#define botao 14

int roxinho [leds] = {0, 2, 16, 5};
int rosinha [leds] = {19, 21, 22, 23};

void setup() {
  for (int i = 0; i < leds; i++){
    pinMode(roxinho[i], OUTPUT);
    pinMode(rosinha[i], OUTPUT);
    }
    pinMode(botao, INPUT_PULLUP);
}

void loop() {
  while(digitalRead(botao) == HIGH){
    for (int i = 0; i < leds; i++){
      digitalWrite(roxinho[i], HIGH);
      digitalWrite(rosinha[i], HIGH);
      delay(250);
      digitalWrite(roxinho[i], LOW);
      digitalWrite(rosinha[i], LOW);
    }
}
  for (int i = 0; i < leds; i++){
    digitalWrite(roxinho[i], HIGH);
    digitalWrite(rosinha[i], HIGH);
    delay(250);
    digitalWrite(roxinho[i], LOW);
    digitalWrite(rosinha[i], LOW);
  }
  }