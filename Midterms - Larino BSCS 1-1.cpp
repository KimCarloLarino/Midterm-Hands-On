//Name: Kim Carlo Larino
//Activity: Midterm Hands-On

#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

float first,second;
int ch, ans=0;

void case1 (float first, float second){

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Enter Number of Kilograms: ";
    cin >> first;

    second=first*1000;

    cout << first<<" kg = "<< second<< " g";
    cout << endl;
}

void case2 (float first, float second){

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Enter Number of Grams: ";
    cin >> first;

    second=first/1000;

    cout << first<<" g = "<<second<<" kg";
    cout << endl;
}
void case3 (float first, float second){

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Enter Number of Kilograms: ";
    cin >> first;

    second=first*1000000;

    cout << first<<" kg = "<<second<<" mg";
    cout << endl;
}
void case4 (float first, float second){

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Enter Number of Miligrams: ";
    cin >> first;

    second=first/1000000;

    cout << first<<" mg = "<<second<<" kg";
    cout << endl;
}
void case5 (float first, float second){

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Enter Number of Grams: ";
    cin >> first;

    second=first*1000;

    cout << first<<" g = "<<second<<" mg";
    cout << endl;
}
void case6 (float first, float second){

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Enter Number of Milligrams: ";
    cin >> first;

    second=first/1000;

    cout << first<<" mg = "<<second<<" g";
    cout << endl;
}
int main(){

system("Color 01");


    do{

        system("cls");

        cout << endl;
        cout << "<<Metric Weight Conversion Calculator>>" << endl;
        cout << endl;
        cout << "[1] Kilograms to Grams" <<endl;
        cout << "[2] Grams to Kilograms" <<endl;
        cout << "[3] Kilograms to Milligrams" <<endl;
        cout << "[4] Milligrams to Kilograms" <<endl;
        cout << "[5] Grams to Milligrams" <<endl;
        cout << "[6] Milligrams to Grams" <<endl;
        cout << "[0] Exit the Conversion App" <<endl;
        cout << endl;
        cout << "Select Operation: ";
        cin >> ch;

        switch(ch){
            case 1: {
                cout << endl;
                cout << "======================================" << endl;
                cout << "<<Kilograms to Grams>>" <<endl<<endl; 
                case1(first,second);
                cout << endl;
                cout << endl;
                system("pause");
            break;
            }
            case 2:{
                cout << endl;
                cout << "======================================" << endl;
                cout << "<<Grams to Kilograms>>" <<endl<<endl; 
                case2(first,second);
                cout << endl;
                cout << endl;
                system("pause");
            break;
            }
            case 3:{
                cout << endl;
                cout << "======================================" << endl;
                cout << "<<Kilograms to Milligrams>>" <<endl<<endl; 
                case3(first,second);
                cout << endl;
                cout << endl;
                system("pause");
            break;
            }
            case 4:{
                cout << endl;
                cout << "======================================" << endl;
                cout << "<<Milligrams to Kilograms>>" <<endl<<endl; 
                case4(first,second);
                cout << endl;
                cout << endl;
                system("pause");
            break;
            }
            case 5:{
                cout << endl;
                cout << "======================================" << endl;
                cout << "<<Grams to Milligrams>>" <<endl<<endl; 
                case5(first,second);
                cout << endl;
                cout << endl;
                system("pause");  
            break;
            }  
            case 6:{
                cout << endl;
                cout << "======================================" << endl;
                cout << "<<Milligrams to Grams>>" <<endl<<endl;
                case6(first,second);
                cout << endl;
                cout << endl;
                system("pause");
            break;
            }
            case 0:{
                cout << endl;
                cout << "Conversion App Terminated" <<endl; 
                cout << "Thank you for using the app!";
                cout << endl<<endl;
                return 0;
            break;
            }    
            default:{
                cout << endl;
                cout << endl;
                cout << "Invalid Input!";
                cout << endl;
                system("pause");
            break;
            }
        }
    }while (ans == 0);
}