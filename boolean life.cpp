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
    
    int gender_determiner=rand()%2;
    string gender="To be Determined";
    if (gender_determiner==0)
    {
        gender="Male";
    }
    else
    {
        gender="Female";
    }
    
    bool gameRunning = true;
    int age=0;
    int choice=-1;
    string FirstName,  LastName;
    cout<<endl;
    cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
    cout<<"Gender: "<<gender<<endl;
    cout<<"Enter your first name: ";
    cin>>FirstName;
    cout<<"Enter your last name: ";
    cin>>LastName;
    cout<<"Country: Boolean Land\n\n";    
    cout<<"I was born a "<<gender<<" in Boolean Land\n";
    cout<<"My name is "<<FirstName<<" "<<LastName<<".\n";
    
    cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
    cout<<endl;

    while (gameRunning==true)
    {
        cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
        cout<<"Options:"<<endl;
        cout<<"1. Age+ \n";
        cout<<"2. Manage Relationships\n";
        cout<<"3. Manage Finances\n";
        cout<<"4. Manage Health\n";
        cout<<"5. Manage Career\n";
        cout<<"6. Manage Education\n";
        cout<<"7. Manage Hobbies\n";
        cout<<"8. Misc\n"; 
        cout<<"8. End Game\n";
        cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
        cout<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        cout<<endl;
        if (choice==1)
        { 
            age++; //git add "boolean life.cpp" git commit -m "Added age increment feature" git push origin main 
            cout<<endl; 
            cout<<"You are now "<<age<<" years old."<<endl<<endl;    
        }
       

        if (choice==8)  
        {
            return 0;
        }

        //Reset value of choice to -1 to avoid infinite loop
        choice=-1;            
    }
} 












