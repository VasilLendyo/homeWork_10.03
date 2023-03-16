#include <iostream>
using namespace std;

int main(){
    const int N = 10; //розмір масиву
    double arr[N]; //створення масиву

    //заповнення масиву випадковими числами в діапазоні [-10, 10]
    for (int i = 0; i < N; i++) {
        arr[i] = (double)rand() / RAND_MAX * 20 - 10;
        cout << arr[i] << endl;
    }

    //1)Сума від'ємних елементів
    double negativeSum = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) {
            negativeSum = arr[i];
        }
    }
    cout << "Sum of negative elements: " << negativeSum << endl;
    
    //2)Добуток елементів, що розташовані між min і max елементами
    double min = arr[0], max = arr[0];
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }
    double product = 1;  
    if (minIndex < maxIndex) {
        for (int i = minIndex + 1; i < maxIndex; i++) {
            product *= arr[i];
        }
    }
    else {
        for (int i = maxIndex + 1; i < minIndex; i++) {
            product *= arr[i];
        }
    }
    cout << "Product of elements between min and max: " << product << endl;


    //3)Добуток елементів з парними номерами
    double evenProduct = 1;
    for (int i = 0; i < N; i += 2) {
        evenProduct *= arr[i];
    }
    cout << "Product of elements with even indices: " << evenProduct << endl;


    //4)Сума елементів, що розташовані між першим та останнім від'ємним елементами
    int firstNegativeIndex = -1, lastNegativeIndex = -1;
    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) {
            if (firstNegativeIndex == -1) {
                firstNegativeIndex = i;
            }
            lastNegativeIndex = i;
        }
    }
    double betweenNegativeSum = 0;
    if (firstNegativeIndex != -1 && lastNegativeIndex != -1 && firstNegativeIndex != lastNegativeIndex) {
        if (firstNegativeIndex < lastNegativeIndex) {
            for (int i = firstNegativeIndex + 1; i < lastNegativeIndex; i++) {
                betweenNegativeSum += arr[i];
            }
        }
        else {
            for (int i = lastNegativeIndex + 1; i < firstNegativeIndex; i++) {
                betweenNegativeSum += arr[i];
            }
        }
    }
    cout << "Sum of elements between first and last negative elements: " << betweenNegativeSum << endl;
}

