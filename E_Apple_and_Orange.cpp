#include <iostream>

using namespace std;


void countApplesAndOranges(int s, int t, int a, int b, int apples[], int oranges[], int m, int n){
    int apple_num = 0;
    int orange_num = 0;


    for(int i = 0; i < m; i++){
        if((a+apples[i]) >= s && (a+apples[i]) <= t ) apple_num++;
    }

    for(int i = 0; i < n; i++){
        if((b+oranges[i]) >= s && (b+oranges[i]) <= t ) orange_num++;
    }
    
    cout << apple_num << endl;
    cout << orange_num << endl;

}

int main(){
    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;

    int apples[m];
    int oranges[n];

    for(int i = 0; i < m; i++){
        cin >> apples[i];
    }
    for(int j = 0; j < n; j++){
        cin >> oranges[j];
    }

    countApplesAndOranges(s, t, a, b, apples, oranges, m, n);

    return 0;
    
}