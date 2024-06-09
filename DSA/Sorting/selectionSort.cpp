/* Time complexity = best case=O(n^2)
Avg case = worst case= O(n^2)
worst case= O(n^2)
 Space Complexity= O(n) ...if already array is given and
 Auxiliary Space used is = O(1) as no extra array is used
 Selection sort is Unstable sort means the relative ordering of the same elements change
*/


#include<iostream>
using namespace std;
int main(){
    int arr[]={15,8,10,-1,3,7,65};
    int n= sizeof(arr)/4;
    cout<<"The size is: "<<n<<endl;
    
    cout<<"The array elements before sorting are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n-1;i++){//Passes
    int mn=INT_MAX;
    int mindx=-1;
    bool flag=true;  //Array is sorted already assume
        for(int j=i;j<n;j++){//comparison
            if(mn>arr[j]){
                mn=arr[j];
                mindx=j;
                flag = false; // array is not sorted
            }
        }
        swap(arr[i],arr[mindx]);
        if(flag == true) break; // if after pass there is no need to sort then break
    }
    cout<<"The array elements after swapping are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}