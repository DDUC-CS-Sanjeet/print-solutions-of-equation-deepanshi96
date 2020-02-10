#include <iostream>
using namespace std;

void pattern(int arr[],int start,int last,int c)
{ 
    
    if(start>last)
    {
        if(c==0)
        { 
            for(int i=0;i<=last;i++)
            cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
    else
    {
        for(arr[start]=c;arr[start]>=0;arr[start]--)
            pattern(arr,start+1,last,c-arr[start]);      
    }  
}

  int main()
  {
      int c, n;
      cout<<"\n x1+x2+x3+....+x4=C  ";
      cout<<"\n ENTER VALUE OF n:";
      cin>>n;
      cout<<"\n ENTER VALUE OF C:";
	  cin>>c;
	  if(n<0||c<0)
	   { 
	  	cout<<"\n invalid input...value of c and n should be positive for further operation";
	 	}   	
   	 else
		{
	 	  int arr[n];
	 	  cout<<"\n POSSIBLE SOLUTIONS:"<<endl;
          pattern(arr,0,n-1,c);
        }
      return 0;
  }
