#include <iostream>
using namespace std;

int main(){
    //створюємо масив доходів за кожний місяць
    int income[12];

    //зчитуємо дохід за кожен місяць від користувача
    cout << "Enter income for each month: " << endl;
    for (int i = 0; i < 12; i++) {
        cout << "Month " << i + 1 << ": " << endl;
        cin >> income[i];
    }

    //зчитуємо початковий і кінцевий місяць діапазону, для якого треба знайти максимальний і мінімальний дохід
    int fromMonth, toMonth;
    cout << "Enter start and end month for range: ";
    cin >> fromMonth >> toMonth;

    //ініціалізуємо максимальний і мінімальний дохід першим значенням в заданому діапазоні
    int maxMonth = fromMonth, minMonth = fromMonth;
    int maxIncome = income[fromMonth-1];
    int minIncome = income[fromMonth-1];
    
    //перебираємо всі місяці в заданому діапазоні і знаходимо максимальний і мінімальний дохід
    for (int i = fromMonth; i <= toMonth; i++) {
        if (income[i-1] > maxIncome) {
            maxIncome = income[i-1];
            maxMonth = i;
        }
        if (income[i-1] < minIncome) {
            minIncome = income[i-1];
            minMonth = i;
        }
    }
    
    //виводимо результат
    cout << "Maximum income of " << maxIncome << " was in month " << maxMonth << endl;
    cout << "Minimum income of " << minIncome << " was in month " << minMonth << endl;
}