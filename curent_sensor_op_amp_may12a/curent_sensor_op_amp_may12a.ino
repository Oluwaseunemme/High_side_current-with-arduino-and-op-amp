#define in_amp 0
float map_it(float val,float in_min,float in_max,float out_min,float out_max){
   float result=(val-in_min)*(out_max-out_min)/(in_max-in_min)+out_min;
   return result;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   float in_new=map_it(analogRead(in_amp), 0, 1023, 0, 5);
   Serial.println("Current:"+String(in_new)+"amp");
   delay(300);
}
