int E = 12;
int D = 11;
int decimal = 10;
int C = 9;
int G = 8;
int D4 = 7;
int B = 1;
int D3 = 3;
int D2 = 2;
int F = 4;
int A = 5;
int D1 = 6;
void setup() {
  pinMode(B, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(decimal, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(D3, OUTPUT);
}

void loop() {
  zero(D1);
  one(D2);
  eight(D3);
  seven(D4);
}
void off() {
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
}


void one(int Dx) {
  off();
  digitalWrite(Dx, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
}
void two(int Dx) {
  off();
  digitalWrite(Dx, LOW);

  digitalWrite(B, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(D, HIGH);
}
void three(int Dx) {
  off();
  digitalWrite(Dx, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(G, HIGH);
}
void four(int Dx) {
  off();
  digitalWrite(Dx, LOW);
  digitalWrite(F, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(G, HIGH);
}
void five(int Dx) {
  off();
  digitalWrite(Dx, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
}
void six(int Dx) {
  off();
  digitalWrite(Dx, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(F, HIGH);
}
void seven(int Dx) {
  off();
  digitalWrite(Dx, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
}
void eight(int Dx) {
  off();
  digitalWrite(Dx, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void nine(int Dx) {
  off();
  digitalWrite(Dx, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
}
void zero(int Dx) {
  off();
  digitalWrite(Dx, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
}