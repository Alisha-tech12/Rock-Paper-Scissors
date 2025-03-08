#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
string determinewinner(int userchoice,int computerchoice){
	

		if(userchoice==computerchoice){
		return "It's a tie!";
	}
	else if((userchoice==0 and computerchoice==2) or (userchoice==1 and computerchoice==0) or (userchoice==2 and computerchoice==1)){
		return "You win!";
		
	}
	else {
	return "Computer wins!";
	
	}
		
}
int main(){
	
	srand(time(0));
	int userwins=0;
	int computerwins=0;
	int userchoice,computerchoice;
	string choices[]={"rock","paper","scissors"};
	cout<<"Welcome to game (Rock,Paper,Scissors)"<<endl;
	cout<<"Select number : "<<endl;
	cout<<"0.rock   	1.paper		  2.scissors"<<endl;
	for(int i=1;i<=5;i++){
	
	cout<<"Enter your choice for round "<<i<<" : ";
	
	cin>>userchoice;
	
	if(userchoice<0 or  userchoice>2){
		cout<<"Invalid!Please enter a new number between 0 and 2..."<<endl;
		return 1;
	}
	computerchoice=rand()%3;
	cout<<"Your choice = "<<userchoice<<endl;
	cout<<"Computer's choice = "<<computerchoice<<endl;
	string result=determinewinner(userchoice,computerchoice);
	cout<<result<<endl;
	

	if(result=="Computer wins!"){
		computerwins+=1;
	}
	else if(result=="You win!"){
		userwins+=1;
	}
}
	if(computerwins>userwins){
	cout<<"overall winner is computer"<<endl;
	}
	else if(computerwins<userwins){
	cout<<"overall winner is you"<<endl;
	}
	
	return 0;
}
