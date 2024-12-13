#include<iostream>
#include<cmath>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;



int main(){	
	double loan, rate, payamount;
	cout << "Enter initial loan: ";
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate ;
	cout << "Enter amount you can pay per year: ";
	cin >> payamount ;

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
	
	
		int year = 1 ;
		double prevb, interest, total, payment, newb ;
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
		if(payamount<loan){

		prevb = loan ;
		interest = prevb*rate/100 ;
		payment = payamount ;
		total = prevb + interest ;
		newb = total - payment ;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << year; 
			cout << setw(13) << left << prevb;
			cout << setw(13) << left << interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << payment;
			cout << setw(13) << left << newb;
			cout << "\n";
			
		do{
			year = year + 1 ;
			prevb = newb ;
			interest = prevb*rate/100 ;
			payment = payamount ;
			total = prevb + interest ;
			newb = total - payment ;

			if(total<payamount){
				payment = total ;
				newb = 0 ;
			}

			cout << fixed << setprecision(2); 
			cout << setw(13) << left << year; 
			cout << setw(13) << left << prevb;
			cout << setw(13) << left << interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << payment;
			cout << setw(13) << left << newb;
			cout << "\n";

			
		

		}while(newb>0);
		}else if(payamount>loan){
			prevb = loan;
			interest = prevb*rate/100 ;
			total = prevb + interest ;
			payment = total ;
			newb = total - payment ;
			cout << fixed << setprecision(2); 
			cout << setw(13) << left << year; 
			cout << setw(13) << left << prevb;
			cout << setw(13) << left << interest;
			cout << setw(13) << left << total;
			cout << setw(13) << left << payment;
			cout << setw(13) << left << newb;
			cout << "\n";


		}

		

	return 0;
}
