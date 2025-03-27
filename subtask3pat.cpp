#include <iostream>
using namespace std;

int main() {
    int temp1, temp2, temp3;

    // Input the first temperature reading
    cout << "Enter the first temperature reading: ";
    cin >> temp1;
    
    // input the second temperature reading
    cout << "Enter the second temperature reading: ";
    cin >> temp2;
    
    // Check if the second reading does not increase by more than 50 degrees
    if (temp2 - temp1 > 50) {
        cout << "Reduce fryer heat before taking the third reading." << endl;
        return 0; // Exit the program if condition is violated
    }
        // Check if the increase is less than 10 degrees compared to the first reading
    if (temp2 - temp1 < 10) {
        cout << "Increase the fryer heat before taking the third reading." << endl;
        
    }

    // Input the third temperature reading
    cout << "Enter the third temperature reading: ";
    cin >> temp3;

    // Check if the oil temperature is between 150 and 190 degrees
    if (temp3 >= 150 && temp3 <= 190) {
        cout << "you may start frying the magwinyas." << endl;
    } else {
        cout << "The oil not ready to frying." << endl;
    }

    return 0;
}



    
 
    
    


