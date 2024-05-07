#include <Keypad.h>

char l;// variable para concatenar
float imc; //indice de masa corporal
char a; //altura en cm
char p; //peso en kg
char sb; //sexo biologico
int pinVerde = 10; //pin donde esta conectado el led verde
int pinRojo = 13; //pin donde esta conectao el led rojo


const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
 {'1','2','3','A'},
 {'4','5','6','B'},
 {'7','8','9','C'},
 {'0','E','F','D'}
};

void setup() {
  // put your setup code here, to run once:
 pinMode (pinRojo, OUTPUT) ; 
 pinMode (pinVerde, OUTPUT) ; 
 Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("ingrese peso en kg y C para finalizar");
 delay(3000);
 while(Serial.available()!="C")
 {
   char (l) =Serial.read();
    p.Concat(l);
    p.toFloat();}


 Serial.println("ingrese altura en cm");
 delay(3000);
  while(Serial.available()!="C")
 {   char (l) =Serial.read();
    a.concat(l);
    a.toInt();} 
   }


 Serial.println("ingrese A para f o B para m");
 delay(3000);
 //while(Serial.available()!=0)
 //{
    char(sb) = Serial.read();


 float(imc) = float(p)/float(a)*float(a);

 while (char (sb)=="A")
 {
   if(float(imc)>18 and imc<24){
     Serial.println("imc saludable");
     delay(5000);
     analogWrite(pinVerde, 255);
     delay(5000);
      }
   else{
     Serial.println("imc no saludable");
     delay(5000);
     analogWrite(pinRojo, 255);
     delay(5000);
  }
}
 while(char(sb)="B"){
    if(imc>20 and imc<25){
      Serial.println("imc saludable");
      delay(5000);
      analogWrite(pinVerde, 255);
      delay(5000);
     }
   else{
     Serial.println("imc no saludable");
     delay(5000);
     analogWrite(pinRojo, 255);
     delay(5000);
    }

  }
 analogWrite(pinRojo, 0);

 analogWrite(pinVerde, 0);


}
