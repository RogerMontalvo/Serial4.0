/************************************************************************
**                                                                     **
**                              TÍTOL:                                 ** 
**              Posar un nom representatiu del programa                **
**                                                                     **
** NOM: Roger Montalvo Burriel                        DATA: 22/02/17   **
************************************************************************/
//**************************** INCLUDE **********************************


//*************************** VARIABLES *********************************

float KgCO2_m2 = -10 ;
int Nivell ;

//**************************** SETUP ************************************


void setup()         // CONDICIONS INICIALS
{                    

  Serial.begin(9600);     // Set up Serial library at 9600 bps

  if (( 0 < KgCO2_m2 )&& (KgCO2_m2 < 3.5))
  {
Nivell = 0 ;
  }
  else if ((3.5 <= KgCO2_m2) && (KgCO2_m2 < 6.5))  
  {
Nivell= 1 ;
  }
  else if ((6.5 <= KgCO2_m2) && (KgCO2_m2 < 11.1))
  {
Nivell= 2 ;
  }
  else if ((11.1 <= KgCO2_m2) && (KgCO2_m2 < 17.7))
  {
Nivell= 3 ;
  }
  else if ((17.7 <= KgCO2_m2) && (KgCO2_m2 < 38.2))
  {
Nivell= 4 ;
  }
  else if ((38.2 <= KgCO2_m2) && (KgCO2_m2 < 43.2))
  {
Nivell= 5 ;
  }
  else if (43.2 <= KgCO2_m2)
  {
Nivell= 6 ;
  }  
  else 
  {
Nivell= 7 ;
  }

///////
  
  Serial.print ("El nivell de contaminacio es:") ;
  switch (Nivell)
{  
  case 0:
  
  Serial.println (" A") ;
  break ;
  
  
  case 1:
  {
  Serial.println (" B") ;
  break;
  }
  
  case 2:
  {
  Serial.println (" C") ;
  break;
  }
  
  case 3:
  {
  Serial.println (" D") ;
  break; 
  }
  
  case 4:
  Serial.println (" E") ;
  break;
  
  case 5:
  {
  Serial.println (" F") ;
  break;
  }
  
  case 6:
  {
  Serial.println (" G") ;
  break;
  }

  default:    // Cas impossible (Valor negatiu KGCO2_M2)
  {
  Serial.println (" Sensor Avariat ");
  break;
  }
}
}



 
//**************************** LOOP *************************************

void loop()            //BUCLE
{               

}
//*************************** FUNCIONS **********************************
  

