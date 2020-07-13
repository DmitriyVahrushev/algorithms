#include <iostream>
#include <algorithm>
using namespace std;

////Два максимума.
////Дан массив. Вам требуется определить позиции первого максимума и второго максимума.
//const int MAXN = 10000500;
//const int MAXVALUE = 0;
//int n;
//long long arr[MAXN];
//
//long long NextRand(int mod, long long a,  long long b,  long long cur){
//    cur = (cur*a + b) % mod;
//    return cur;
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> n;
//     long long cur, a, b;
//    cin >> cur >> a >> b;
//
//    for(int i = 0; i < n; i++){
//        arr[i] = NextRand(1791791791, a, b, cur);
//        cur = arr[i];
//    }
//
//    long long first_max = -1;
//    long long second_max = -1;
//    int indmax = -1;
//    int firstindex = -1;
//    int secondindex = -1;
////first max
//    for(int i = 0; i < n; i++){
//        //cout<<arr[i]<<" "<<first_max<<"\n";
//        if (arr[i] > first_max){
//            first_max = arr[i];
//            firstindex = i;
//            indmax = i;
//        }
//    }
//    for(int i = 0; i < n; i++){
//        if (i != indmax) {
//            if (arr[i] > second_max) {
//                secondindex = i;
//                second_max = arr[i];
//            }
//        }
//    }
//    cout<< firstindex + 1<<" "<< secondindex+1;
//    return 0;
//}

///Префиксные суммы
///В этой задаче вам нужно будет много раз отвечать на запрос <<Найдите сумму чисел на отрезке в массиве

//const int MAXN = 10000500;
//const int MAXVALUE = 0;
//int n;
//long long arr[MAXN], partSum[MAXN];
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int q;
//
//    cin>>n>>q;
//    partSum[0] = 0;
//    for(int i = 1; i <= n; ++i){
//        cin >> arr[i];
//        partSum[i] = partSum[i - 1] + arr[i];
//    }
//
//    for (int i = 0; i < q; ++i) {
//        int l, r;
//        cin >> l >> r;
//        cout << partSum[r] - partSum[l - 1] << "\n";
//        }
//    return 0;
//}

///Максимальная сумма
///В этой задаче вам требуется найти непустой отрезок массива с максимальной суммой.

const int MAXN = 10000500;
const int MAXVALUE = 10005000;
int n;
long long arr[MAXN];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>n;

    long long max_sum = -MAXVALUE;
    long long sum = 0;
    long long min_sum = 0;
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        sum+= arr[i];
        max_sum = max(max_sum, sum - min_sum);
        min_sum = min(min_sum, sum);
    }

    cout << max_sum;
    return 0;
}