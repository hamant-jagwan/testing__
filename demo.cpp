# include <iostream>

using namespace std;

int main(){
    int arr[] = {1,35,6,3,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i =0 ; i <n;i++){
        cout<< "the value in the index " << i << " is " << arr[i]<<endl;
    }
    cout << "first line" << endl;
    cout << "hello doston" << endl;
    cout << "second line" << endl;
    return 0;
}