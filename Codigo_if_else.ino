int LedVerde=13;
int PushVerde=12;
int LedAmarelo=8;
int PushAmarelo=7;
int LedVermelho=4;
int PushVermelho=2;

void setup() {
 pinMode (LedVerde,OUTPUT);
 pinMode (PushVerde,INPUT);
 pinMode (LedAmarelo,OUTPUT);
 pinMode (PushAmarelo,INPUT);
 Serial.begin (9600);
}

void loop() {
 if (digitalRead (PushVerde)==HIGH){  //LED Verde
  digitalWrite (LedVerde,HIGH);
  }
 else
  digitalWrite (LedVerde,LOW);
  
  if (digitalRead (PushAmarelo)==HIGH){   //LED Amarelo
  digitalWrite (LedAmarelo,HIGH);
  }
 else
  digitalWrite (LedAmarelo,LOW);
  
 if (digitalRead (PushVermelho)==HIGH){   //LED Vermelho
  digitalWrite (LedVermelho,HIGH);
  }
 else
  digitalWrite (LedVermelho,LOW);
}
