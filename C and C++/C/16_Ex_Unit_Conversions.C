// Unit COnversions like:
// Km to Miles
// Meter to Centimeter
// Centimeter to Inches
// Pound to Kilograms

#include <stdio.h>

int main (){
    int input;
    float mes;
    float kmToMiles = 0.621371;
    float inchesToFoot = 0.0833333;
    float poundTOKgs = 0.453592;
    float cmsToInches = 0.393701;
    float inchesTOMeter = 0.0254;
    float meterTOCms = 100;

    while (1){
        
        printf("Enter your input: \n");
        printf("1. Km To Miles\n");
        printf("2. Inches To Foot\n");
        printf("3. Pound TO Kgs\n");
        printf("4. Cms To Inches\n");
        printf("5. Inches TO Meter\n");
        printf("6. Meter TO Cms\n");
        printf("7. Exit\n");
        scanf("%d", &input);

        switch (input)
        {
            case 1:
                printf("\nEnter your mesurement: ");
                scanf("%f", &mes);
                printf("\n%.3f Km is equal to %.3f Miles...", mes, mes*kmToMiles);
                break;
            
            case 2:
                printf("\nEnter your mesurement: ");
                scanf("%f", &mes);
                printf("\n%.3f Inches is equal to %.3f Foot...", mes, mes*inchesToFoot);
                break;
            
            case 3:
                printf("\nEnter your mesurement: ");
                scanf("%f", &mes);
                printf("\n%.3f Pounds is equal to %.3f Kgs...", mes, mes*poundTOKgs);
                break;
            
            case 4:
                printf("\nEnter your mesurement: ");
                scanf("%f", &mes);
                printf("\n%.3f Cms is equal to %.3f Inches...", mes, mes*cmsToInches);
                break;
            
            case 5:
                printf("\nEnter your mesurement: ");
                scanf("%f", &mes);
                printf("\n%.3f Inches is equal to %.3f Meter...", mes, mes*inchesTOMeter);
                break;
            
            case 6:
                printf("\nEnter your mesurement: ");
                scanf("%f", &mes);
                printf("\n%.3f Meter is equal to %.3f Cms...", mes, mes*meterTOCms);
                break;
            
            case 7:
                goto end;
            
            default:
                printf("\nInvalid input... Enter Again.....\n");
                break;
        }
    }
    
    end:

    return 0;
}