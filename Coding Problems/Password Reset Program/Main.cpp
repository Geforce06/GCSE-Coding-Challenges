#include <iostream>
using namespace std;

struct {
  public:
    string cpassword = "123"; //current password
    string npassword; //new password
} password;
void passwordgenerate() {
  char myarr[] = {'T','d','F'};
  for (int i=0; i<3; i++) {
    cout <<"\n"<<myarr[i]<<" ";
  }
}
int main() {
  string temppass; //temp variable to compare variables
  cout << "Please enter in the current password: ";
  passwordgenerate();
  cin >> temppass;
  
  int comp = password.cpassword.compare(temppass);  
  if (comp == 0) {
    cout << "Enter new password or enter 2 for a generated password: \n";
    cin >> password.npassword;
    if (password.npassword.length() >= 8) {
      cout << "Your new password is: "<<password.npassword<<"\n";
	  cout << "-Password Statistics-\nCharacters: "<<password.npassword.length()<<"\nUppercase Letters: ";
    } else if(password.npassword.length() < 8) {
      cout << "Password is less than 8 characters long.\n";
    } 
  } else {
	  cout << "Invalid Password\n";
  }
}  
