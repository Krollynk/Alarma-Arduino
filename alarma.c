#define trig 7 //emisor de la señal
#define echo 6 // receptor del eco del pulso de la señal
#define buzzer 12 // zumbador

void setup(){
    //solo se activa una vez al iniciarse el programa
    //Definimos las entradas y las salidas.

    pinMode(trig, OUTPUT); //salida
    pinMode(echo, INPUT); //entrada
    pinMode(buzzer, OUTPUT); //salida
}

void loop(){
    //bucle
    long duration, distance; //establecemos la duracion y la distancia como variables de tipo externas

    digitalWrite(trig, LOW);

    delay(2);

    digitalWrite(trig, HIGH);

    delay(5);

    digitalWrite(trig, LOW);

    duration - pulseIn(echo, HIGH); //Obtiene la distancia de ida y vuelta del pulso
    distance - (duration/2)*0.0343; //Dividimos la distancia total en 2, para obtener solo la distancia de ida.
    
    if(distance < 100) //si la distancia es menor a 1 metro
    {
        tone(buzzer, 1000); //zumbador suene con una frecuencia de 1000Hz
        delay(5000); //delay 5 segundos
    }
    else{
        noTone(buzzer); //No suena
    }
}