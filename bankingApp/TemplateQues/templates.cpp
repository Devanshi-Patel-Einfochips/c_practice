#include<string>
#include<iostream>
#include<utility>
#include<climits>
using namespace std;

// template <typename T>
// T arraySum(const T *arr, T arrSize){
//      T sum=0;
//     for (int i =0;i<arrSize;i++){
//         sum += arr[i];
//     }
// return sum;    
// }
template <typename T>

pair<T,T> minmax(const T *arr, size_t arrSize){
    //    T min = std::numeric_limits<T>::max();
    // T max = std::numeric_limits<T>::lowest();

 int min INT_MIN;
    int max INT_MAX;
    for (int i =0;i<arrSize;i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    pair<T,T> ans = make_pair(min,max);
return ans;    
}
int main(){
    int num;
    cout << "ENTER NUMBER OF ELEMNTS: " << endl;
    cin >> num;
        int *arr = new int[num];
        cout << "ENTER ELEMENTS: " << endl;
    for(int i=0;i<num;i++){
        cin >> arr[i];
    }

    size_t arrSize = sizeof(arr) / sizeof(arr[0]);
    // int ans  = arraySum(arr, num);
       
        pair<int,int> ans  =  minmax(arr, arrSize);

    cout << "min: " << ans.first << "max: "  << ans.second << endl;
    return 0;
}