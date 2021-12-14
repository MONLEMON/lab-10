#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int loan,pay;
	double rate;
	cout << "Enter initial loan: ";
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate ;
	cout << "Enter amount you can pay per year: ";
	cin >> pay ;

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
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	double PrevBalance,interset,total,payment,newbalance ;
	PrevBalance = loan;
	payment = pay ;

for (int i=1 ; newbalance >0 ; i++){	
	interset = PrevBalance*(rate/100) ;
	total = PrevBalance + interset;
	newbalance = total - payment;
	if (payment > total){
		payment = total;
		newbalance = 0;
	}
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << interset;
	cout << setw(13) << left << total;
	cout << setw(13) << left << payment;
	cout << setw(13) << left << newbalance;
	cout << "\n";	
	PrevBalance= newbalance;
	}
	return 0;
}
