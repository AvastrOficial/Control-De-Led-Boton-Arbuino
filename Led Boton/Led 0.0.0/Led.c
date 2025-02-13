const int LED = 13; 
const int BOTON = 7; 
int val; 
void setup() { 
pinMode(LED, OUTPUT); 
pinMode(BOTON, INPUT); 
} 
void loop() { 
val = digitalRead(BOTON); // Lee el estado del botón 
if (val == HIGH) { // Si el botón está presionado 
digitalWrite(LED, HIGH); // Enciende el LED 
delay(200); // Espera 200ms 
digitalWrite(LED, LOW); // Apaga el LED 
delay(200); // Espera 200ms 
} else { 
digitalWrite(LED, LOW); // Asegúrate de que el LED esté apagado si no se presiona el botón 
} 
}
