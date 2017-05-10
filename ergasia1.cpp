#include<iostream>
using namespace std;
int main()
{
    int A [2] [2];
    for(int i=0; i<2;i++)
    {
        for(int j=0; j<2; j++)
        {
        	cout << "give me A("<<i+1<<","<<j+1<<")"<<endl;
            cin >>A[i][j];
        }
        
    }
    
    int B [2] [2];
    for(int i=0; i<2;i++)
    {
        for(int j=0; j<2; j++)
        {
        	cout << "give me B("<<i+1<<","<<j+1<<")"<<endl;
            cin >>B[i][j];
        }
        
    }
    
    
  //  for(int i=0; i<2;i++)
   // {
   //     for(int j=0; j<2; j++)
   //     {
   //     	cout<< A[i][j]<<endl;
   //     	cout<<B[i][j]<<endl;
   //     }
   // }
        	
    cout<<"\n\nMultiplying two matrices...\n\n";
    
    int C[2][2]={0};
   
    
    for(int i=0; i<2;i++)
    {
        for(int j=0; j<2; j++)
        {
			for(int k=0; k<2; k++)
			{
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
			}
        	cout << "C("<<i+1<<","<<j+1<<")="<<C[i][j]<<endl;
        }
        
    }
    return 0;
    
}
