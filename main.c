#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 20

// Structure to store the amount of units each person has
typedef struct Person {
    char name[MAX_STR];
    long long int tokens;
    long long int bills;
    long long int totalUnits;
} Person;

// Prototypes
void calculateTotal(Person arr[], int n, long long int tokenUnit, long long int billUnit);
void sortTotal(Person arr[], int n);

int main() {
    int n;
    long long int tokenUnit, billUnit;
    
    // Read in the number of people and create an array of struct
    scanf("%d", &n);
    Person arr[n];
    
    // Read in the name and units for each person
    for (int i = 0; i < n; i++) {
        scanf("%s %lld %lld", arr[i].name, &arr[i].tokens, &arr[i].bills);
    }
    
    // Read in the exchange rate
    scanf("%lld %lld", &billUnit, &tokenUnit);
    
    // Call function to calculate each person's total units
    calculateTotal(arr, n, tokenUnit, billUnit);
    
    // Sort the total units in descending order and print out the names of the people
    printf("\n");
    sortTotal(arr, n);
    
    return 0;
}

// Function will calculate each person's total unit with the exchange currency and store it in the structure array
void calculateTotal(Person arr[], int n, long long int tokenUnit, long long int billUnit) {
    long long int total;
    
    // Goes through loop to calculate total for each person
    for (int i = 0; i < n; i++) {
        // Calculate total
        total = ((arr[i].tokens * tokenUnit) + (arr[i].bills * billUnit));
        // Store in struct  array
        arr[i].totalUnits = total;
    }
}

// Function will sort the total units in descending order and print out the sorted names of the people
void sortTotal(Person arr[], int n) {
    long long int sortedArr[n];
    long long int temp;
    
    // Copy the totalUnits stored in the struct into the empty array
    for (int i = 0; i < n; i++) {
        sortedArr[i] = arr[i].totalUnits;
    }
    
    // Sort the array of the total units in descending order
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (sortedArr[i] < sortedArr[j]) {
                temp = sortedArr[i];
                sortedArr[i] = sortedArr[j];
                sortedArr[j] = temp;
            }
        }
    }
    
    // Print out the names of the people based on the sorted total units
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Loops through the struct array until the total matches and prints out the name of the person
            if (sortedArr[i] == arr[j].totalUnits) {
                printf("%s\n", arr[j].name);
            }
        }
    }
}
