// Create Structure of Drivers;
// Get lincence number;
// Get name;
// Get Route;
// Get kms;
#include <stdio.h>

// Built struct of driver;
struct Driver{
    char name[20];
    char dlno[15];
    char rt[40];
    int kms;
};

int main (){
    struct Driver dl1, dl2, dl3;

    printf("\nEnter the Driver Details: ");
    printf("\nEnter the First Driver Name: ");
    scanf("%s", dl1.name);
    printf("\nEnter the First Driver Lincence: ");
    scanf("%s", dl1.dlno);
    printf("\nEnter the First Driver Route: ");
    scanf("%s", dl1.rt);
    printf("\nEnter the First Driver Kms: ");
    scanf("%d", &dl1.kms);

    printf("\n\nEnter the Second Driver Name: ");
    scanf("%s", dl2.name);
    printf("\nEnter the Second Driver Lincence: ");
    scanf("%s", dl2.dlno);
    printf("\nEnter the Second Driver Route: ");
    scanf("%s", dl2.rt);
    printf("\nEnter the Second Driver Kms: ");
    scanf("%d", &dl2.kms);

    printf("\n\nEnter the Third Driver Name: ");
    scanf("%s", dl3.name);
    printf("\nEnter the Third Driver Lincence: ");
    scanf("%s", dl3.dlno);
    printf("\nEnter the Third Driver Route: ");
    scanf("%s", dl3.rt);
    printf("\nEnter the Third Driver Kms: ");
    scanf("%d", &dl3.kms);

    printf("\n\n******  Print the Driver 1 Details ******");
    printf("\nName      : %s", dl1.name);
    printf("\nLincence  : %s", dl1.dlno);
    printf("\nRoute     : %s", dl1.rt);
    printf("\nkms       : %d", dl1.kms);

    printf("\n\n******  Print the Driver 2 Details ******");
    printf("\nName      : %s", dl2.name);
    printf("\nLincence  : %s", dl2.dlno);
    printf("\nRoute     : %s", dl2.rt);
    printf("\nkms       : %d", dl2.kms);

    printf("\n\n******  Print the Driver 3 Details ******");
    printf("\nName      : %s", dl3.name);
    printf("\nLincence  : %s", dl3.dlno);
    printf("\nRoute     : %s", dl3.rt);
    printf("\nkms       : %d", dl3.kms);

    return 0;
}