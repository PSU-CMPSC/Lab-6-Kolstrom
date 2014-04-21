//  Tim Kolstrom
//  trk10@psu.edu
//  CMPSCI 121, Section 001
//
//  Lab 6
//  2014-04-20

#include <iostream>
#include <iomanip>


using namespace std;

//  Function prototype
double avgScores(double *, int); // Using a pointer double and an int (test scores array and size of array respectively)



int main()
{

    //  Prompts the user how many scores they would like the array to hold
    int size;
    
    cout << "How many test scores would you like the array to hold? ";
    
    cin >> size;
    
    
    //  Dynamically allocates new variable memory for the amount of test scores the user wishes to hold
    double *testScores;
    
    testScores = new double [size];
    
    
    cout << endl;
    
    

    //  Do-while loop that asks user to fill the array with test scores
    //  If the user response is negative it repeats and makes them type in a positive value
    int i = 0;
    
    do{
        
        cout << "Input test score #" << (i+1) << ": ";
        
        cin >> testScores[i];
        
        if(testScores[i] < 0)
        {
            cout << endl << "Invalid score, please enter again." << endl;
        }
        else
            i++;
        
        
        cout << endl;
        
    }while(i < size);
    

    cout << endl;
    
    //  Sets the decimal places of the answer to two because it is a percentage
    cout << setprecision(2) << fixed << endl;
    
    //  Displays the average of the scores by passing the testScores array into the avgScores function
    cout << "The average of the scores is " << avgScores(testScores, size) << "%" << endl;
    
    
    
    
    return 0;
    
    
    
}

//  This fn averages the test scores in the testScores array
double avgScores(double *testScores, int size)
{
    
    //  Declares local variable to determine the total of all the scores added together
    double total;
    
    
    //  For loop that adds all of the elements of the array to produce a total
    for(int i = 0; i < size; i++)
    {
        
        total += testScores[i];
    
    }
    
    
    //  Returns the average of the scores by dividing the total by the size of the array
    return total / size;
        
        
        
        
}


