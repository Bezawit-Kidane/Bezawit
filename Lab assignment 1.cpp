#include <iostream>
#include <string>
// 6. Define a tax rate constant using a preprocessor directive
#define tax_rate_by_preprocessor 0.15

 int main() {
    // 1. Display an introductory Message
    std::cout << "This program is used to analyzes product sales and inventory for a store." << std::endl; 
    std::cout << "Remember that C++ is a compiled language." << std::endl;;

    // 2. Declare variables for product details
    std::string ProductName;
    int ProductCategory;
    int IntialInventoryQuantity;
    float ProductpricePerUnit;
    int ItemsSold;

    // 3. Declare variables for computed value
    int NewInventory;
    float TotalSalesAmount;
    std::string InventoryStatus;

    // 4. Demonstrate different Intialization methods
    int forDirect = 100;    // direct initialization
    float forAssign;
    forAssign = 10.5f;  // Assignment after declaration
    int forList{20} ;    // List initialization

    // 5. Use type deduction to create extra helper variables
    auto CopyOfTotalSalesAmount = TotalSalesAmount;
    decltype(TotalSalesAmount) additionalInventory = 40;

    // 6. Define a tax rate constant using const keyword
    const int Tax_Rate_By_Const = 15;

    // 7. Input from the user
    std::cout << "Enter the product name by using single word \n" ;
    std::cin >> ProductName;
    
    
    std::cout << "Enter the product category from 1-5\n";
    std::cin >> ProductCategory;
    
    
    std::cout << "Enter the Initial Inventory Quantity\n";
    std::cin >> IntialInventoryQuantity;
    
    
    std::cout << "Enter the product price per unit\n" ;
    std::cin >> ProductpricePerUnit;
    
    
    std::cout << "Enter the number of items sold\n";
    std::cin >> ItemsSold;

    // 8. Perform calculations
    NewInventory = IntialInventoryQuantity - ItemsSold;
    TotalSalesAmount = ItemsSold * ProductpricePerUnit;
    
    // 9. Use a condition (Ternary) operator
    InventoryStatus = (NewInventory < 10) ? "Low Inventory" : "Sufficient Inventory";

    // 10. Implement flow control 
    // using an if-else statement to verify the product category within the valid range 1 to 5
    if (1 <= ProductCategory <= 5 ) 
{
    std::cout <<"The number entered for the Product Category is valid\n";
} else {
    std::cout <<"The number entered for the Product Category is invalid\n";

}
    // Using a switch statement to display a message based n the product category
     switch(ProductCategory) {
        case 1: 
        std::cout << "Category 1: Electronics"<< std::endl;
        break;
        case 2: 
        std::cout << "Category 2: Groceries"<< std::endl;
        break;
        case 3: 
        std::cout << "Category 3: Clothing"<< std::endl;
        break;
        case 4:
        std::cout << "Category 4: Stationery"<< std::endl;
        break;
        case 5:
        std::cout << "Category 5: Miscellaneous"<< std::endl;
        break; 
     }
     
     // 11. USe a for loop 
     for (int i = 1; i<= ItemsSold; i++)
     {
        std::cout << "Item" << i << ProductpricePerUnit << "birr"<< std::endl;
     }

     // 12. Output all information
     std::cout << "Tax Rate by Preprocessor=" << tax_rate_by_preprocessor << std::endl;
     std::cout << "Tax Rate by const=" << Tax_Rate_By_Const << std::endl;
     std::cout << "Product Name:- " << ProductName <<std::endl ;
     std::cout << "Product Category:-" << ProductCategory <<std::endl;
     std::cout << "Initial Inventory:-" << IntialInventoryQuantity <<std::endl ;
     std::cout << "Product Price:- " << ProductpricePerUnit << "birr" <<std::endl;
     std::cout << "Items Sold:- " << ItemsSold << std::endl;
     std::cout << "New Inventory:- " << additionalInventory << std::endl;
     std::cout << "Total Sales:- " << TotalSalesAmount <<std::endl ;
     std::cout << "Inventory Status:- " << InventoryStatus << std::endl; 
     std::cout << "Copy Of Total Sales Amount:-" << CopyOfTotalSalesAmount << std::endl;
     std::cout << "Additional Inventory:- " << additionalInventory << std::endl;

     return 0; 

        }