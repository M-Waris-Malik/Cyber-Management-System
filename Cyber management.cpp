#include <iostream>
#include <vector>
using namespace std;

class User{
	private:
		string name, password;
	public:
		User(string n, string pw){
			name = n; 
			password = pw;
		}
	
	string getName(){
		return name;
	}
	
	string getPW(){
		return password;
	}
};

class Cyber{
	private:
		vector<User> ve;
	public:
		
		add(User user){
			ve.push_back(user);
		}
	
	authentication(){
		string userN, userPW;
		cout<<"Enter User Name: "; cin>>userN;
		cout<<"Enter Password: "; cin>>userPW;
	for(int i=0; i<ve.size(); i++){
		if(userN==ve[i].getName() && userPW==ve[i].getPW()){
			system("cls");
		cout<<"Authentication Successful"<<endl<<endl;
		break;
		}
	else{	system("cls");
cout<<"Authentication Failed! Enter valid Username or Password";
cout<<endl<<endl;
	}
	}
	}
};

int main(){
	Cyber cyber;
	cyber.add(User("abc", "abc123"));
	cyber.add(User("def", "def456"));
	cyber.add(User("xyz", "xyz789"));
	
	cout<<"Enter User name and Password"<<endl;
	cout<<"----------------------------"<<endl<<endl;
	cyber.authentication();
}

