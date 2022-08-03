#include <iostream>
using namespace std;

class password {
  public:
    string cpassword = "123"; //current password
    string npassword; //new password
};
int main() {
  string temppass; //temp variable to compare variables
  password Obj1;
  cout << "Please enter in the current password: ";
  cin >> temppass;
  
  int comp = Obj1.cpassword.compare(temppass);  
  if (comp == 0) {
    cout << "Enter new password\n";
    cin >> Obj1.npassword;
    if (Obj1.npassword.length() >= 8) {
		//TODO: put magical forest code here
      cout << "Your new password is: "<<Obj1.npassword<<"\n";
	  cout << "-Password Statistics-\nCharacters: "<<Obj1.npassword.length()<<"\nUppercase Letters: ";
    } else if(Obj1.npassword.length() < 8) {
      cout << "Password is less than 8 characters long.\n";
    } 
  } else {
	  cout << "Invalid Password\n";
  }
}  
