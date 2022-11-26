#include <iostream>
#include <vector>
using namespace::std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int N;
    int x;
    cout << "Введите N: " << endl;
    cin >> N;
    vector <int> v1;

    cout << "Введите x: " << endl;
    cin >> x;
    for (int j = 0; j<N; j++)
    {
        int temp;
        cin >> temp;
        bool isPrime = true;
        if (temp == 0 || temp== 1) {
            isPrime = false;
        }
        else {
            for (int i = 2; i <= temp/2; ++i) {
                if (temp% i == 0) { 
                    isPrime = false;
                    break; 
                }
            }
        }
        if (isPrime) {
            v1.push_back(x);
        }
        else {
            v1.push_back(temp);
        }


    }
    auto it = v1.begin();
    for (it = v1.begin(); it != v1.end(); it++) {
        cout << *it<<endl;
    }
}