#include <iostream>
using namespace std;
int userOption;
void printMenu()
{
    cout << "1: Print help" << endl;
    cout << "2: Print exchange stats" << endl;
    cout << "3: Place an ask" << endl;
    cout << "4: Place a bid" << endl;
    cout << "5: Print wallet" << endl;
    cout << "6: Continue" << endl;
}

int getUserOption(){
    cout << "Type in 1-6" << endl;
    cin >> userOption;
    return userOption;
}

void printHelp()
{
    cout << "Help: Your aim is to make money, analyse the market and make bids and offers" << endl;
}
void printMarketStats()
{
    cout << "Market looks good" << endl;
}
void enterAsk(){
    cout << "Make an offer - enter the amount" << endl;
}

void enterBid(){
    cout << "Make a bid - enter the amount" << endl;
}

void printWallet(){
    cout << "Your wallet is empty" << endl;
}

void gotoNextTimeframe(){
    cout << "Going to next time frame" << endl;
}
void processUserOption(int userOption){
    if (userOption == 0)
    {
        cout << "Wrong choice, choose 1-6" << endl;
    }
    else if (userOption == 1)
    {
        printHelp();
    }
    else if (userOption == 2)
    {
        printMarketStats();
    }
    else if (userOption == 3)
    {
        enterAsk();
    }
    else if (userOption == 4)
    {
        enterBid();
    }
    else if (userOption == 5)
    {
        printWallet();
    }
    else if (userOption == 6)
    {
        gotoNextTimeframe();
    }
}

int main()
{
    while(true){
        printMenu();

        userOption = getUserOption();

        processUserOption(userOption);
    }
}
