// NUMBER GUESSING SYSTEM using c++
#include<iostream>
#include<random>
#include<ctime>
using namespace std;
int main(){
	int num;
	int tries ;
	int target;
	int max_tries = 5;
	cout<<"WELCOME TO THE NUMBER GUESSING GAME"<<endl;
	random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);
    target = dis(gen);
    while(tries<max_tries){
    	
	cout<<"Guess the number between 1 to 100 :\n";
	cin>>num;
	
	
	if(num==target){
		cout<<"You Guessed it Right\n"<<endl;
		tries++;
		break;
		
	}
	else if( num > target){
		cout<<"You are too high for the correct number\n";
		
}
	else{
		cout<<"You are too low for the correct number\n";
		tries++;
		
	}
	
}
	return 0;
	
	}
		
	
