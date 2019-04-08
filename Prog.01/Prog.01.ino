/**********************************************************************************
**                                                                               **
**                                  TÍTOL: VELOCITAT DE 8 LEDS        Prog.01    **
**                                                                               **
**   NOM: Dennis Garcia                                       DATA: 08/04/2019   **
**********************************************************************************/

//********** Includes *************************************************************
//********** Variables ************************************************************
const int led0 = 5;     
const int led1 = 6;          
const int led2 = 7;         
const int led3 = 8;      
const int led4 = 9;      
const int led5 = 10;    
const int led6 = 11;         
const int led7 = 12;         
const int pot0 = A0;         

int velocitat = 40;          
int valPot0;                 

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);     // definir el pin 12 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);   
  velocitat = valPot0;    
  
  digitalWrite(led0, HIGH);    // posar a 5V el pin 5
  digitalWrite(led1, LOW);     // posar a 0V el pin 6
  digitalWrite(led2, HIGH);    // posar a 5V el pin 7
  digitalWrite(led3, LOW);     // posar a 0V el pin 8
  digitalWrite(led4, HIGH);    // posar a 5V el pin 9
  digitalWrite(led5, LOW);     // posar a 0V el pin 10
  digitalWrite(led6, HIGH);    // posar a 5V el pin 11
  digitalWrite(led7, LOW);     // posar a 0V el pin 12
  
  delay(velocitat);
  
  digitalWrite(led0, LOW);     // posar a 0V el pin 5
  digitalWrite(led1, HIGH);    // posar a 5V el pin 6
  digitalWrite(led2, LOW);     // posar a 0V el pin 7
  digitalWrite(led3, HIGH);    // posar a 5V el pin 8
  digitalWrite(led4, LOW);     // posar a 0V el pin 9
  digitalWrite(led5, HIGH);    // posar a 5V el pin 10
  digitalWrite(led6, LOW);     // posar a 0V el pin 11
  digitalWrite(led7, HIGH);    // posar a 5V el pin 12
  
  delay(velocitat);     
