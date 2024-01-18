#include <iostream>

using namespace std;

int main () {
    //dice1
    int dice1 = 0;
    //dice2 
    int dice2 = 0;
    //question
    cout<<"input how many sides of cube : ";
    //cout var - sidescount
    int sidecount = 0;
    cin>>sidecount;  
    srand(time(NULL));
    do{
    dice1 = rand()%sidecount+1;
    //dice2
    
    dice2 = rand()%sidecount+1;
    cout<<"\ndice 1 is "<<dice1;
    cout<<"\tdice 2 is "<<dice2;
    }
    while (dice1!=dice2);
}
