#include <iostream>

using namespace std;

int allSub, addSub, sub1, sub2, sub3, sub4, sub5;

int main()
{
    //first sub
    cout<<"Please enter the grade for first sub: ";
    cin>>sub1;


    //second sub
    cout<<"Please enter the grade for second sub: ";
    cin>>sub2;


    //third sub
    cout<<"Please enter the grade for third sub: ";
    cin>>sub3;


    //fourth sub
    cout<<"Please enter the grade for fourth sub: ";
    cin>>sub4;


    //fifth sub
    cout<<"Please enter the grade for fifth sub: ";
    cin>>sub5;


    //background autocomputing grade
    addSub = sub1 + sub2 + sub3 + sub4 + sub5;
    allSub = addSub / 5;


    //total of 5 grades
    cout<<"The total average student got is: ";
    cout<<allSub;


}
