
//#include<iostream>
#include <iostream>

int main() {
    int n;
    cin>>n;
    int s[1000000];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int maxR = s[0]; int minR = s[0];
    int maxB = 0; int minB = 0;
    for(int i=0;i<n;i++){
        if(s[i]>maxR){
            maxR = s[i];
            maxB++;
        } else if(s[i]<minR) {
            minR = s[i];
            minB++;
        }
    }
    cout<<maxB<<" "<<minB;
    return 0;
}
