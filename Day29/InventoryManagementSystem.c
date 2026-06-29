#include <stdio.h>
#include <string.h>

#define MAX 100

struct Product
{
    int productID;
    char productName[50];
    float price;
    int quantity;
};

struct Product inventory[MAX];
int count = 0;

// Add Product
void addProduct()
{
    printf("\nEnter Product ID: ");
    scanf("%d", &inventory[count].productID);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", inventory[count].productName);

    printf("Enter Product Price: ");
    scanf("%f", &inventory[count].price);

    printf("Enter Product Quantity: ");
    scanf("%d", &inventory[count].quantity);

    count++;

    printf("\nProduct Added Successfully!\n");
}

// Display Products
void displayProducts()
{
    int i;

    if(count == 0)
    {
        printf("\nInventory is Empty!\n");
        return;
    }

    printf("\n========== PRODUCT LIST ==========\n");

    for(i = 0; i < count; i++)
    {
        printf("\nProduct %d\n", i + 1);
        printf("ID       : %d\n", inventory[i].productID);
        printf("Name     : %s\n", inventory[i].productName);
        printf("Price    : %.2f\n", inventory[i].price);
        printf("Quantity : %d\n", inventory[i].quantity);
    }
}

// Search Product
void searchProduct()
{
    int id, i;

    printf("\nEnter Product ID: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(inventory[i].productID == id)
        {
            printf("\nProduct Found!\n");
            printf("ID       : %d\n", inventory[i].productID);
            printf("Name     : %s\n", inventory[i].productName);
            printf("Price    : %.2f\n", inventory[i].price);
            printf("Quantity : %d\n", inventory[i].quantity);
            return;
        }
    }

    printf("\nProduct Not Found!\n");
}

// Update Quantity
void updateQuantity()
{
    int id, i, qty;

    printf("\nEnter Product ID: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(inventory[i].productID == id)
        {
            printf("Enter New Quantity: ");
            scanf("%d", &qty);

            inventory[i].quantity = qty;

            printf("\nQuantity Updated Successfully!\n");
            return;
        }
    }

    printf("\nProduct Not Found!\n");
}

// Delete Product
void deleteProduct()
{
    int id, i, j;

    printf("\nEnter Product ID: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(inventory[i].productID == id)
        {
            for(j = i; j < count - 1; j++)
            {
                inventory[j] = inventory[j + 1];
            }

            count--;

            printf("\nProduct Deleted Successfully!\n");
            return;
        }
    }

    printf("\nProduct Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n========== INVENTORY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                updateQuantity();
                break;

            case 5:
                deleteProduct();
                break;

            case 6:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}