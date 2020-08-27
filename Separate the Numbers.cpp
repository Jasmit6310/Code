//Input : string of number
//Output : YES & first number (if string is made by contiguous number)
//		   NO (Otherwise)


#include <bits/stdc++.h>

using namespace std;

long long int beautiful(string s,int n,int *w)
{    
    long long int a,b,c,d,i,l,j,k,p,q,r,o;
    l=s.size();
    
        d=0 ;
        for(k=0;k<l-n;k=k+n)
        {
            a=0,b=0,c=0;
            for(j=k;j<(n+k);j++)
            {
                a=a*10+(s[j]-48);
                b=b*10+(s[j+n]-48);
                c=c*100+(s[j+n]-48)*10+(s[j+n+1]-48);
            }
            if(k==0)
                {
                	o=a;
				}
            
            q=a;
            r=0;
            for(i=0;q!=0;i++)
            {
                p=q%10;
                if(p==9)
                {
                    r++;
                }
                q=q/10;
            }

            if(i==r)
            {
                if(b==pow(10,i-1))
                {
                    if(c==pow(10,i))
                    {
                        b=c;
                    }
                }
                n++;
            }
            
            if(b-a==1)
            {
                d++;
            }
        }
        if(d==l/n-1)
        {
            *w=1;
        }
    return o;
}

int main()
{
    int q;
    cin >> q;
    
    for(int a0 = 0; a0 < q; a0++)
    {
        string s;
        cin >> s;
        
        int l,i,j,m,k,p,n;
		long long int o;
        int w=0;
        l=s.size();
        
        n=1;
        while(n<=l/2)
        {
            if(s[i]=='0')
            {
                m=0;
                break;
            }
            else
            {
			o=beautiful(s,n,&w);  
			m=w;              
                if(m==1)
                {
                    cout<<"YES "<<o<<"\n";
                    break;
                }
            }
            n++;
        }
        if(m!=1)
        {
            cout<<"NO\n";
        }
    }
        return 0;
}
