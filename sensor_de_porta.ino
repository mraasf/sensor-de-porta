// andriely frança
// sensor de porta com buzzer e sensor ultrasom
#define trig 6
#define echo 7
#define buz 9





void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //Habilita Comunicação Serial a uma taxa de 9600 bauds.
pinMode(buz, OUTPUT);
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  long duracao, distancia;
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  duracao = pulseIn(echo, HIGH);
  distancia = (duracao/2) / 29.1;
  Serial.print(distancia);
  Serial.println(" centimetros ");
  
    if( distancia < 80)
  {

    
    digitalWrite(buz, HIGH);
    delay(500);
    digitalWrite(buz, LOW);

  }
  
  else
  {
   digitalWrite(buz, LOW);
    
  }

  delay(500);
    


}