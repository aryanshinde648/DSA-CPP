#include<iostream>
using namespace std;

int main(){
    int a[5] = {1,3,4,2,6},min,max;
    
    max=a[1];
    min=a[1];

    for(int i=0;i<6;i++){
        
        if (a[i]>max)
        {
            max=a[i];
        }

        if (a[i]<min)
        {
            min=a[i];
        }
        
    }

    cout<<min<<endl<<max;
    return 0;
}
