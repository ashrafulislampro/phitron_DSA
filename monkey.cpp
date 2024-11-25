#include <bits/stdc++.h>

using namespace std;
#define Max_Size 100001

int main()
{
    char str[Max_Size];
    while(cin.getline(str, Max_Size)){        
        char filterStr[Max_Size];
        int j = 0;
        for(int i = 0; str[i] != '\0'; i++){
            if(str[i] != ' '){
                filterStr[j] = str[i];
                j++;
            };            
        }
       filterStr[j] = '\0';
        sort(filterStr, filterStr+j);
        cout<<filterStr<<endl;
    }
    return 0;
}