#include <iostream>
#include <string.h>
#include <vector>
#include <random>
#include <ctime>
#include <chrono>

using namespace std;
using namespace std::chrono;

void fun()
{
    for(int i=0;i<10000;i++)
    {
    }
}

int generater()
{
    random_device rd; // obtain a random number from hardware
    mt19937 gen(rd()); // seed the generator
    uniform_int_distribution<> distr(0,3); // define the range
    return distr(gen); // generate numbers
}

int generateRandomlowerCase(vector<char> lowerCase)
{
    char x;
    random_device seed;
    mt19937_64 engine(seed());
    uniform_int_distribution<int> choose(0,lowerCase.size( )-1);
    x = lowerCase[choose(engine)];
    lowerCase.clear();
    return x;
}

int generateRandomupperCase(vector<char> upperCase)
{
    char x;
    random_device seed;
    mt19937_64 engine(seed());
    uniform_int_distribution<int> choose(0,upperCase.size( )-1);
    x = upperCase[choose(engine)];
    upperCase.clear();
    return x;
}

int generateRandomsymbol(vector<char> symbol)
{
    char x;
    random_device seed;
    mt19937_64 engine(seed());
    uniform_int_distribution<int> choose(0,symbol.size( )-1);
    x = symbol[choose(engine)];
    symbol.clear();
    return x;
}

int generateRandomnumber(vector<int> number)
{
    char x;
    random_device seed;
    mt19937_64 engine(seed());
    uniform_int_distribution<int> choose(0,number.size( )-1);
    x = number[choose(engine)];
    number.clear();
    return x;
}

int main()
{
    int n;
    char o = 'Y';
    int choose;
    vector<char> lowerCase {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    vector<char> upperCase {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
      cout << "" << endl;
      vector<char> symbol {'!','@','#','$','%','*'};
      vector<int> number {0,1,2,3,4,5,6,7,8,9};
      cout << "===========================================================================" << endl;
      cout << "*****************************PASSWORD GENERATOR****************************" << endl;
      cout << "===========================================================================" << endl;
      cout << endl;
        cout << "Enter your choice: " << endl;
        cout << "1) Generate Password" << endl;
        cout << "2) Exit" << endl;
        cout << "Enter your Choice: ";
        cin >> choose;
        switch(choose)
        {
            case 1:
            {
                while(o == 'y' || o == 'Y') {
                    cout << "Enter number of digits from 12 to 32 to generate password: ";
                    cin >> n;

                    vector<char> password(n);
                    if(n>=12&&n<=32)
                    {
                        password.front()=generateRandomlowerCase(lowerCase);
                        password.back()=generateRandomupperCase(upperCase);
                        for(int i=1;i<n-1;i++)
                        {
                        const int r = generater();
                        if(r==0) {
                            password[i] += generateRandomlowerCase(lowerCase);
                        }else if(r==1) {
                            password[i] += generateRandomupperCase(upperCase);
                        }else if(r==2) {
                            password[i] += generateRandomsymbol(symbol);
                        }else if(r==3) {
                            password[i] += generateRandomnumber(number);
                        }else{
                            i--;
                        }
                        }
                    }
                    else
                    {
                        cout << "Invalid Entry." << endl;
                    }
                    cout << endl;
                    cout << "||=======================================================================||" << endl;
                    cout << "\t||*************************";
                    for(auto j=0;j<password.size();j++)
                    {
                        cout << password[j];
                    }
                    cout << "*************************||";
                    cout <<endl;
                    cout << "||=======================================================================||" << endl;

                    password.clear();

                    cout << "Do yo want to generate new password again [y/n]: ";
                    cin >> o;
                }
            }
            case 2:
            {
                exit(0);
            }
        }
}
