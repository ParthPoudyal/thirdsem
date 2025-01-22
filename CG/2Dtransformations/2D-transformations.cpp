#include <iostream>
#include <transformations.h>
using namespace std; 
int main(){
    int *array ; 
    int P[3][3];
    int (*array)[3] = new int[3][3]; 
    cout << "enter the vertices"<<endl;
    for (int i = 0 ; i < 3; i++){
        for (int j = 0 ; j < 3; j++){
            cin >> P[i][j]; 
        }
    }
    int choice; 
    cout << "enter your choice of transformation"<<endl ; 
    cout <<" 1. Translation "<<endl;
    cout <<" 2. Rotation "<<endl;
    cout <<" 3. Scaling "<<endl;
    cout <<" 4. Reflection "<<endl;
    cout <<" 5. Shear "<<endl;
    cin >> choice; 

    switch ((choice))
    {
    case (1):
        translation(array)
        break;
    
    default:
        break;
    }
    

}