//vector.cpp
#include <iostream>
#include <vector>
using namespace std;

void printMemVec(vector<int> v);
void incVecBy10(vector<int> & v);

int main(){
    const int SIZE = 5;
    int arr[SIZE];
    for(int i = 0; i < SIZE; i++){
        arr[i] = 100 + i;
    }

    printf("Before -------------------------\n");
    printMemArr(arr,SIZE);

    //change the value
    incArrBy10(arr,SIZE);
    printf("After -------------------------\n");
    printMemArr(arr,SIZE);

}

void printMemVec(vector<int> v){
    printf("Vector - Each int is worth %lu bytes\n", sizeof(v[0]));
    for(int i = 0; i < v.size(); i++){
        printf("Value %i at Memory Location: %p\n", v[i], &v[i]);
    }
}

void incVecBy10(vector<int> & v){
    for(int i = 0; i < v.size(); i++){
        v[i] += 10;
    }
}