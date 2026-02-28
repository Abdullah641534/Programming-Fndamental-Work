#include<iostream>
using namespace std;
main()
{
float fertilizer_bag;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>fertilizer_bag;
float cost_bag;
cout<<"Enter the cost of the bag: $";
cin>>cost_bag;
float area;
cout<<"Enter the area in square feet that can be covered by the bag: ";
cin>>area;
float per_pound;
per_pound=cost_bag/fertilizer_bag;
cout<<"Cost of fertilizer per pound: $"<<per_pound<<"\n";
float per_square;
per_square=cost_bag/area;
cout<<"Cost of fertilizing per square foot: $"<<per_square;
}


