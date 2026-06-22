//Fire Detection System Project
//Ali Arda Kocabörek | Akdeniz EEE

#include "DHT.h"
#include <Arduino.h>

#define KIRMIZI_LED 11
#define BUZZER 12
#define SICAKLIK_SENSOR 4
#define DHTTYPE DHT11 //Sensor Modeli
#define GAS_PIN A0

DHT dht(SICAKLIK_SENSOR, DHTTYPE);

void durumDegerlendir(int,float);



int main(){

  init();
  dht.begin();
  Serial.begin(9600);

  pinMode(KIRMIZI_LED,OUTPUT);
  pinMode(BUZZER,OUTPUT);


  do{

  int gaz = analogRead(GAS_PIN);
  float sicaklik = dht.readTemperature();

  Serial.print("Sicaklik: ");
  Serial.println(sicaklik);

  Serial.print("Gaz Yogunlugu: ");
  Serial.println(gaz);
  Serial.println();

  durumDegerlendir(gaz,sicaklik);

  delay(2000);
    
  }while(1);

}


void durumDegerlendir(int gaz,float sicaklik){

  if(sicaklik>33 && gaz>50){ //Buradaki 33 ve 50 esik degerleri oda sartlarinda sistemin calismasi icin bu degerleri ben olctum

    digitalWrite(BUZZER,HIGH);
    digitalWrite(KIRMIZI_LED,HIGH);

    Serial.println("!!!YANGIN ALARM!!!");
  }

  else if(sicaklik<=33 && gaz>=50){ //Sadece yuksek gaz yogunlugu algilanirsa led yanacak

    digitalWrite(KIRMIZI_LED,HIGH);
    Serial.println("YUKSEK GAZ YOGUNLUGU");

  } 

  else{
    digitalWrite(KIRMIZI_LED,LOW);
    digitalWrite(BUZZER,LOW);
  }


}




