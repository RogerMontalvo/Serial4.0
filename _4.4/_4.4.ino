/************************************************************************
**                                                                     **
**                              TÍTOL:                                 ** 
**              Posar un nom representatiu del programa                **
**                                                                     **
** NOM: Roger Montalvo Burriel                        DATA: 22/02/17   **
************************************************************************/
//**************************** INCLUDE **********************************


//*************************** VARIABLES *********************************

float KgCO2_m2 = 1.3 ;
int Nivell ;

//**************************** SETUP ************************************


void setup() {                            // CONDICIONS INICIALS


  if ( 2 < KgCO2_m2  <3.5 ){
Nivell = 0 ;
  }
  else if ( 3.5 <= KgCO2_m2  < 6.5){
Nivell = 1 ;
}
  else if ( 6.5 <= KgCO2_m2  < 11.1){
Nivell = 2 ;
}
  else if ( 11.1 <= KgCO2_m2  < 17.7){
Nivell = 3 ;
  }
  else if ( 17.7 <= KgCO2_m2  < 38.2){
Nivell = 4 ;
  }
  else if ( 38.2 <= KgCO2_m2  < 43.2){
Nivell = 5 ;
  }
  else if ( 43.2 <= KgCO2_m2){
Nivell = 6 ;
  }  

  Serial.begin(9600);     // Set up Serial library at 9600 bps

  switch ( Nivell )
{  
  case 1:
  Serial.print ("A") ;
  break;

  case 2:
  Serial.print ("B") ;
  break;
  
  case 3:
  Serial.print ("C") ;
  break;
  
  case 4:
  Serial.print ("D") ;
  break;
  
  case 5:
  Serial.print ("E") ;
  break;
  
  case 6:
  Serial.print ("F") ;
  break;
  
  case7:
  Serial.print ("G") ;
  break;
}
 

      
  
 

  





  






     

     

}





//**************************** LOOP *************************************

void loop() { //BUCLE

}
//*************************** FUNCIONS **********************************
