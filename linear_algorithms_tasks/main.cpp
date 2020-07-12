#include <iostream>
using namespace std;

//Два максимума.
//Дан массив. Вам требуется определить позиции первого максимума и второго максимума.
const int MAXN = 10000500;
const int MAXVALUE = 0;
int n;
long long arr[MAXN];

long long NextRand(int mod, long long a,  long long b,  long long cur){
    cur = (cur*a + b) % mod;
    return cur;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
     long long cur, a, b;
    cin >> cur >> a >> b;

    for(int i = 0; i < n; i++){
        arr[i] = NextRand(1791791791, a, b, cur);
        cur = arr[i];
    }

    long long first_max = -1;
    long long second_max = -1;
    int indmax = -1;
    int firstindex = -1;
    int secondindex = -1;
//first max
    for(int i = 0; i < n; i++){
        //cout<<arr[i]<<" "<<first_max<<"\n";
        if (arr[i] > first_max){
            first_max = arr[i];
            firstindex = i;
            indmax = i;
        }
    }
    for(int i = 0; i < n; i++){
        if (i != indmax) {
            if (arr[i] > second_max) {
                secondindex = i;
                second_max = arr[i];
            }
        }
    }
    cout<< firstindex + 1<<" "<< secondindex+1;
    return 0;
}
