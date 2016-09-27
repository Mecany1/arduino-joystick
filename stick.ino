int axis_x_pin = 0;
int axis_y_pin = 1;

int switch_pin = 2;

void setup() {
  Serial.begin(9600);
  
  pinMode(switch_pin, INPUT);
}

 void loop() {
  int position_x = analogRead(axis_x_pin);   
  int position_y = analogRead(axis_y_pin);   
  int switch_status = digitalRead(switch_pin);   
  
  Serial.print("Position x: ");
  Serial.println(position_x);
  Serial.print("Posiiton y: ");
  Serial.println(position_y);
  Serial.print("Switch: ");
  Serial.println(switch_status);
  
  delay(400);
 }
