#include<stdio.h>

void print_menu();

int main(){
    int choice;
    double first,second,result;
    while(1){
        print_menu();
        scanf("%d",&choice);
        if(choice==7){
            break;
        }
        printf("Enter first number:");
        scanf("%lf",&first);
        printf("Enter second number:");
        scanf("%lf",&second);

        switch(choice){
            case 1://add
            result=first+second;
            break;

            case 2://sub
            result=first-second;
            break;

            case 3://multiply
            result=first*second;
            break;

            case 4://divide
            if(second!=0){
                result=first/second;
            }
            else{
                printf("Error: Division by zero is not allowed.\n");
                continue; // Skip the rest of the loop and prompt again
            }
            break;

            case 5://modulus
                if((int)second!=0){
                    result=(int)first%(int)second;
                }
                else{
                    printf("Error: Modulus by zero is not allowed.\n");
                    continue; // Skip the rest of the loop and prompt again
                }
            break;

            case 6://power
            result=1;
            for(int i=0;i<(int)second;i++){
                result*=first;
            }
            break;

            default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
        printf("Result: %lf\n",result);
    }

}
void print_menu(){
    printf("Welcome to the world of simple calculator\n");
    printf("Choose one of the following options:\n");
    printf("\n 1. Add");
    printf("\n 2. SUbtract");
    printf("\n 3. Multiply");
    printf("\n 4. Divide");
    printf("\n 5. Modulus");
    printf("\n 6. Power");
    printf("\n 7. Exit");
    printf("\n Now ,enter your choice:");
}