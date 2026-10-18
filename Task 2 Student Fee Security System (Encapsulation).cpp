#include <iostream>
using namespace std;
class Student{
	private:
		string name;
		string admission;
		float fee_balance;
		public:
			void inputStudentData(){
				cout<<"Enter Student Name"<<endl;
				cin>>name;
				cout<<"Enter Admission Number"<<endl;
				cin>>admission;
				cout<<"Fee Balance"<<endl;
				cin>>fee_balance;
			}

void makePayment(){
	float amount;
	cout<<"Enter amount payed $ \n"<<endl;
	cin>>amount;
	if(amount<=0){
		cout<<"Amount cannot be negative";
		return;
		}
		
   if(amount>fee_balance){
			cout<<"Amount in excess. Pay full amount...\n"<<endl;
			fee_balance=0;
		}
		else{
			fee_balance=fee_balance-amount;
			cout<<" Payment Successfully Recorded\n"<<endl;
		}
	    
}
void displayStatus(){
	cout<<"=======Updated Status=====\n"<<endl;
	cout<<"Student Name :"<<name<<endl;
	cout<<"Admission Number :"<<admission<<endl;
	cout<<"Fee Balance $"<<fee_balance<<endl;
	cout<<"======Workout Done====="<<endl;
	
}
};
int main(){
	Student student;
	student.inputStudentData();
	student.makePayment();
	student.displayStatus();
	return 0;
}

