/*******************************************************************************
 * File:   display.c               Rotina do display // Routine
 * Author: Nivaldo
 *
 * Created on 26 de Maio de 2020, 20:48
 ******************************************************************************/


 char display7(unsigned char numb)
 {
    if(numb== 0)
         return 0b00111111;   // 0
    else if(numb== 1)
         return 0b00000110;   // 1
    else if(numb== 2)
         return 0b01011011;   // 2
    else if(numb== 3)
         return 0b01001111;   // 3
    else if(numb== 4)    
       return 0b01100110;     // 4
    else if(numb== 5)    
       return 0b01101101;     // 5
    else if(numb== 6)    
       return 0b01111100;     // 6
    else if(numb== 7)    
       return 0b00000111;     // 7
    else if(numb== 8)    
       return 0b01111111;     // 8
    else if(numb== 9)    
       return 0b01100111;     // 9
    else
       return 0b01111001;    // E  Erro para numero diferente de                             0 a 9
                             // E return Error to different between 0 to 9
 }
//******************************************************************************