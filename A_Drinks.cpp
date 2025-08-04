#include <iostream>

using namespace std;

int main(){

    int n;
    double sum = 0, cocktail_perc;
    

    cin >> n;
    for(int i = 0; i < n; i++){
        int drink_percentage;
        cin >> drink_percentage;
        sum += drink_percentage;
    }

    if (n > 0) {
        cocktail_perc = sum / n;
        cout << cocktail_perc << endl;
    }
    
    return 0;
}