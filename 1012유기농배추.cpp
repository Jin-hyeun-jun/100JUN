#include <iostream>
#include <cstring>
bool ve_pos[50][50]={false};
bool check_pos[50][50]={false};
int x_pos[4]={1,-1,0,0};
int y_pos[4]={0,0,-1,1};
int insect_num;
int width,length;
using namespace std;

void dfs(int ypos,int xpos)
{
    check_pos[ypos][xpos]=true;
   
    for(int i=0;i<4;i++)
    {
        int change_y =  ypos+y_pos[i];
        int change_x =  xpos+x_pos[i];
        if(change_y>=0&&change_x>=0&&change_y<length&&change_x<width&&check_pos[change_y][change_x]==false&&ve_pos[change_y][change_x]==true)
        {
            dfs(change_y,change_x);
        }
    }
}


int main() {
    int total_case,num,width_pos,length_pos;
    cin >> total_case;
    for(int i=0;i<total_case;i++)
    {
        insect_num=0;
        cin >> width>>length>>num;
     memset(ve_pos,0,sizeof(ve_pos));
     memset(check_pos,0,sizeof(check_pos));
        for(int k=0;k<num;k++)
        {
            cin >> width_pos >> length_pos;
           ve_pos[length_pos][width_pos]=true;
        }
       for(int i=0;i<length;i++)
       {
            for(int k=0;k<width;k++)
            {
                
                if(check_pos[i][k]==false&&ve_pos[i][k]==true)
                {
                    dfs(i,k);
                    insect_num++;
                }
            }
       }
        cout<< insect_num<<"\n";
    }
}
