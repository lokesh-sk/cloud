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
    printf("%s","\nAdded\n");
}

void modifyCloudStorage(){

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
        // modifyCloudStorage();
    }
}

void addCloudDiscount(){
    printf("%s", "Enter the Cloud Discount details");
    printf("%s", "Enter Customer Category");
    scanf("%s", &discount[discountIndex].customerCategory);
    printf("%s", "Enter the discount price");
    scanf("%f", &discount[discountIndex].discountPrice);
    printf("%s","\nAdded\n");
    discountIndex++;
}

void chooseAddOrModifyCloudDiscount(){
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

void findCategory(){
    
}

void bookStorage(){
    printf("%s","Enter Detils")
    printf("%s","Customer Name");
    scanf("%s",&booking[bookingIndex].customerName);
    printf("%s","cloud Type");
    scanf("%s",&booking[bookingIndex].type);
    printf("%s","Required Storage");
    scanf("%f",&booking[bookingIndex].requiredStorage);
    printf("%s","Required BandWidth");
    scanf("%f",&booking[bookingIndex].requiredBandWidth);
    
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
