#include <stdio.h>

// Function to calculate subtotal (demonstrates pass by value)
float calculateSubtotal(float price, int quantity)
{
    return price * quantity; // subtotal returned (pass by value)
}

// Function to compute GST (5–10%)
float calculateGST(float subtotal, float gstRate)
{
    return (subtotal * gstRate) / 100;
}

int main()
{
    int n, i;
    float gstRate;

    // Get number of items
    printf("Enter number of items: ");
    scanf("%d", &n);

    char itemNames[n][50];
    float prices[n];
    int quantities[n];

    // Input item details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter name of item %d: ", i + 1);
        scanf("%s", itemNames[i]);
        printf("Enter price of %s: ", itemNames[i]);
        scanf("%f", &prices[i]);
        printf("Enter quantity of %s: ", itemNames[i]);
        scanf("%d", &quantities[i]);
    }

    // Ask for GST rate
    printf("\nEnter GST rate (5–10): ");
    scanf("%f", &gstRate);

    float subtotal = 0.0, gst, total;

    printf("\n----- SMART BILL -----\n");
    printf("%-15s %-10s %-10s %-10s\n", "Item", "Price", "Qty", "Subtotal");

    // Compute subtotal for each item
    for (i = 0; i < n; i++)
    {
        float itemSubtotal = calculateSubtotal(prices[i], quantities[i]); // pass by value
        printf("%-15s %-10.2f %-10d %-10.2f\n", itemNames[i], prices[i], quantities[i], itemSubtotal);
        subtotal += itemSubtotal;
    }

    gst = calculateGST(subtotal, gstRate);
    total = subtotal + gst;

    printf("\nSubtotal: %.2f", subtotal);
    printf("\nGST (%.1f%%): %.2f", gstRate, gst);
    printf("\nTotal Amount: %.2f", total);
    printf("\n----------------------\n");

    return 0;
}
