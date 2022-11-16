#include <stdio.h>
 
 
int main(){
        
    int midterm, final, but=0;
    float result;
    
    printf("Enter Mid Term notee: ");
    scanf("%d", &midterm);
    
    printf("Enter Final notee: ");
    scanf("%d", &final);
    
    result = ( midterm * 0.4 ) + ( final * 0.6 );
 
    if ( result < 60 ){  
    
        printf("Enter Büt notee: ");
        scanf("%d", &but);    
    }
 
    if ( but == 0 )  
        result = ( midterm * 0.4 ) + ( final * 0.6 );
        
    else
        result = ( midterm * 0.4 ) + ( but * 0.6 );
        
        
    if ( result < 40 )
        printf("Average: %.0f\nnotee: FF\ncoefficient: 0.00", result);
        
    else if ( result < 50 )
        printf("Average: %.0f\nnotee: FD\ncoefficient: 0.50", result);
        
    else if ( result < 55 )
        printf("Average: %.0f\nnotee: DD\ncoefficient: 1.00", result);
        
    else if ( result < 60 )
        printf("Ortalama: %.0f\nnote: DC\ncoefficient: 1.50", result);
        
    else if ( result < 70 )
        printf("Ortalama: %.0f\nnote: CC\ncoefficient: 2.00", result);
        
    else if ( result < 75 )
        printf("Ortalama: %.0f\nnote: CB\ncoefficient: 2.50", result);
        
    else if ( result < 85 )
        printf("Ortalama: %.0f\nnote: BB\ncoefficient: 3.00", result);
        
    else if ( result < 90 )
        printf("Ortalama: %.0f\nnote: BA\ncoefficient: 3.50", result);
        
    else 
        printf("Ortalama: %.0f\nnote: AA\ncoefficient: 4.00", result);    
    
    return 0;    
}
