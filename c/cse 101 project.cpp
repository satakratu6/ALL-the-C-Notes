#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define constants for vehicle categories
#define TWO_WHEELER 1
#define THREE_WHEELER 2
#define FOUR_WHEELER 3
#define HEAVY_VEHICLE 4

// Define structure for vehicle record
typedef struct {
    int category;
    char regNo[10];
    int fare;
    int returnFare;
} Vehicle;

// Define global variables for fare details
int twoWheelerFare = 20;
int threeWheelerFare = 30;
int fourWheelerFare = 40;
int heavyVehicleFare = 50;

// Declare functions for menu options
void displayFareDetails();
void updateFareDetails();
void recordTrafficDetails();
void deleteVehicleRecord();
void searchVehicleRecord();

// Declare global variables for traffic details
int twoWheelerCount = 0;
int threeWheelerCount = 0;
int fourWheelerCount = 0;
int heavyVehicleCount = 0;

// Declare array for vehicle records and index variable
Vehicle records[100];
int recordCount = 0;

int main() {
    int choice;
    do {
        // Display menu options
        printf("\nToll Plaza Record System\n");
        printf("------------------------\n");
        printf("1. Display fare details\n");
        printf("2. Update fare details\n");
        printf("3. Record traffic details\n");
        printf("4. Delete vehicle record\n");
        printf("5. Search vehicle record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        fflush(stdin); // Flush input buffer to avoid unexpected input errors
        
        switch (choice) {
            case 1:
                displayFareDetails();
                break;
            case 2:
                updateFareDetails();
                break;
            case 3:
                recordTrafficDetails();
                break;
            case 4:
                deleteVehicleRecord();
                break;
            case 5:
                searchVehicleRecord();
                break;
            case 6:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
                break;
        }
    } while (choice != 6);
    
    return 0;
}

void displayFareDetails() {
    printf("\nFare Details\n");
    printf("------------\n");
    printf("Two Wheeler: Rs. %d per single side, Rs. %d per return\n", twoWheelerFare, twoWheelerFare * 2);
    printf("Three Wheeler: Rs. %d per single side, Rs. %d per return\n", threeWheelerFare, threeWheelerFare * 2);
    printf("Four Wheeler: Rs. %d per single side, Rs. %d per return\n", fourWheelerFare, fourWheelerFare * 2);
    printf("Heavy Vehicle: Rs. %d per single side, Rs. %d per return\n", heavyVehicleFare, heavyVehicleFare * 2);
}

void updateFareDetails() {
    int category;
    int fare;
    printf("\nEnter category (1: Two Wheeler, 2: Three Wheeler, 3: Four Wheeler, 4: Heavy Vehicle): ");
    scanf("%d", &category);
    fflush(stdin);
    printf("Enter new fare for single side: ");
    scanf("%d", &fare);
    fflush(stdin);
switch (category) {
case TWO_WHEELER:
twoWheelerFare = fare;
break;
case THREE_WHEELER:
threeWheelerFare = fare;
break;
case FOUR_WHEELER:
fourWheelerFare = fare;
break;
case HEAVY_VEHICLE:
heavyVehicleFare = fare;
break;
default:
printf("Invalid category, please try again.\n");
return;
}
printf("Fare updated successfully.\n");
}
void recordTrafficDetails() {
int category;
printf("\nEnter category (1: Two Wheeler, 2: Three Wheeler, 3: Four Wheeler, 4: Heavy Vehicle): ");
scanf("%d", &category);
fflush(stdin);
switch (category) {
case TWO_WHEELER:
twoWheelerCount++;
break;
case THREE_WHEELER:
threeWheelerCount++;
break;
case FOUR_WHEELER:
fourWheelerCount++;
break;
case HEAVY_VEHICLE:
heavyVehicleCount++;
break;
default:
printf("Invalid category, please try again.\n");
return;
}
printf("Traffic details recorded successfully.\n");
}

void deleteVehicleRecord() {
char regNo[10];
printf("\nEnter vehicle registration number to delete: ");
scanf("%s", regNo);
fflush(stdin);
int found = 0;
for (int i = 0; i < recordCount; i++) {
if (strcmp(records[i].regNo, regNo) == 0) {
for (int j = i; j < recordCount - 1; j++) {
records[j] = records[j + 1];
}
recordCount--;
found = 1;
break;
}
}
if (found) {
printf("Vehicle record deleted successfully.\n");
} else {
printf("Vehicle record not found.\n");
}
}

void searchVehicleRecord() {
char regNo[10];
printf("\nEnter vehicle registration number to search: ");
scanf("%s", regNo);
fflush(stdin);
int found = 0;
for (int i = 0; i < recordCount; i++) {
if (strcmp(records[i].regNo, regNo) == 0) {
printf("Vehicle details:\n");
printf("Category: ");
switch (records[i].category) {
case TWO_WHEELER:
printf("Two Wheeler\n");
break;
case THREE_WHEELER:
printf("Three Wheeler\n");
break;
case FOUR_WHEELER:
printf("Four Wheeler\n");
break;
case HEAVY_VEHICLE:
printf("Heavy Vehicle\n");
break;
default:
printf("Unknown\n");
break;
}
printf("Registration number: %s\n", records[i].regNo);
printf("Fare: Rs. %d\n", records[i].fare);
printf("Return fare: Rs. %d\n", records[i].returnFare);
found = 1;
break;
}
}
if (!found) {
printf("Vehicle record not found.\n");
}
}

