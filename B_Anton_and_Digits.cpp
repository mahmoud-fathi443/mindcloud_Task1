#include <iostream>


using namespace std;
int main() {
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int min_digit = min(min(k2, k5), k6);
    int first_num = 256*min_digit;

    k2-=min_digit;
    k5-=min_digit;
    k6-=min_digit;

    min_digit = min(k3, k2);
    int second_num = 32*min_digit;

    int total_num = first_num + second_num;

    cout << total_num << endl;


    return 0;
}