#include<iostream>
#include<iomanip> 
using namespace std;

int main(){
    double loan,rate,payper;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
    cin >> payper;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int j=1;
	double interest,total,newb;
    while(loan>0){
        interest = loan*rate/100;
        total = loan + interest;
        if(total < payper){
            payper = total;    
        }
        newb = total-payper;
	    cout << fixed << setprecision(2); 
	    cout << setw(13) << left << j; 
	    cout << setw(13) << left << loan;
	    cout << setw(13) << left << interest;
	    cout << setw(13) << left << total;
	    cout << setw(13) << left << payper;
	    cout << setw(13) << left << newb;
	    cout << "\n";
	    loan = newb;
        j++;
    }
	return 0;
}