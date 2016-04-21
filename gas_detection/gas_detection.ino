#include "application.h"

unsigned int nextTime = 0;    // Next time to contact the server

const int gasOutput = A0;
// int DangerLight = D7;
float MidConcThreshold = 650;
// float HighConcThreshold =1000;
float CurrentValue=0;
int i=0;
void setup() {
    Serial.begin(9600);
    //  pinMode(DangerLight, OUTPUT);
}

void loop() {
    CurrentValue = analogRead(gasOutput);
    
Serial.println("Keep Calm. no danger !");
    // if(CurrentValue>=MidConcThreshold && CurrentValue<HighConcThreshold){
    //     Serial.println("Moderate gas concentrations found");
    //     for(i=0;i<5;i++){
    //         digitalWrite(DangerLight, HIGH);
    //         delay(300);
    //         digitalWrite(DangerLight, LOW);
    //         delay(300);
    //     }
    // }
    // if(CurrentValue>HighConcThreshold){
    //     Serial.println("High gas concentrations found !! get the fuck out of here immediately ");
    //     for(i=0;i<5;i++){
    //         digitalWrite(DangerLight, HIGH);
    //         delay(100);
    //         digitalWrite(DangerLight, LOW);
    //         delay(100);
    //     }
    // }
Spark.publish("Gas_Concentration",String(CurrentValue));
delay(1000);
}