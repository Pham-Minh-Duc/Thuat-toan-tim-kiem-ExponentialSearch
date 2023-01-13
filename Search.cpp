#include <bits/stdc++.h>
using namespace std;

int binarySearch(int ar[],int ,int , int );
int exponentialSearch(int ar[],int n,int x){
    if(ar[0] == x)
        return 0;

    int i = 1;
    while(i < n && ar[i] <= x)
        i = i * 2;
    
    return binarySearch(ar, i/2, min(i,n), x);
}

int binarySearch(int ar[], int l, int r, int x){
    if(r >= l){
        int mid = l + (r - l)/2; 

        if(ar[mid] == x){
            return mid;
        }
        else if(ar[mid] > x){
            return binarySearch(ar, l, mid-1, x);
        }
        else{
            return binarySearch(ar, mid + 1, r, x);
        }
    }
    return -1;
}

int main(){
   int ar[] = {2, 3, 4, 10, 40, 50, 54, 63}; 
   int n = sizeof(ar) / sizeof(ar[0]);
   int x = 40; 
   int result = exponentialSearch(ar, n, x); 
   cout<<"so 40 nam o vi tri: "<<result; 
    return 0;
}