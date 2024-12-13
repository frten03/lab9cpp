#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int N,int M){
	if(N<=0 or M<=0){
		cout <<  "Invalid input" ;
	}
	else{for(int row = 0 ; row<N; row++){
		for(int count = 0; count<M; count++){
			cout << "O" ;
		}
		cout << "\n" ;
	}
}
}


int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
