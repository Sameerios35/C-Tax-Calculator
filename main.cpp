#include <iostream>

using namespace std;

int main() {
    int purchase = 0;
    cout << "Please enter the amount of your purchase." << endl;
    cin >> purchase;
    
    double salesTaxPercentage = 0;
    cout << "Please enter the amount of the sales tax as a decial. (ex. 10% would be .1)" << endl;
    cin >> salesTaxPercentage;
    
    double totalSalesTax;
    totalSalesTax = purchase * salesTaxPercentage;
    
    cout << "Your total sales tax on a purchase of $" << purchase << " will be " << totalSalesTax << endl;
    
    return 0;
}
