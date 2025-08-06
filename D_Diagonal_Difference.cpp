#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int  diagonalDifference(vector<vector<int>> &arr){
    int primary_diagonal = 0;
    int secondary_diagonal = 0;
    int abs_diff;

    for(int i = 0 ; i < arr.size(); i++){
        for(int j = 0; j < arr.size(); j++){
            if(i == j) primary_diagonal+= arr[i][j];
            if((i+j) == (arr.size() - 1)) secondary_diagonal+= arr[i][j];
        }
        
    }

    abs_diff = abs(primary_diagonal - secondary_diagonal);
    return abs_diff;
}

int main(){
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }


    int abs_diff = diagonalDifference(arr);
    cout << abs_diff << endl;
    

    return 0;
}