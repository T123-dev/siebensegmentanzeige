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
  one(D1);
  two(D2);
}
void off() {
  digitalWrite(D1, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
}


void one(int Dx) {
  digitalWrite(D1, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
off();
}
void two(int Dx) {
  digitalWrite(D1, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);

  digitalWrite(B, HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(G, HIGH);
  digitalWrite(D, HIGH);
  off();
}
void three(int Dx) {
  
  digitalWrite(Dx, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(G, HIGH);
  off();
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