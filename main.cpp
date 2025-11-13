#include <iostream>
#include<vector>
using namespace std;




    //problem1

/*
int findMax(int *arr, int size) {
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    cout << max << endl;
}

int main() {

    int heights[] = {150, 165, 172, 160, 180};

    findMax(heights, sizeof(heights) / sizeof(int));

    return 0;
}

*/


    //problem2

/*
int main() {

    int a,b; cin >> a >> b;

    int *ptrA, *ptrB;
    ptrA = &a;
    ptrB = &b;

    cout << ptrA << " " << ptrB << endl;

    return 0;
}

*/


    //program3

/*
int main() {

    int numsize; cin >> numsize;
    vector<int> arr(numsize);
    int *ptrArr = &arr[0];

    for (int i = 0; i < numsize; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < numsize; i++) {
        if (ptrArr < &arr[i] ) {
            ptrArr = &arr[i];
        }
    }

    cout << *ptrArr << endl;
}

*/

    //problem4

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int* ptr = arr; 

    cout << "Pointer array elements: ";

    
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " "; 
    }

    cout << endl;
    return 0;
}



    //problem5

/*
int main() {

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;

    for(int i=0;i<10;i++) {
        cout<< "value: " <<*(ptr+i) << " address: " << ptr+i <<endl;
    }
}

*/


    //problem6

/*
int decoderMessage(int *secret) {
    cout<<*secret<<endl;
}

int main() {
    int message; cin >> message;
    int *ptrMessage;
    ptrMessage = &message;

    decoderMessage(ptrMessage);

    return 0;
}

*/

    //problem7

/*
float calculateAverage(int *arr, float size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];

    }

    return sum / size;
}


int main() {
    int scores[] = {88, 76, 90, 85, 92};
    int *ptr = scores;

    cout << calculateAverage(ptr,sizeof(scores)/sizeof(int));

    return 0;

}

*/



    //problem8

/*
int main() {
    int treasures[] = {10, 20, 30, 40, 50, 60};
    int *ptr = treasures;
    int size = sizeof(treasures)/sizeof(treasures[0]);


    cout << *(ptr + size-1) << endl;


}

*/

    //problem9

/*
int main() {

    int score = 75;
    int *ptr = &score;
    cout << *ptr << endl;
    cout << (*ptr+10) << endl;
}

*/

    //problem10

/*

void swap(int *arr, int size) {

    int *first = arr;
    int *last = arr+size-1;

    while(first < last) {
    int temp = *first;
        *first = *last;
        *last = temp;
        first++;
        last--;
    }

};

int main() {
    int magic[5] = {1,2,3,4,5};

    for(int i=0;i<5;i++) {
        cout<<magic[i]<<endl;
    }


    cout << "*********** Swap values************" <<endl;
    swap(magic, sizeof(magic)/sizeof(magic[0]));
    for(int i=0;i<5;i++) {
        cout<<magic[i]<<endl;
    }

}

*/
