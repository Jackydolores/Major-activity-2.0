#include<stdio.h>

int main()
{
    int a[3][2];
    int i,j,n,N;
    int ID, P;
    
    for(i=0;i<3; i++){
    printf("\nEnter ID Number:");
    scanf("%d",&n);
      for(j=1; j<2; j++ ){
      
    printf("Enter PIN:");
    scanf("%d",&N);      
    
               
                       if(n==1010){     
                          if(N==1234){
                        
                          printf("\nYou have successfully logged in");
                          printf("\nID#:%d \n",n);
                           }
                        }else if(n==0011){     
                               if(N==2314){
                           
                          printf("\nYou have successfully logged in");
                          printf("\nID#:%d \n",n);
                            }
                       }else  if(n==1011){     
                                if(N==5678){
                        
                          printf("\nYou have successfully logged in");
                          printf("\nID#:%d\n",n);
                             }
                      }else if (n!=ID){
                          printf("\nInvalid ID/PIN\n");
                          } else if (N!=P){
                          printf("\nInvalid ID/PIN\n");
                          }
                   
                 
         } 
    }
    
    
    
  
    
    
    return 0;
} 