#include <iostream>
using namespace std;

int main(){
    srand(time(NULL));

    const int N = 10; //Розмір масиву
    int arr[N]; //Оголошення масиву

    //Оголошення змінних для максимального та мінімального елементів
    int max = 0;
    int min = INT_MAX;

    //Заповнення масиву випадковими числами від 0 до 99
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
    
    //Пошук мінімального та максимального елементів
    for (int i = 0; i < N; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    cout <<"Max element: "<< max << endl;
    cout <<"Min element: "<< min << endl;
}

