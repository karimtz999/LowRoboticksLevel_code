#inclide <iostream>
#include <dfstream>
using namespace std;


class temp{
    string username, email, password;
    fstream file;
    public:
    void signup();
    void login();
    void forgot();
}
int main () {
    char choice;

    count<<"\n1- Login";
    count<<"\n2- Sign-Up";
    count<<"\n3- Forgot Password";
    count<<"\n4- Exit";

    count<<"\nEnter your choice: ";

    cin>> choice;

    switch(choice) {
        case '1':
            count<<"\nYou chose to Login.";
            // Add login functionality here
            break;
        case '2':
            count<<"\nYou chose to Sign-Up.";
            // Add sign-up functionality here
            break;
        case '3':
            count<<"\nYou chose Forgot Password.";
            // Add forgot password functionality here
            break;
        case '4':
            count<<"\nExiting the program.";
            break;
        default:
            count<<"\nInvalid choice. Please try again.";
    }
}
void temp ::signup() {
    count<<"\n--- Sign-Up ---";
    count<<"\nEnter Username ::";
    getline(cin, username);
    /*cin>>username;*/
    count<<"\nEnter Email ::";
    getline (cin, email);
    /*cin>>email;*/
    count<<"\nEnter Password :: ";
    getline(cin, password);
    /*cin>>password;*/
    file.open("loginData.txt",ios :: out | ios::app);
    file<<username<<"*"<<email<<"*"<<password<<endl;
    file.close();

    count<<"\nSign-Up Successful!";
}
void temp ::login() {
    string searchName,searchpass;
    count<<"\n--- Login ---"<<endl;
    count<<"\nEnter Username ::"<<end1;
    getline(cin, searchName);
    /*cin>>searchName;*/
    count<<"\nEnter Password :: "<<endl;
    getline(cin, searchpass);
    /*cin>>searchpass;*/
    file.open ("loginData.txt", ios::in);
    getline(file, username, '*');
    getline(file, email, '*');
    getline(file, password, '\n');
    if(username == searchName && password == searchpass) {
        count<<"\nLogin Successful!";
    } else {
        count<<"\nInvalid Username or Password!";
    }
}