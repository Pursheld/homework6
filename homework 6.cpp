#include <iostream>
#include <stack>  
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    stack <int> steck;  

    int i = 0;
    int x;
    cout << "Введите длинну массива: " << endl;
    cin >> x;
    cout << "Введите "<< x <<" любых целых чисел: " << endl; 

    while (i != x) {
        int a;
        cin >> a;

        steck.push(a);  
        i++;
    }

    if (steck.empty()) cout << "Стек не пуст";  

    cout << "Верхний элемент стека: " << steck.top() << endl; 
    cout << " " << endl;
    cout << "Удаляем Верхний элемент стека " << endl;

    steck.pop();  
    cout << " " << endl;
    cout << "Новый верхний элемент: " << steck.top(); 
                                                             
}