#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){

string s;
cin>>s;
int i, j, count=0;

char c1 = 'a';

for(i=0; i<s.length(); i++){

	int ans = abs(s[i] - c1);
	int ans2 = 26 - ans;

	count += min(ans, ans2);

	c1 = s[i];



 }

cout<<count<<endl;



}
