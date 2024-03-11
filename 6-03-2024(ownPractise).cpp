#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
   //n is the number of elements in the array
//   int n, largest;
//		int n , num[100];
//	
//   		cout<<"Enter number of elements you want to enter: ";
//   
//	   	cin>>n;
//	   	for(int i = 0; i < n; i++) {
//	      cout<<"Enter Element "<<(i+1)<< ": ";
//	      cin>>num[i];
//	   	}
//	   // Storing first array element in "largest" variable
//		   for(int i = 1;i < n; i++) {
//		       
//		      if(num[0] < num[i])
//		         num[0] = num[i];
//		   } 
//	   cout<<"Largest element in array is: "<< num[0];

	int arr[] = {23,12,44,89};
//	int n; 
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int maxElement = 0 ; maxElement < n; maxElement++) 
		cout << arr[maxElement]  << " ";
 
		cout << "Is the largest element this " << *max_element(arr , arr+n);
   return 0;
}
