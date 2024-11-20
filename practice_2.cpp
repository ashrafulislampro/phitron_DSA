#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jersey_no;
    string country;
    void display(){
        cout<<jersey_no<<" "<<country<<endl;
    }
};

int main(){
    Cricketer* dhoni = new Cricketer;
    Cricketer* kohli = new Cricketer;
    dhoni->jersey_no = 55;
    dhoni->country = "India";

    // kohli = dhoni;
    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;
    delete dhoni;
    kohli->display();

    return 0;
}