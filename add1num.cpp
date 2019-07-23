// Given a non-negative number represented as an array of digits, add 1 to the number ( increment the number represented by the digits ).
// The digits are stored such that the most significant digit is first element of array.

// EDGE CASES
// 1 2 3 -> 1 2 4
// 9 9 9 - > 1 0 0 0
// 8 9 9 -> 9 0 0
// 1 0 9 -> 1 1 0
// 9 -> 1 0
#include <iostream>
#include <vector>

using namespace std;

void sumNum(vector<int> &arr){
	bool keepIt = 1;
	int i = 1;
	int size = arr.size();
	// if last digit is lower than 9, just add 1
	if(arr[size-1] != 9){
		arr[size-1] = arr[size-1] + 1;
	}
	else
		while(keepIt){
			arr[size-i] = 0;
			if(size == i){
				arr[0] = arr[0] + 1;
				if(arr[0] == 1){
					arr.push_back(0);
					keepIt = 0;
					// push back a new number
				}
			}
			else {
			    if((arr[size-i-1] + 1) != 10){
					keepIt = 0;
					arr[size-i-1] += 1;
				}
				else
					i++;
			}				
		}	
}

int main(){
	vector<int> arr;
	arr.push_back(9);
	arr.push_back(9);
	arr.push_back(9);
	sumNum(arr);
	for(int i = 0; i < 4; i++){
	    cout << arr[i] << " ";
	}
}