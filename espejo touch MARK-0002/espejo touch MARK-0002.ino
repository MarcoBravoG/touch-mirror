// Puertos
const int botonSumaPin = 2;    //boton que sumara 5 al ciclo de trabajo
//const int botonRestaPin = 6;   //boton que restara 5 al ciclo de trabajo
const int ledPin = 3;             //Puerto con salida PWM

// Variables
int botonSumaValue;           //Variable para el boton de suma
//int botonRestaValue;          //Variable para el boton de resta
int cicloTrabajo;             //Variable para el ciclo de trabajo del led
int i;
//inicialización
void setup(){
  Serial.begin (9600);
  pinMode(ledPin, OUTPUT);
  pinMode(botonSumaPin, INPUT);



  for  (i=1;i<255; i++){
  
  analogWrite(ledPin,i);
  delay(10);
    }
  for  (i=255;i>0; i--){
  analogWrite(ledPin,i);
  delay(10);
    }

      for  (i=1;i<255; i++){
  
  analogWrite(ledPin,i);
  delay(10);
    }
      for  (i=255;i>0; i--){
  analogWrite(ledPin,i);
  delay(10);
    }

      for  (i=1;i<255; i++){
  
  analogWrite(ledPin,i);
  delay(10);
    }
      for  (i=255;i>0; i--){
  analogWrite(ledPin,i);
  delay(10);
    }
}

void loop (){
  botonSumaValue= digitalRead(botonSumaPin);
  
  if (botonSumaValue == HIGH && cicloTrabajo <=250){
    cicloTrabajo +=80;
    Serial.println(cicloTrabajo);

     if (cicloTrabajo >=240){				// consulta si BRILLO es mayor o igual a 255
      cicloTrabajo = 0;				      // si es el caso asigna a BRILLO 255
      //botonSumaValue =0;
    }
  }
  analogWrite(ledPin, cicloTrabajo);
  delay(300);
}


