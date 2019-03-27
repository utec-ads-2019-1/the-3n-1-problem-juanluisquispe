#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#define FOR(i,n,m) for(int i=n;i<m;i++)
#define REP(i,n) FOR(i,0,n)
#define pb(x) push_back(x)
#define MAX 100
#define fst first
#define snd second
#define sz(x) int(x.size())
#define all(v) v.begin(),v.end()
#define mp(x,y) make_pair(x,y)

using namespace std;

long long int alg(long long int a){
	long long int counter = 1;
	while(a != 1){
		if(a % 2 == 1){
			a = 3*a + 1;
		}
		else
			a = a/2;
		counter++;
	}
	return counter;
}

int main() {
	long long int num1 , num2 , prevrun = 0;
	while(cin >> num1){
		prevrun = 0;
		cin >> num2;
		cout << num1 << ' ' << num2;
		for(int i = num1 ; i <= num2 ; i++){
			prevrun = max(prevrun , alg(i));
		}
		
		cout << ' ' << prevrun << endl;

	}
    return 0;
}