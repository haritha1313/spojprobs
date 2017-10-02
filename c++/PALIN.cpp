/******************************

achie27
AC, took me 2 damn days; worth it though

******************************/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

#define SIZE 1000001

int chk(int *ar, int b, int e){
	
	int i=b, j=e, c9=1, cpalin=1, m, n;
	m = e-b - (e+1-b)/2 + b;
	n = e-b - m + 2*b;
	
	while(i<=m && j>=n){
		
		if(ar[i]!=ar[j]){
			cpalin=0, c9=0;
			return 3;
		}

		if(ar[i]!=9 && ar[j]!=9)
			c9=0;

		i++, j--;
	}

	if(c9==1){
		return 1;
	}
	else if(cpalin==1){
		return 2;
	}
	else{
		return 3;
	}
}

int main(int argc, char const *argv[]){
	int t, a[SIZE]={0};
	cin>>t;
	while(t--){
		memset(a, SIZE, 0);
		int i, l, m, n, begins, res, j;

		string s;
		cin>>s;

		for(i=0, l=s.size(); i<l; i++){
			a[SIZE-i-1]=s[l-i-1]-'0';
		}

		begins=SIZE-i;
		a[begins-1]=-1;
		m = l - l/2 - 1 + begins;
		n = l - m - 1 + 2*begins;
		res=chk(a, begins, SIZE-1);
		if(res==1){
			cout<<1;
			for(i=0; i<l-1; i++)
				cout<<0;
			cout<<1<<endl;
		}
		else if(2==res){
			int x=n;
			if(a[x]==9){
				
				while(a[x]==9)
					a[x--]=0;
								
				if(a[x]==-1){
					a[x]=1;
					begins=x;
				}
				else
					a[x]++;

				i=begins;
				while(i<=n){
					a[SIZE-1-i+begins]=a[i];
					i++;
				}
			}
			else{
				if(a[n]>a[m])
					a[m]=a[n];
				else if(a[n]<a[m])
					a[n]=a[m];
				else
					a[n]=a[m]=a[n]+1;
			}
			
			for(i=begins; i<SIZE; i++)
				cout<<a[i];
			cout<<endl;
		}
		else{
			i=begins, j=SIZE-1;
			while(i<=m && j>=n){
				while(a[i]!=a[j]){
					if(a[i]>=a[j])			
						a[j]=a[i];	
					else{
						a[j]=a[i];
						int k=j-1;
						while(a[k]==9)
							a[k--]=0;
						a[k]++;
					}
				}
				i++, j--;
			}
			for(i=begins; i<SIZE; i++)
				cout<<a[i];
			cout<<endl;
		}
	}
}