#include<iostream>
using namespace std;
class array{
	public:
	int arr[5];
	array(){
		for(int i=0;i<5;i++){
			arr[i]=-1;
		}
	}
	void input(){
		for(int i=0;i<5;i++){
			cout<<"Enter any integer:";
			cin>>arr[i];
		}
	}
    void show(){
	    cout<<"array values are: "<<endl;
		for(int i=0;i<5;i++){
			cout<<arr[i]<<endl;
		}
	}
	int operator ==(array a){
		for(int i=0;i<5;i++){
			if(arr[i]!=a.arr[i]){
				return 1;
			}
		}
				return 0;
	}
};
int main() {
    array arr1;
    array arr2;

    cout << "Input values for first array:\n";
    arr1.input();

    cout << "Input values for second array:\n";
    arr2.input();

    cout << "\nValues of first array:\n";
    arr1.show();

    cout << "Values of second array:\n";
    arr2.show();

    if (arr1 == arr2) {
        cout << "The arrays are equal.\n";
    } else {
        cout << "The arrays are not equal.\n";
    }

    return 0;
}

