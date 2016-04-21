//publishjson.ino -- Spark Publishing Example

unsigned long lastTime = 0UL;
char publishString[64];

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  unsigned long now = millis();
  //Every 15 seconds publish uptime
  if(now-latTime > 150000L){
    lastTime = now;
    //now is in milliseconds
    unsigned nowSec = now/1000L;
    unsigned sec = nowSec%60;
    unsigned min = (nowSec%3600)/60;
    unsigned hours = (nowSec%86400)/3600;

    sprintf(publishString,"{\"Hours\":%u, \"Minutes\": %u, \"Seconds\": %u}", hours,min,sec);
    Spark.publish("Uptime",publishString);
  }
}
