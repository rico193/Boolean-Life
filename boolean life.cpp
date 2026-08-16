#include <iostream>
#include <ctime> //for random number generation
using namespace std;

 int main()
{
    srand(time(0)); //seed random number generator
    cout << R"(
     ____   ___   ___  _     _____    _    _   _      _     ___ _____ _____ 
    | __ ) / _ \ / _ \| |   | ____|  / \  | \ | |    | |   |_ _|  ___| ____|
    |  _ \| | | | | | | |   |  _|   / _ \ |  \| |    | |    | || |_  |  _|  
    | |_) | |_| | |_| | |___| |___ / ___ \| |\  |    | |___ | ||  _| | |___ 
    |____/ \___/ \___/|_____|_____/_/   \_\_| \_|    |_____|___|_|   |_____|
                            
                                    (Developed by Rico)   
    )" << endl;
    system("pause");

    bool gameRunning = true;
    int age=0;
    int choice=-1;
    string FirstName,  LastName;

    while (gameRunning==true)
    {
        cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
        cout<<"Options:"<<endl;
        cout<<"Age+ <\n";
        cout<<"Manage Relationships\n";
        cout<<"Manage Finances\n";
        cout<<"Manage Health\n";
        cout<<"Manage Career\n";
        cout<<"Manage Education\n";
        cout<<"Manage Hobbies\n";
        cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
        cout<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        if (choice==1)
        {
            age++; //git add "boolean life.cpp" git commit -m "Added age increment feature" git push origin main     
        }
        //Reset value of choice to -1 to avoid infinite loop
        choice=-1;            
    }


}   












