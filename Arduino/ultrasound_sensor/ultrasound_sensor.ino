long time;
int trig = 4;   // triger
int echo = 2;      // echo
double distance;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  Serial.begin(9600);
 
}


void loop()
{
  // lanzamos un pequeño pulso para activar el sensor
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  // medimos el pulso de respuesta
  time = (pulseIn(echo, HIGH)/2); // dividido por 2 por que es el 
                                       // tiempo que el sonido tarda
                                       // en ir y en volver
  // ahora calcularemos la distancia en cm
  // sabiendo que el espacio es igual a la velocidad por el tiempo
  // y que la velocidad del sonido es de 343m/s y que el tiempo lo 
  // tenemos en millonesimas de segundo
  distance = time * 0.0343;
  
  // y lo mostramos por el puerto serie una vez por segundo
  Serial.println(distance);
  delay(1000);
}
