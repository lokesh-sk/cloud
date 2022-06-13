#include <stdio.h>
#include <string.h>

struct cloudDetail
{
    char cloudType[100];
    float availabelStorage;
    float cloudPrice; /* data */
};

struct cloudDiscount
{
    char customerCategory[100];
    float discountPrice; /* data */
};

struct cloudBooking
{
    char customerName[100];
    float requiredStorage;
    float requiredBandWidth;
    float totalPrice;
    char type[100];
    char category[100]; /* data */
};

struct cloudDetail storage[100];
struct cloudDiscount discount[100];
struct cloudBooking booking[100];
struct cloudDiscount gold;

int storageIndex = 0;
int discountIndex = 0;
int bookingIndex = 0;

void addCloudStorage()
{
    printf("%s", "Enter the Storage details");
    printf("%s", "Enter cloud Type");
    scanf("%s", &storage[storageIndex].cloudType);
    printf("%s", "Enter the availabel storage");
    scanf("%f", &storage[storageIndex].availabelStorage);
    printf("%s", "Enter the availabel storage");
    scanf("%f", &storage[storageIndex].cloudPrice);
    storageIndex++;
    printf("%s", "\nAdded\n");
}

void modifyCloudStorage()
{
    int option = 0;
    if (storageIndex == 0)
    {
        printf("%s", "No Existing cloud details to modify");
    }
    else
    {
        printf("%s", "Enter cloud detail number to modify");
        for (int i = 0; i < storageIndex; i++)
        {
            printf("%s", "cloud detail 1");
            printf("%s", storage[i].cloudType);
            printf("%f", storage[i].cloudPrice);
            printf("%f", storage[i].availabelStorage);
        }
        scanf("%d", &option);
        if (option >= storageIndex)
        {
            printf("%s", "No clud detail available");
        }
        else
        {
            printf("%s", "Enter the new Storage details");
            printf("%s", "Enter cloud Type");
            scanf("%s", &storage[option].cloudType);
            printf("%s", "Enter the availabel storage");
            scanf("%f", &storage[option].availabelStorage);
            printf("%s", "Enter the availabel storage");
            scanf("%f", &storage[option].cloudPrice);
            printf("%s", "\nAdded\n");
        }
        printf("%s", "Details modified sucessfully");
    }
}

// add or modify
void chooseAddOrModifyCloudStorage()
{
    int option;
    printf("%s", "1. Add CloudStorage\n");
    printf("%s", "2. Modify CloudStorage\n");
    scanf("%d", &option);
    if (option == 1)
    {
        addCloudStorage();
    }
    else
    {
        modifyCloudStorage();
    }
}

void addCloudDiscount()
{
    printf("%s", "Enter the Cloud Discount details");
    printf("%s", "Enter Customer Category");
    scanf("%s", &discount[discountIndex].customerCategory);
    printf("%s", "Enter the discount price");
    scanf("%f", &discount[discountIndex].discountPrice);
    printf("%s", "\nAdded\n");
    discountIndex++;
}

void modifyCloudDiscount()
{
    int option = 0;
    if (discountIndex == 0)
    {
        printf("%s", "No Existing cloud Discount to modify");
    }
    else
    {
        printf("%s", "Enter cloud discount detail number to modify");
        for (int i = 0; i < discountIndex; i++)
        {
            printf("%s", "cloud discount detail ");
            printf("%d", i);
            printf("%s", discount[i].customerCategory);
            printf("%f", discount[i].discountPrice);
        }
        scanf("%d", &option);
        if (option >= discountIndex)
        {
            printf("%s", "No clud discount detail available");
        }
        else
        {
            printf("%s", "Enter the new discount details");
            printf("%s", "Enter cloud category Type");
            scanf("%s", &discount[option].customerCategory);
            printf("%s", "Enter the discount price");
            scanf("%f", &discount[option].discountPrice);

            printf("%s", "details modified\n");
        }
    }
}

void chooseAddOrModifyCloudDiscount()
{
    int option;
    printf("%s", "1. Add Cloud Discount\n");
    printf("%s", "2. Modify Cloud Discount\n");
    scanf("%d", &option);
    if (option == 1)
    {
        addCloudDiscount();
    }
    else
    {
        modifyCloudDiscount();
    }
}

void bookStorage()
{
    float requiredStorage;
    float requiredBandWidth;
    printf("%s", "Enter Detils");
    printf("%s", "Customer Name");
    scanf("%s", &booking[bookingIndex].customerName);
    printf("%s", "cloud Type");
    scanf("%s", &booking[bookingIndex].type);
    printf("%s", "Required Storage");
    scanf("%f", &booking[bookingIndex].requiredStorage);
    requiredStorage = booking[bookingIndex].requiredStorage
                          printf("%s", "Required BandWidth");
    scanf("%f", &booking[bookingIndex].requiredBandWidth);
    requiredBandWidth = booking[bookingIndex].requiredBandWidth;
}

void chooseOption()
{
    int option = 1;
    while (option != 4)
    {
        printf("%s", "Please enter an option from Below:\n");
        printf("%s", "1. AddModifyCloudStorage\n");
        printf("%s", "2. AddModifyCloudDiscount\n");
        printf("%s", "3. BookStorage\n");
        printf("%s", "4. Quit\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            chooseAddOrModifyCloudStorage();
            break;
        case 2:
            chooseAddOrModifyCloudDiscount();
            break;
        case 3:
            bookStorage();
            break;
        default:
            break;
        } /* code */
    }
    printf("%s", "program completed");
}

int main(int argc, char const *argv[])
{
    chooseOption();
    return 0;
}
