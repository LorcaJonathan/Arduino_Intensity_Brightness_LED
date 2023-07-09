
int led = 11;
int brillo;

void setup() {
  // put your setup code here, to run once:

  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  for (brillo = 0; brillo < 256; brillo ++) {
    analogWrite(led, brillo);
    delay(15);
  }

    for (brillo = 255; brillo >= 0; brillo --) {
    analogWrite(led, brillo);
    delay(15);
  }

}
