//author @Nishant

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	m %= (n * (n + 1) / 2);
    for (int i = 1; i <= n; ++i){
        if (m < i){
            break;
        }
        m -= i;
    }
	cout << m;
	return 0;
}