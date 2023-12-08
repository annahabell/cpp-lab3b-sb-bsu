#include<iostream>
using namespace std;
int main() {
int k, i, sum_k = 0, number;
do { 
   
        cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
cout << " Enter the amount of integers to sum = ";
cin>>k;
} while (cin.fail());
   cout << "Enter integer nr. " << i << ": ";
   cin >> number;
   for (i=0; i<=k; i++) {
   sum_k += number; i++;
   }
   cout << " the total sum of " << k << " integers is: " << sum_k; 
   return 0;
}
