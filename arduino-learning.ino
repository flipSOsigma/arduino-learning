int jam= 0;
int menit= 0;
int detik= 0;


void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  Serial.print("Hello World");
}

void loop() {
  if ((menit % 5) == 0){
    digitalWrite(2, HIGH);
  }else{
    digitalWrite(2, LOW);
  }

  Serial.print(jam);
  Serial.print(":");
  Serial.print(menit);
  Serial.print(":");
  Serial.println(detik);

  detik++;
  delay(10);
  
  if (detik == 60){
    menit++;
    detik = 0;
  }
  if (menit == 60){
    jam++;
    menit = 0;
  }
}
