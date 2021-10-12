#include<iostream>
#include<conio.h>
using namespace std;
class dominose
{
    int ord,quen,ch,pizza,price,choice;
public:
    void order()
    {
    cout<<"\n press 1 for pizza:";
    cout<<"\n press 2 for burger:";
    cout<<"\n press 3 for french fries:";
    cout<<"\n press 4 for pasta:";
    cout<<"\n press 5 for tacos:";
    cout<<"\n press 6 for sandwich:";
    cout<<"\n press 7 for pancakes:";
    cout<<"\n press 8 for muffins:";
    cout<<"\n press 9 for pastries:";
    cout<<"\n press 10 for ice-creams:";
    cout<<"\n press 11 for coffee:\n";
    cout<<"\n Enter choice:";
    cin>>ch;
    switch(ch)
    {
    case 1:
        cout<<"\n press 1 for chocolate pizza:100";
        cout<<"\n press 2 for vegitable pizza:120";
        cout<<"\n press 3 for chicken pizza:200";
        cout<<"\n press 4 for cheese pizza:160";
        cout<<"\n press 5 for overloaded pizza:190";
        cout<<"\n press 6 for dry fruits pizza:150";

        cout<<"\n Enter choice:";
        cin>>choice;
        cout<<"\n Enter quantities:";
        cin>>quen;
        switch(choice)
        {
        case 1:
            cout<<"your bill is "<<100*quen;
            break;
        case 2:
            cout<<"your bill is "<<120*quen;
            break;
        case 3:
            cout<<"your bill is "<<200*quen;
            break;
        case 4:
            cout<<"your bill is "<<160*quen;
            break;
        case 5:
            cout<<"your bill is "<<190*quen;
            break;
        case 6:
            cout<<"your bill is "<<150*quen;
            break;
        }
        break;


    case 2:
        cout<<"\n press 1 for normal burger:30";
        cout<<"\n press 2 for cheese burger:50";
        cout<<"\n press 3 for chicken burger:80";
        cout<<"\n press 4 for allu tikki burger :60";
        cout<<"\n press 5 for panner burger:90";

        cout<<"\n Enter choice:";
        cin>>choice;
        cout<<"\n Enter quantities:";
        cin>>quen;
        switch(choice)
        {
        case 1:
            cout<<"your bill is "<<30*quen;
            break;
        case 2:
            cout<<"your bill is "<<50*quen;
            break;
        case 3:
            cout<<"your bill is "<<80*quen;
            break;
        case 4:
            cout<<"your bill is "<<60*quen;
            break;
        case 5:
            cout<<"your bill is "<<90*quen;
            break;
        }
        break;


    case 3:
        cout<<"\n press 1 for normal french fries :80";
        cout<<"\n press 2 for periperi french fries:100";
        cout<<"\n press 3 for double fries:160";
        cout<<"\n press 4 for cheese fries:160";

        cout<<"\n Enter choice:";
        cin>>choice;
        cout<<"\n Enter quantities:";
        cin>>quen;
        switch(choice)
        {
        case 1:
            cout<<"your bill is "<<80*quen;
            break;
        case 2:
            cout<<"your bill is "<<100*quen;
            break;
        case 3:
            cout<<"your bill is "<<160*quen;
            break;
        case 4:
            cout<<"your bill is "<<160*quen;
            break;
        }
        break;


    case 4:
        cout<<"\n press 1 for normal pasta:60";
        cout<<"\n press 2 for vegitable pasta:100";
        cout<<"\n press 3 for white sauce pasta:120";
        cout<<"\n press 4 for cheese pasta:160";
        cout<<"\n press 5 for red sauce pasta:120";
        cout<<"\n press 6 for overloaded pasta:150";

        cout<<"\n Enter choice:";
        cin>>choice;
        cout<<"\n Enter quantities:";
        cin>>quen;
        switch(choice)
        {
        case 1:
            cout<<"your bill is "<<60*quen;
            break;
        case 2:
            cout<<"your bill is "<<100*quen;
            break;
        case 3:
            cout<<"your bill is "<<120*quen;
            break;
        case 4:
            cout<<"your bill is "<<160*quen;
            break;
        case 5:
            cout<<"your bill is "<<120*quen;
            break;
        case 6:
            cout<<"your bill is "<<150*quen;
            break;
        }
        break;


    case 5:
        cout<<"\n press 1 for chocolate taccos:100";
        cout<<"\n press 2 for vegitable taccos:120";
        cout<<"\n press 3 for chicken taccos:200";
        cout<<"\n press 4 for cheese taccos:160";
        cout<<"\n press 5 for double cheese taccos:190";
        cout<<"\n press 6 for panner tacos:150";

        cout<<"\n Enter choice:";
        cin>>choice;
        cout<<"\n Enter quantities:";
        cin>>quen;
        switch(choice)
        {
        case 1:
            cout<<"your bill is "<<100*quen;
            break;
        case 2:
            cout<<"your bill is "<<120*quen;
            break;
        case 3:
            cout<<"your bill is "<<200*quen;
            break;
        case 4:
            cout<<"your bill is "<<160*quen;
            break;
        case 5:
            cout<<"your bill is "<<190*quen;
            break;
        case 6:
            cout<<"your bill is "<<150*quen;
            break;
        }
        break;


     case 6:
        cout<<"\n press 1 for normal sandwich:50";
        cout<<"\n press 2 for vegitable sandwich:60";
        cout<<"\n press 3 for chocolate sandwich:70";
        cout<<"\n press 4 for cheese sandwich:80";
        cout<<"\n press 5 for grilled sandwich:90";
        cout<<"\n press 6 for chiken sandwich:100";

        cout<<"\n Enter choice:";
        cin>>choice;
        cout<<"\n Enter quantities:";
        cin>>quen;
        switch(choice)
        {
        case 1:
            cout<<"your bill is "<<50*quen;
            break;
        case 2:
            cout<<"your bill is "<<60*quen;
            break;
        case 3:
            cout<<"your bill is "<<70*quen;
            break;
        case 4:
            cout<<"your bill is "<<80*quen;
            break;
        case 5:
            cout<<"your bill is "<<90*quen;
            break;
        case 6:
            cout<<"your bill is "<<100*quen;
            break;
        }
        break;


    case 7:
        cout<<"\n press 1 for normal pancake:45";
        cout<<"\n press 2 for chocolate pancake:50";
        cout<<"\n press 3 for honey pancake:50";
        cout<<"\n press 4 for maple pancake:60";
        cout<<"\n press 5 for ice cream pancake:90";
        cout<<"\n press 6 for berries pancake:100";

        cout<<"\n Enter choice:";
        cin>>choice;
        cout<<"\n Enter quantities:";
        cin>>quen;
        switch(choice)
        {
        case 1:
            cout<<"your bill is "<<45*quen;
            break;
        case 2:
            cout<<"your bill is "<<50*quen;
            break;
        case 3:
            cout<<"your bill is "<<50*quen;
            break;
        case 4:
            cout<<"your bill is "<<60*quen;
            break;
        case 5:
            cout<<"your bill is "<<90*quen;
            break;
        case 6:
            cout<<"your bill is "<<100*quen;
            break;
        }
        break;


    case 8:
        cout<<"\n press 1 for chocolate muffin:25";
        cout<<"\n press 2 for normal muffin:15";
        cout<<"\n press 3 for double chocolate muffin:45";
        cout<<"\n press 4 for red velvet muffin:40";
        cout<<"\n press 5 for vanella muffin:30";
        cout<<"\n press 6 for dry fruits muffin:55";
        cout<<"\n press 7 for beries muffin:45";

        cout<<"\n Enter choice:";
        cin>>choice;
        cout<<"\n Enter quantities:";
        cin>>quen;
        switch(choice)
        {
        case 1:
            cout<<"your bill is "<<25*quen;
            break;
        case 2:
            cout<<"your bill is "<<15*quen;
            break;
        case 3:
            cout<<"your bill is "<<45*quen;
            break;
        case 4:
            cout<<"your bill is "<<40*quen;
            break;
        case 5:
            cout<<"your bill is "<<30*quen;
            break;
        case 6:
            cout<<"your bill is "<<45*quen;
            break;
        case 7:
            cout<<"\n Your bill is"<<45*quen;
        }
        break;


    case 9:
        cout<<"\n press 1 for chocolate pastry:45";
        cout<<"\n press 2 for red velvet:60";
        cout<<"\n press 3 for vanilla pastry:30";
        cout<<"\n press 4 for dry fruits pastry:60";
        cout<<"\n press 5 for berries pastry:65";
        cout<<"\n press 6 for pinnaple pastry:45";
        cout<<"\n Press 7 for strawberry pastry:35";
        cout<<"\n press 8 for ice cream pastry:50";
        cout<<"\n prsee 9 for double chocolate pastry:55";

        cout<<"\n Enter choice:";
        cin>>choice;
        cout<<"\n Enter quantities:";
        cin>>quen;
        switch(choice)
        {
        case 1:
            cout<<"your bill is "<<45*quen;
            break;
        case 2:
            cout<<"your bill is "<<60*quen;
            break;
        case 3:
            cout<<"your bill is "<<30*quen;
            break;
        case 4:
            cout<<"your bill is "<<60*quen;
            break;
        case 5:
            cout<<"your bill is "<<65*quen;
            break;
        case 6:
            cout<<"your bill is "<<45*quen;
            break;
        case 7:
            cout<<"\n your bill is "<<35*quen;
            break;
        case 8:
            cout<<"\n your bill is "<<50*quen;
            break;
        case 9:
            cout<<"\n your bill is "<<55*quen;
        }
        break;


    case 10:
        cout<<"\n press 1 for chocolate ice cream:40";
        cout<<"\n press 2 for rajbhog ice cream:40";
        cout<<"\n press 3 for vanilla ice cream:30";
        cout<<"\n press 4 for dry fruits ice cream:60";
        cout<<"\n press 5 for berries ice cream:65";
        cout<<"\n press 6 for fruits ice cream:60";
        cout<<"\n Press 7 for strawberry ice cream:35";
        cout<<"\n press 8 for butterscoch ice cream:45";
        cout<<"\n prsee 9 for anjeer ice cream:40";

        cout<<"\n Enter choice:";
        cin>>choice;
        cout<<"\n Enter quantities:";
        cin>>quen;
        switch(choice)
        {
        case 1:
            cout<<"your bill is "<<40*quen;
            break;
        case 2:
            cout<<"your bill is "<<40*quen;
            break;
        case 3:
            cout<<"your bill is "<<30*quen;
            break;
        case 4:
            cout<<"your bill is "<<60*quen;
            break;
        case 5:
            cout<<"your bill is "<<65*quen;
            break;
        case 6:
            cout<<"your bill is "<<60*quen;
            break;
        case 7:
            cout<<"\n your bill is "<<35*quen;
            break;
        case 8:
            cout<<"\n your bill is "<<45*quen;
            break;
        case 9:
            cout<<"\n your bill is "<<50*quen;
        }
        break;


    case 11:
        cout<<"\n press 1 for normal coffee:20";
        cout<<"\n press 2 for cold coffee:30";
        cout<<"\n press 3 for vanilla coffee:30";
        cout<<"\n press 4 for chocolate coffee:40";
        cout<<"\n press 5 for strong coffee:25";
        cout<<"\n press 6 for copperchino:50";

        cout<<"\n Enter choice:";
        cin>>choice;
        cout<<"\n Enter quantities:";
        cin>>quen;
        switch(choice)
        {
        case 1:
            cout<<"your bill is "<<20*quen;
            break;
        case 2:
            cout<<"your bill is "<<30*quen;
            break;
        case 3:
            cout<<"your bill is "<<30*quen;
            break;
        case 4:
            cout<<"your bill is "<<40*quen;
            break;
        case 5:
            cout<<"your bill is "<<25*quen;
            break;
        case 6:
            cout<<"your bill is "<<50*quen;
            break;
        }
        break;
      }

    }

};



int main()
{
    dominose d1;
    d1.order();
    cout<<"\n\n\t .....THANK YOU!!! WISIT AGAIN!!!!";
    getch();
    return 0;
}

