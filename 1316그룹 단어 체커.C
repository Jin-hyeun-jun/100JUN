#include<stdio.h>
#include<string.h>
int main()
{
    int a,b=0,c,d=0,e;
    char arr[101];
    int arr1[30];
    scanf("%d",&a);
    e=a;
    for(int k=0;k<a;k++)
    {
        scanf("%s",arr);
        c=strlen(arr);
        for(int i=0;i<30;i++)
        {
            arr1[i]=0;
        }
        /*
          for(int i=0;i<c;i++)
        {
            
            arr[i]=arr[i]-97;
            
            arr1[arr[i]]++;
        }
        */
        //printf("%d %d %d\n",arr1[0],arr1[1],arr1[2]);
        //printf("%d\n",e);
        for(int i=0;i<c;i++)
        {
            arr[i]=arr[i]-97;
            
            arr1[arr[i]]++;
            if(arr1[arr[i]]>1&&arr[i]!=arr[i-1])
            {
               e--;
                // printf("%d\n",e);
                break;
            }
            //printf("%d\n",a);
            
        }
        //printf("1\n");
   
        
    }
   
    printf("%d\n",e);
    
    return 0;
}
//i != i+1 i+2~마지막