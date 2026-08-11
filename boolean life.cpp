#include <iostream>
#include <ctime> //for random number generation
using namespace std;
 // This project is a copy/fork of the game known as "Bit Life" on Google Playstore. The original game was created by Candywriter, LLC. This project is not affiliated with Candywriter, LLC in any way. This project is a personal project and is not intended for commercial use. The purpose of this project is to learn C++ programming and to create a simple text-based life simulation game. As a personal project, it is not intended for commercial use and is solely for educational purposes. The game simulates various life events and decisions, allowing players to experience different scenarios and outcomes based on their choices.

 //Work on the project will begin shortly. I will just be stating the functions in comments as of now.
 //Age Variable starts at 0, random events will occur as the player ages, based on age category. if age is in a specific range, certain events will be triggered according to it. I will be adding 15 events per category as I do not want the code to be too complex. Stress will lower health, and if health is low enough, it will eventually lead to death.

 //player will be able to enter his first name, and last name. Parent's names will be randomly generated. Player will be able to choose his gender, and the game will have some set rules I will define later.

 //I have no idea how many functions there are gonna be lol
 int main()
{
    cout << R"(
     ____   ___   ___  _     _____    _    _   _      _     ___ _____ _____ 
    | __ ) / _ \ / _ \| |   | ____|  / \  | \ | |    | |   |_ _|  ___| ____|
    |  _ \| | | | | | | |   |  _|   / _ \ |  \| |    | |    | || |_  |  _|  
    | |_) | |_| | |_| | |___| |___ / ___ \| |\  |    | |___ | ||  _| | |___ 
    |____/ \___/ \___/|_____|_____/_/   \_\_| \_|    |_____|___|_|   |_____|
                            
                                    (Developed by Rico)   
    )" << endl;
    system("pause");

}