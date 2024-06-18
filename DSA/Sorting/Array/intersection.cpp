/*
to find intersection between two arrays and print the common elements and print -1 if no commom present
the arrays are in non-drecreasing order
eg:{1,2,2,3}
{1,2,2,3}
=>2,2,3
*/

#include <iostream>
using namespace std;

bool found=false;
void aIntersection(int* arr,int asize) {
    int element;
    for(int i=0;i<asize;i++){
         element=arr[i];
    }
    cout<<element;
}

void bIntersection(int* brr,int bsize) {
    
    for(int i=0;i<bsize;i++){
         if (element==brr[i]){
            found=true;
         }
    }
    cout<<element;
}

int main() {
    int arr[] = {1, 2, 2, 3};
    int brr[] = {9, 2, 2, 3, 8};

    int asize = sizeof(arr) / sizeof(int);
    int bsize = sizeof(brr) / sizeof(int);

    cout << "The intersection is: ";
    aIntersection(arr ,asize);
    bIntersection(brr,bsize);
    
    return 0;
}
