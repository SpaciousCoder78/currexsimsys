//including header files
#include <iostream>

//using namespace std for simplifying io
using namespace std;

//main function
int main() {
    //main menu
    cout<<"---------Current Exchange System-----------"<<endl;
    cout<<"1: Print help"<<endl;
    cout<<"2: Print exchange stats"<<endl;
    cout<<"3: Make an offer"<<endl;
    cout<<"4: Make a bid"<<endl;
    cout<<"5: Print wallet"<<endl;
    cout<<"6: Continue"<<endl;
    cout<<"==============="<<endl;
    //asking user for input
    cout<<"Enter your choice: "<<endl;

    //declaring user option
    int userOption;
    //accepting input
    cin>>userOption;
    //showing what they chose
    cout<<"You chose: "<<userOption<<endl;

    //handling the user choice
    if(userOption==0){
        cout<<"Wrong choice, choose 1-6"<<endl;
    }
    else if(userOption==1){
        cout<<"Help: Your aim is to make money, analyse the market and make bids and offers"<<endl;
    }
    else if(userOption==2){
        cout<<"Market looks good"<<endl;
    }
    else if(userOption==3){
        cout<<"Make an offer - enter the amount"<<endl;
    }
    else if(userOption==4){
        cout<<"Make a bid - enter the amount"<<endl;
    }
    else if(userOption==5){
        cout<<"Your wallet is empty"<<endl;
    }
    else if(userOption==6){
        cout<<"Going to next time frame"<<endl;

    }
}
