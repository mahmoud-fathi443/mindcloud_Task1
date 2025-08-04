#include <iostream>
#include <numeric>

using namespace std;
int main(){
    int test_cases;
    cin >> test_cases;
    

    for(int i = 0; i < test_cases; i++){
        int n;
        cin >> n;
        

        int max_gcd = 0;

        for(int i = 1; i <= n; i++){
            for(int j = i+1; j <= n; j++){
                if (gcd(i, j) > max_gcd){
                    max_gcd = gcd(i, j);
                }
            }
        }

        cout << max_gcd << endl;
    }
       
   

}
