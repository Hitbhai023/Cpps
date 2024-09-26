#include <stdio.h>



// Function to find the largest number in an array
int find_largest(int arr[], int n)
 {


    int largest = arr[0];

  // Assume the first element is the largest


    for (int i = 1; i < n; i++)
 {

        if (arr[i] > largest)
 {

            largest = arr[i];

        }

    }

    return largest;

}



// Main function to read input and call the find_largest function


int main()
 {

    int n;


    
    // Read the number of elements from the user


    printf("Enter the number of elements in the list: ");

    scanf("%d", &n);


    
    int arr[n];

  // Declare an array of size n


    
    // Read the values into the array


    for (int i = 0; i < n; i++)
 {


        printf("Enter number %d: ", i + 1);

        scanf("%d", &arr[i]);

    }


    
    // Find and print the largest number


    int largest_number = find_largest(arr, n);


    printf("The largest number in the list is: %d\n", largest_number);


    
    return 0;

}