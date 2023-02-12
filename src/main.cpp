#include <Arduino.h>

  /* GLOBALES */
  
  bool __btnA = false;
  bool __btnB = false;


  /* BOTONES */
  /* Botones fìsicos */
  const uint8_t _btnA            = 13;
  const uint8_t _btnB            = 12;

  /* Botones de sonidos */
  const uint8_t _btnRep_Aplausos = 14;  // 
  const uint8_t _btnRep_Inicio   = 27;  // Vamos a jugar
  const uint8_t _btnRep_Inter    = 26;  // 
  const uint8_t _btnRep_Buena    = 25;  // Respuesta Correcta
  const uint8_t _btnRep_Error    = 33;  // Respuesta erronea
                                        // Tiempo en el reloj 15 - 20

  // LEDs
  const uint8_t ledEncendido    = 15;
  const uint8_t ledBtnA         = 2;
  const uint8_t ledBtnB         = 4;

  /*GPIOS DISPONIBLES
    LADO A - 32,35,34
    LADO B - 23,19,18,5  
  */

  // Modulos
    // Carga de batería 
    // TFPlayer
    // Speaker
    // Display_14s
    // 

void setup() {
  attachInterrupt(digitalPinToInterrupt(_btnA),           btnA,           FALLING);
  attachInterrupt(digitalPinToInterrupt(_btnB),           btnB,           FALLING);
  attachInterrupt(digitalPinToInterrupt(_btnRep_Aplausos),btnRep_Aplausos,FALLING);
  attachInterrupt(digitalPinToInterrupt(_btnRep_Inicio),  btnRep_Inicio,  FALLING);
  attachInterrupt(digitalPinToInterrupt(_btnRep_Inter),   btnRep_Inter,   FALLING);
  attachInterrupt(digitalPinToInterrupt(_btnRep_Buena),   btnRep_Buena,   FALLING);
  attachInterrupt(digitalPinToInterrupt(_btnRep_Error),   btnRep_Error,   FALLING);
  attachInterrupt(digitalPinToInterrupt(_btnA),           btnA,           FALLING);

  
}

void loop() {

}

void btnA(){ 
  

  if (!__btnB)
  {
    __btnA = true;
    pinMode(ledBtnA,HIGH);
    float contador = millis();

    while (contador - millis() > 3000){
      /* code */
    }
    
       

  }
  
  /*
    - Si el botón B està activo, no pasa nada
    - Si el botòn B està inactivo
      * Cambia __btnA a Activo
      * Inicia contador
      * Enciende LED ledBtnA por 3 segundos
      * cambia __btnA a Inactivo
  */
};
void btnB(){};

void btnRep_Aplausos()  { /*Reproduce sonido*/};
void btnRep_Inicio()    { /*Reproduce sonido*/};
void btnRep_Inter()     { /*Reproduce sonido*/};
void btnRep_Buena()     { /*Reproduce sonido*/};
void btnRep_Error()     { /*Reproduce sonido*/};
