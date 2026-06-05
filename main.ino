void setup() {

  // ===== STAGE 1: SERIAL START =====
  Serial.begin(9600);
  Serial.println("Hello World - Arduino Started");

  // ===== STAGE 2: LED SETUP =====
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

  // ===== STAGE 3: LED ON =====
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("LED STATUS: ON");
  delay(1000);

  // ===== STAGE 3: LED OFF =====
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("LED STATUS: OFF");
  delay(1000);
}
