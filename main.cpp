#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <bits/stdc++.h>
using namespace std; 
int main()
{
  cout<<"欢迎来到餐厅管理系统，去选择以下两种就餐方式,(1):堂食 (2):外卖"<<endl;
  string  a;
       cin>>a;
   string  b="./test.sh ";
       b=b+a;
      const char* d=b.c_str();;
        FILE *fp;
        char buffer[1024]={0};
        fp=popen(d,"r");
        fread(buffer,1,sizeof(buffer),fp);
        if(buffer[0]=='1' ){ 
        cout<<"你选择了堂食";}
else if(buffer[0]=='2'){cout<<"你选择了外卖";} 
pclose(fp);
        return 0;
}
