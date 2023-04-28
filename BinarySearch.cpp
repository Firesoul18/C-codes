#include <iostream>

using namespace std;

int main() {
    int x[]={6,7,12,17,34,45,56,76,82,90,98,102};
    int length=12;
    int num = 56;
    
    bool notfound=true;
    int start=0,end=length-1;
    int location=-1;
    while(notfound&&length!=0){
        length=end-start+1;
        int mid=(start+end)/2;
        if(x[mid]==num){
            notfound=false;
            location=mid;
        }
        else if(x[mid]<num){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    
    cout<<location;
    return 0;
}