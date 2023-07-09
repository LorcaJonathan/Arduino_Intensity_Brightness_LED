int led = 11;      // Variable que almacena el número de pin del LED
int brillo;        // Variable que almacena el nivel de brillo

void setup() {
  pinMode(led, OUTPUT);     // Configura el pin del LED como salida
}

void loop() {
  // Primer bucle: Aumentar el brillo del LED de 0 a 255
  for (brillo = 0; brillo < 256; brillo++) {
    analogWrite(led, brillo);   // Establece el nivel de brillo del LED utilizando PWM
    delay(15);                  // Espera 15 milisegundos
  }

  // Segundo bucle: Disminuir el brillo del LED de 255 a 0
  for (brillo = 255; brillo >= 0; brillo--) {
    analogWrite(led, brillo);   // Establece el nivel de brillo del LED utilizando PWM
    delay(15);                  // Espera 15 milisegundos
  }
}
