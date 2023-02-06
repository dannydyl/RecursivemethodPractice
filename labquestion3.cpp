//
//  main.cpp
//  DongyunLeeLabWeek2Q3
//
//  Created by Dongyun Lee on 2023/02/04.
//


#include <iostream>


using namespace std;


class arr{
public:
	arr();
    void DisplayArray(float b[], int current_index, int max_element);
    void Inverse_order(float b[], int current_index, int max_element);
    void FindSmallest(float b[], int current_index, int max_element);
    void FindLargest(float b[], int current_index, int max_element);
    void SumofAll(float b[], int current_index, int max_element);
    void CheckValue(float b[], int current_index, int max_element);
    void CountPositive(float b[], int current_index, int max_element);
    
private:
    signed int MaxValues;
    signed int NrValues;
    float sum;
    int PositiveNumber;
    
};

arr::arr(){
	int current_index = 0;
}
// ex) [6, 5, 7, 3, 4]
void arr::FindSmallest(float b[], int current_index, int max_element){
	float smallest = b[0];
	if(current_index == max_element){
		cout << "Smallest element in the array is: " << smallest << endl;
	}
	if(b[current_index] <= smallest){
		smallest = b[current_index];
		arr::FindSmallest(b, current_index+1, max_element);
	}
	else{
		arr::FindSmallest(b, current_index+1, max_element);
	}
	
	
}

void arr::FindLargest(float b[], int current_index, int max_element){
	float largest = b[0];
	if(current_index == max_element){
		cout << "Largest element in the array is: " << largest << endl;
	}
	if(b[current_index] >= largest){
		largest = b[current_index];
		arr::FindLargest(b, current_index+1, max_element);
	}
	else{
		arr::FindLargest(b, current_index+1, max_element);
	}
}
	

void arr::SumofAll(float b[], int current_index, int max_element){
	
	
	if(current_index == max_element){
		cout << "The sum of all elements in the array is: " << sum << endl;
		return;
	}
	else{
		sum = sum + b[current_index];
		arr::SumofAll(b, current_index+1, max_element);
	}
	
}

void arr::Inverse_order(float b[], int current_index, int max_element){
	if(current_index == max_element-1){
		cout << b[current_index] << " ";
	}
	else{
		arr::Inverse_order(b, current_index+1, max_element);
		cout << b[current_index] << " ";
	}
}

void arr::DisplayArray(float b[], int current_index, int max_element){
	if(current_index == max_element-1){
		return;
	}
	else{
		cout << b[current_index] << " ";
		arr::DisplayArray(b, current_index+1, max_element);
		
	}
}

void arr::CheckValue(float b[], int current_index, int max_element){
	if(b[current_index] == ) // need to work on more
}

void arr::CountPositive(float b[], int current_index, int max_element){
	
	if(current_index == max_element){
		cout << "The number of positive values are: " << PositiveNumber << endl;
		return;
	}
	else{
		if(b[current_index] > 0){		
			PositiveNumber++;
		}
		arr::CountPositive(b, current_index+1, max_element);
		
	}
}


int main() {
	arr Array;
    float a[] = {3, -2, 6, 1, 8};
    
    //Array.DisplayArray(a, 0, 5);
    //Array.Inverse_order(a, 0, 5);
    //Array.SumofAll(a, 0, 5);
    Array.CountPositive(a, 0, 5);
    return 0;
}


