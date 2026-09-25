/*#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			x=abs(x);
			v[i]=x;
		}
		if(n==1){
			cout<<"Yes"<<endl;
			continue;
		}
		int Y=v[0];
		sort(v.begin(),v.end());
		int median_pos=(int)(n/2)-1;
		int pos;
		for(int i=0;i<n;i++){
			if(v[i]==Y){
				pos=i;
				break;
			}
		}
		if(pos<=median_pos) cout<<"Yes"<<endl;
		else{
			if((n-1-pos)>=(pos-median_pos)) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	}
}*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        if(n == 1){
            cout << "YES\n";
            continue;
        }
        
        int x = abs(a[0]);
        int smaller = 0;
        
        for(int i = 1; i < n; i++){
            if(abs(a[i]) < x){
                smaller++;
            }
        }
        
        if(smaller <= n/2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
