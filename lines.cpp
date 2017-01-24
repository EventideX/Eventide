#include<iostream>
#include<cstring>
#include<fstream>
#include<streambuf>
using namespace std;
ifstream a("file.txt");  
string s((istreambuf_iterator<char>(a)),istreambuf_iterator<char>()); 
int main()
{
	int i,j,k,n,m,x,y;
	i=0;
	j=0;
	k=0;
	n=0;
	m=s.length();
	while (i<m)
	{
		if ((s[i]==' ')||(s[i]=='\r')||(s[i]=='\t'))
		{
			i++;
			continue;
		}
		if (s[i]=='\n')
		{
			if (j==1)
			{
				n++;
				j=0;
			}
			i++;
			continue;
		}
		if (s[i]=='\"')
		{
			while (1>0)
			{
				i++;
				if (i>=m) break;
				if (s[i]=='\"')
				{
					x=i;
					y=0;
					while (1>0)
					{
						x--;
						if ((s[x]=='\\')&&(x>=0)) y++;
						else break;
					}
					if (y%2==0) break;
				}
			    if (s[i]=='\n')
			    {
			    	n++;
		    		j=1;
		    	}
	     	}
	    	j=1;
	    	i++;
	    	continue;
        }
		if ((s[i]=='/')&&(s[i+1]=='/')&&(i<m-1))
		{
			if (j==1)
			{
				n++;
				j=0;
			}
			i++;
			while ((i<m)&&(s[i]!='\n')) i++;
			i++;
			continue;
	    }
	    if ((s[i]=='/')&&(i<m-1))
        {
			if (s[i+1]=='*')
			{
				i++;
				while (1>0)
				{
					i++;
					if (i>=m) break;
					if (s[i]=='\n')
					{
						if (k==0)
						{
							if (j==1)
							{
								n++;
								j==0;
							}
							k==1;
						}
					}
					if ((s[i]=='*')&&(i<m-1))
					{
						if (s[i+1]=='/')
						{
							i++;
							break;
						}
					}
				}
				k==0;
				i++;
				continue;
			}
		}
	    j=1;
	    i++;
    }
    if (j==1) n++;
    cout<<n;
    return 0;
}
