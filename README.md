Control-De-Led-Boton-Arbuino
# Control de LED con Botón

Este código permite controlar un LED utilizando un botón. Cuando el botón es presionado, el LED parpadeará con un retardo de 200 ms.

## Materiales Necesarios
- 1 Arduino (Ejemplo: Arduino Uno)
- 1 LED
- 1 Resistencia de 220 ohmios (para el LED)
- 1 Botón pulsador
- 1 Resistencia de 10k ohmios (pull-down para el botón)
- Cables de conexión

## Conexiones
- **LED:**
  - Anodo (+) conectado al pin **13** de Arduino (con una resistencia de 220 ohmios en serie).
  - Cátodo (-) conectado a **GND**.
- **Botón:**
  - Un terminal conectado al pin **7** de Arduino.
  - El otro terminal conectado a **GND**.
  - Se recomienda una resistencia de **10k ohmios** como pull-down entre el pin 7 y GND.

## Código
```cpp
const int LED = 13;  // Pin del LED
const int BOTON = 7; // Pin del Botón
int val;
LED_Boton.ino
void setup() {
    pinMode(LED, OUTPUT);  // Configura el LED como salida
    pinMode(BOTON, INPUT); // Configura el botón como entrada
}

void loop() {
    val = digitalRead(BOTON); // Lee el estado del botón
    if (val == HIGH) { // Si el botón está presionado
        digitalWrite(LED, HIGH); // Enciende el LED
        delay(200); // Espera 200ms
        digitalWrite(LED, LOW); // Apaga el LED
        delay(200); // Espera 200ms
    } else {
        digitalWrite(LED, LOW); // Asegura que el LED esté apagado si no se presiona el botón
    }
}
```

## Explicación del Código
1. Se definen los pines del **LED** y el **botón**.
2. En la función `setup()`, se configura el LED como salida y el botón como entrada.
3. En `loop()`, se lee el estado del botón:
   - Si está presionado (**HIGH**), el LED parpadea con un retardo de 200 ms.
   - Si no está presionado, el LED permanece apagado.

## Notas
- Si el botón no funciona correctamente, verifica la resistencia pull-down (10kΩ).
- Puedes cambiar los retardos (`delay(200)`) para modificar la velocidad del parpadeo.

![imagen](https://github.com/user-attachments/assets/32f6659b-8a97-44c7-b05a-d5b37e68dd5e)

![imagen](https://github.com/user-attachments/assets/2645c522-7030-4c13-a4eb-e7ee1249eb24)

