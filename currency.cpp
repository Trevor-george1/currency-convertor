#include<iostream>
using namespace std;


double convert() {
    double kenyan, Euro, rate;
    rate =129.962;
    cout<<"Enter currency in Ksh :";
    cin>>kenyan;

    Euro = kenyan*rate;
    cout<<"Currency in euros is :"<<Euro;
    return 0;

};

int main() {
convert();

    return 0;
}