/************************************************************************
**                                                                     **
**                              TÍTOL:                                 ** 
**              Posar un nom representatiu del programa                **
**                                                                     **
** NOM: Roger Montalvo Burriel                        DATA: 22/02/17   **
************************************************************************/
//**************************** INCLUDE **********************************


//*************************** VARIABLES *********************************

int tempAigua = 101;

//**************************** SETUP ************************************


void setup() {                            // CONDICIONS INICIALS


  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua > 100)
{
    Serial.print("Aigua supera els 100C, esta bullint!");
}
  else if ( tempAigua < 100 )
{
  Serial.print("Aigua encara no bull");
}
} 




//**************************** LOOP *************************************

void loop() { //BUCLE

}
//*************************** FUNCIONS **********************************
