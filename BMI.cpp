#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class BMI_calculator{
  public:
  string name;
  string surname;
  float height;
  float weight;

  // Calculator Function
 float bmicalc(){
    float bmi;
    bmi = weight / (height * height / 100) * 100;
    cout << "Your BMI index is: " << bmi << endl;

    if(bmi >= 18.5 && bmi <= 24.99){
      cout << "You have optimal BMI index." << endl;
    }
    if(bmi < 18.5){
      cout << "You have underweight BMI index." << endl;
    }
    if(bmi > 24.99){
      cout << "You have overweight BMI index." << endl;
    }

    return bmi;
  }

};


int main(){

 int ChooseList = 1,calcvessel;
 cout << " " << endl;
 cout << "Welcome to BMI Index calculator" << endl;

  while(ChooseList != 0){
   cout << "Choose what would you like to do: " << endl;
   cout << "1. New " << endl;
   cout << "2. History " << endl;
   cout << "0. Quit " << endl;

   cin >> ChooseList;
   cin.ignore();

   if(ChooseList == 1){
     //New Object
     BMI_calculator NewPerson;
     cout << "New Record " << endl;
     cout << "Enter your name" << endl;
     getline(cin,NewPerson.name);
     cout << "Enter your surname" << endl;
     getline(cin,NewPerson.surname);
     cout << "Enter your height" << endl;
     cin >> NewPerson.height;

     if (cin.fail()){
       cout << "Invalid input. Please enter a valid number." << endl;
       cin >> NewPerson.height;
      }
     cout << "Enter your weight" << endl;
     cin >> NewPerson.weight;

     if (cin.fail()){
       cout << "Invalid input. Please enter a valid number." << endl;
       cin >> NewPerson.weight;
      }
     calcvessel = NewPerson.bmicalc();

     //Saving data

     ofstream file("BMI.txt", ios::app);

     if (file.is_open()){
       file << "Name: ";
       file << NewPerson.name << endl;
       file << "Surname: ";
       file << NewPerson.surname << endl;
       file << "Height: ";
       file << NewPerson.height << endl;
       file << "Weight: ";
       file << NewPerson.weight << endl;
       file << "BMI Index: ";
       file << calcvessel << endl;
       file.close();
      }
     else{
       cout << "Error" << endl;
      }
    }
   else if (ChooseList == 2){
     string line;
     ifstream file("BMI.txt", ios::app);

     if (file.is_open()){
       while (getline(file, line)){
         cout << line << endl;
        }
         file.close();
      }else{
         cout << "Error." << endl;
        }
    }else if(ChooseList != 0 && ChooseList != 1 && ChooseList != 2){
     cout << "\nProvide valid option." << endl << "" << endl;
    }
  }
cout << "\nSee you later!\n";
}
