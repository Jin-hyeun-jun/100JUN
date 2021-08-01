#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    char chess[a][b];
    char chess1[a][b];
    char chess2[a][b];
    
    int c=0;
    int d=0;
    int e=10000;
    int f=10000;
    
   
    for(int i=0;i<8;i++)
    {
         for(int k=0;k<8;k++)
        {
            chess2[i][k]='B';
        }
    }
    for(int i=0;i<8;i++)
    {
        for(int k=0;k<8;k++)
        {
           if(i%2==0&&k%2==0)
           {
               chess2[i][k]='W';
           }
           if(i%2==1&&k%2==1)
           {
               chess2[i][k]='W';
           }
        }
    }
    
      for(int i=0;i<8;i++)
      {
        for(int k=0;k<8;k++)
        {
            chess1[i][k]='W';
        }
      }
    
    
    for(int i=0;i<8;i++)
    {
        for(int k=0;k<8;k++)
        {
           if(i%2==0&&k%2==0)
           {
               chess1[i][k]='B';
           }
           if(i%2==1&&k%2==1)
           {
               chess1[i][k]='B';
           }
        }
    }
    

  
   
    
    for(int i=0;i<a;i++)
    {
        for(int k=0;k<b;k++)
        {
            cin >> chess[i][k];
        }
    }
    
  /*  ==>여기서 틀림
   if(a==8||b==8)
   {
       for(int i=0;i<8;i++)
        {
            for(int k=0;k<8;k++)
            {
                    if(chess[i][k]!=chess1[i][k])
                    {
                        c++;
                    }
                    if(chess[i][k]!=chess2[i][k])
                    {
                        d++;
                    }
            }
        }
        if(c<d)
         {
             cout <<c;
         }
        else
            cout <<d;
        
        return 0;
   }
   */
   
    for(int i=0;i<=a-8;i++)//밑으로 안내려감
    {
        
        for(int k=0;k<=b-8;k++)
        {
            c=0;
            d=0;
            for(int p=0;p<8;p++)
            {
                for(int o=0;o<8;o++)
                {
                    
                    if(chess[i+p][o+k]!=chess1[p][o])
                    {
                        c++;
                    }
                    if(chess[i+p][o+k]!=chess2[p][o])
                    {
                        d++;
                    }
                    
                    
                  
                }
                  
                    
            }
           //cout<<"\n";
             //cout <<i <<" "<<k;
           //  cout<<"\n";
            if(c<=e)
            {
                e=c;
            }
            if(d<=f)
            {
                f=d;
            }
           
        }
    }
    
    if(e<f)
    {
        cout <<e;
    }
    else
        cout <<f;
        
        
        return 0;
        
    
   
}
