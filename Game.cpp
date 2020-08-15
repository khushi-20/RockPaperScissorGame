#include <iostream>
#include <time.h>
#include <string>
using namespace std;

int choice() {

     srand ( time(NULL) ); /*makes use of the computer's internal clock to control the choice of the seed.  
     Since time is continually changing, the seed is forever changing.  
     Remember, if the seed number remains the same, 
     the sequence of numbers will be repeated for each run of the program.*/
     
 
     int ch;
     char ch1;
     int s1=0,s2=0,c1=0,c2=0,c3=0,a;
      // What are the choices the computer can choose, store this in a array(?) or store the choices individually.
      int ComputerChoices[3] = {1 , 2, 3};
      
     // Generates a random number between 0 and 3.
      int RandomIndex = rand() % 3;
      
      // Display what the choices are as numbers. 1. Rock 2. Paper 3. Scissors
     cout << "Please choose from the following options: 1. Rock, 2. Paper or 3. Scissors" << endl;
     
    // Enter the users choice and store it 
     cout << "Please enter your choice: "<<endl;
     cin >> ch;
     
     string ComputersChoice;
      if(RandomIndex == 1)
    {
        ComputersChoice = "rock";
        cout<<"COMPUTER CHOSE ROCK"<<"\n";
        a=1;
    } 
    else if(RandomIndex == 2) 
    {
        ComputersChoice = "paper";
        cout<<"COMPUTER CHOSE PAPER"<<"\n";
        a=2;
    } 
    else 
    {
        ComputersChoice = "scissors";
        cout<<"COMPUTER CHOSE SCISSOR"<<"\n";
        a=3;
    }
     if(a==1&&ch==1)
    {cout<<"OH!! A DRAW"<<"\n";
     c3++;}
  else if(a==1&&ch==2)
     {cout<<"YEAH!! YOU W0N"<<"\n";
       c1++;
       s1+=c1;}
  else if(a==1&&ch==3)
    {cout<<"OOPS!! YOU LOST ,BETTER LUCK NEXT TIME"<<"\n";
      c2++;
      s2+=c2;}
  else if(a==2&&ch==1)
    {cout<<"OOPS!! YOU LOST ,BETTER LUCK NEXT TIME"<<"\n";
      c2++;
      s2+=c2;}
  else if(a==2&&ch==2)
    {cout<<"OH!! A DRAW"<<"\n";
      c3++;}
  else if(a==2&&ch==3)
    {cout<<"YEAH!! YOU W0N"<<"\n";
     c1++;
     s1+=c1;}
  else if(a==3&&ch==1)
    {cout<<"YEAH!! YOU W0N"<<"\n";
       c1++;
       s1+=c1;}
  else if(a==3&&ch==2)
    {cout<<"OOPS!! YOU LOST ,BETTER LUCK NEXT TIME"<<"\n";
      c2++;
      s2+=c2;}
  else if(a==3&&ch==3)
     {cout<<"OH!! A DRAW"<<"\n";
      c3++;}

  cout<<"DO YOU WANT TO PLAY MORE AND DEFEAT A MERE COMPUTER??  (Y/N) :>>";
    cin>>ch1;
  if(ch1=='Y'||ch1=='y')
    choice();
  else if(ch1=='N'||ch1=='n')
    {
        cout<<"OK!! YOU WANT TO QUIT THE GAME,BUT BEFORE THAT YOU SHOULD SEE YOUR SCORE :";
    cout<<"COMPUTER'S SCORE IS : "<<s2<<"\n";
    cout<<"YOUR SCORE IS : "<<s1<<"\n";
    cout<<"THANK YOU !!"<<"\n";
exit(0);
    }
}
 int main(){
     choice();
	return 0;
}
