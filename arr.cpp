#include<bits\stdc++.h>
using namespace std;
int main(){
        int arr[7]= {1,2,3,4,5,6,7};
        int s;
        cout<<"Provide input:";
        cin>>s;

        for(int i=0;i<7;i++){
                if(arr[i]==s)
                {
                    printf("Found at: %d",i);
                    return 0;
                }   
        }
        printf("Not Found");
        return 0;
        
}