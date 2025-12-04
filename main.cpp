#include <iostream>
#include "functions.h"
#include <string>

using namespace std;

// calculator functions test fucntions


// requirments: 
// loop the calculator until user exits
// functions - ADD, SUBTRACT, MULTIPLY, DIVIDE

//create GUI https://www.youtube.com/watch?v=BjQhp0eHmJw

int main() {


    cout << "Enter '0' to exit" << endl;

    int k = 2;

    while (true) {
        for (int i = 1; i <= k; i++) {
            cout << "Enter Number: " << endl;
            float input[2]; //make into array list to handle 2 inputs
            cin >> input[i];
            if (input[i] == 0) {
                cout << "Exiting calculator. Goodbye!" << endl;
                return 0;
            }

           
            while (i == 2) {
                //use case for different operations/functions
                int u_inp;
                cout << "Select operation: " << endl;
                cout << "1. ADD" << endl;
                cout << "2. SUBTRACT" << endl;  
                cout << "3. MULTIPLY" << endl;
                cout << "4. DIVIDE" << endl;
                cout << "9. RETURN TO START" << endl;
                cout << "0. EXIT" << endl;
                cin >> u_inp;

                switch (u_inp)
                {
                case 0:
                    return 0;
                    break;

                case 1:
                    cout << "ADDING NUMBERS..." << endl;
                    cout << "--------" << endl;
                    cout << input[1] << " + " << input[2] << " = ";
                    cout << input[1] + input[2] << endl;

                    cout << "--------" << endl;
                    cout << endl;
                    main();
                    break;   

                case 2: 

                    break;

                case 3:

                    break;

                case 4:

                    break; 

                case 9:
                    main();
                    break;  

                default:
                    break;
                }
            }
    }

    return 0;
    }
}
