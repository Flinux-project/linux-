#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include"mysql.h"
#include"split.h"
#include"to_string.h"
#include <bits/stdc++.h>
using namespace std; 
int main()
{
  string restaurant_id;
  int flag=1;
  string content;
  string time;
  string address;
  string phone;
  string meal_id;
  float total;
  string order_meal;
  string sql_com="select menu_name,price from menu_1 where menu_id=";
  string sql_com2="select menu_name,price from menu_2 where menu_id=";
  string sql_com3="select menu_name,price from menu_3 where menu_id=";
  cout<<"欢迎来到餐厅管理系统，去选择以下两种就餐方式,(1):堂食 (2):外卖"<<endl;
  string dinning_style ;
       cin>>dinning_style;
   string  command="./test.sh ";
      command+=dinning_style; 
      const char* command_dinning =command.c_str();
        FILE *fp;
        char buffer[1024]={0};
        fp=popen(command_dinning,"r");
        fread(buffer,1,sizeof(buffer),fp);
       while(buffer[0]!='1' and  buffer[0]!='2'){
       cout<<"不能选择除1，2以外的就餐方式"<<buffer[0]<<endl;
       cin>>dinning_style;
      command="./test.sh ";
      command+=dinning_style;
       const char* command_dinning =command.c_str();
        fp=popen(command_dinning,"r");
        fread(buffer,1,sizeof(buffer),fp);
}
if(buffer[0]=='1'){
cout<<"你选择了堂食,请输入你的名字:"<<endl;
flag=1;
}
else{
cout<<"你选择了外卖,请输入你的名字:"<<endl;
flag=2;}
pclose(fp);
string name;
cin>>name;
cout<<"请选择你要点哪个餐厅："<<endl;
    	MYSQL conn;
    	MYSQL_RES *res_set;
    	MYSQL_ROW row;
    
    	mysql_init(&conn);
    
    	if (!mysql_real_connect(&conn, "localhost", "root", "123", "mysql", 3306, NULL, 0)){
    		fprintf(stderr, "Failed to connect to database: Error: %s\n",
    			mysql_error(&conn));
    	}
    	else{
                int status = mysql_query(&conn, "set names utf8");

    		 status = mysql_query(&conn, "SELECT * FROM restaurant");
    		res_set = mysql_store_result(&conn);
    		int count = mysql_num_rows(res_set);
    		while ((row = mysql_fetch_row(res_set)) != NULL){
    			for (int i = 0; i<mysql_num_fields(res_set); i++){
    				printf("%s \t", row[i] != NULL ? row[i] : "NULL");
    			}
    			printf("\n");
    		}
              cin>>restaurant_id;
      command="./test.sh ";
      command+=restaurant_id;
      const char* command_restaurant=command.c_str();
        FILE *fp;
        char buffer[1024]={0};
        fp=popen(command_restaurant,"r");
        fread(buffer,1,sizeof(buffer),fp);
       while(buffer[0]!='1' and  buffer[0]!='2' and buffer[0]!='3'){
       cout<<"不能选择除1，2,3以外的编号"<<endl;
       cin>>restaurant_id;
      command="./test.sh ";
      command+=restaurant_id;
       const char* command_restaurant=command.c_str();
        fp=popen(command_restaurant,"r");
        fread(buffer,1,sizeof(buffer),fp);
}
if(buffer[0]=='1'){
cout<<"你选择的是";
int status = mysql_query(&conn, "set names utf8");

                 status = mysql_query(&conn, "SELECT restaurant_name FROM restaurant where restaurant_id=1");
                res_set = mysql_store_result(&conn);
                int count = mysql_num_rows(res_set);
                while ((row = mysql_fetch_row(res_set)) != NULL){
                        for (int i = 0; i<mysql_num_fields(res_set); i++){
                                printf("%s \t", row[i] != NULL ? row[i] : "NULL");
}}
cout<<endl<<"菜单： 编号       菜名           价格(请选择要点的菜编号)"<<endl;
status = mysql_query(&conn, "SELECT *  FROM menu_1");
                res_set = mysql_store_result(&conn);
                count = mysql_num_rows(res_set);
                while ((row = mysql_fetch_row(res_set)) != NULL){
                        for (int i = 0; i<mysql_num_fields(res_set); i++){
                                printf("\t %s ", row[i] != NULL ? row[i] : "NULL");}
cout<<endl;}
while(cin>>meal_id){
    order_meal=order_meal+" "+meal_id;
    if(cin.get()=='\n') break;
}
 vector<string> result = split(order_meal);
    string order_meal1=to_String1(count)+order_meal;
 command="./check_menu.sh ";
      command+=order_meal1;
        const char* command_restaurant1=command.c_str();
        FILE *fp;
        char buffer[1024]={0};
        fp=popen(command_restaurant1,"r");
        fread(buffer,1,sizeof(buffer),fp);
              while(buffer[0]!='1'){
       cout<<"输入有误请重新输入(不能输入菜单以外的id或菜单只能以单空格分开):"<<endl;
order_meal="";
while(cin>>meal_id){
    order_meal=order_meal+" "+meal_id;
    if(cin.get()=='\n') break;
}
   result = split(order_meal);
    
    order_meal1=to_String1(count)+order_meal;
      command="./check_menu.sh ";
      command+=order_meal1;
       const char* command_restaurant=command.c_str();
        fp=popen(command_restaurant,"r");
        fread(buffer,1,sizeof(buffer),fp);
}
    for(size_t i = 1; i < result.size(); i++)
            {sql_com+=result[i];
   const char* sql_com1=sql_com.c_str();
status = mysql_query(&conn, sql_com1);
                res_set = mysql_store_result(&conn);
                 count = mysql_num_rows(res_set);
                while ((row = mysql_fetch_row(res_set)) != NULL){
                                printf("一份 %s ", row[0] != NULL ? row[0] : "NULL");
content=content+" 一份 "+row[0];
total=total+atof(row[1]);

cout<<endl;}
sql_com="select menu_name,price from menu_1 where menu_id=";

}
}
else if(buffer[0]=='2'){
cout<<"你选择的是";
int status = mysql_query(&conn, "set names utf8");

                 status = mysql_query(&conn, "SELECT restaurant_name FROM restaurant where restaurant_id=2");
                res_set = mysql_store_result(&conn);
                count = mysql_num_rows(res_set);
                while ((row = mysql_fetch_row(res_set)) != NULL){
                        for (int i = 0; i<mysql_num_fields(res_set); i++){
                                printf("%s \t", row[i] != NULL ? row[i] : "NULL");
}}
cout<<endl<<"菜单： 编号       菜名           价格(请选择要点的菜编号)"<<endl;
status = mysql_query(&conn, "SELECT *  FROM menu_2");
                res_set = mysql_store_result(&conn);
                int count = mysql_num_rows(res_set);
                while ((row = mysql_fetch_row(res_set)) != NULL){
                        for (int i = 0; i<mysql_num_fields(res_set); i++){
                                printf("\t %s ", row[i] != NULL ? row[i] : "NULL");}
cout<<endl;}
while(cin>>meal_id){
    order_meal=order_meal+" "+meal_id;
    if(cin.get()=='\n') break;
}
 vector<string> result = split(order_meal);
string order_meal1=to_String1(count)+order_meal;
 command="./check_menu.sh ";
      command+=order_meal1;
        const char* command_restaurant1=command.c_str();
        FILE *fp;
        char buffer[1024]={0};
        fp=popen(command_restaurant1,"r");
        fread(buffer,1,sizeof(buffer),fp);
              while(buffer[0]!='1'){
       cout<<"输入有误请重新输入(不能输入菜单以外的id或菜单只能以单空格分开):"<<endl;
order_meal="";
while(cin>>meal_id){
    order_meal=order_meal+" "+meal_id;
    if(cin.get()=='\n') break;
}
   result = split(order_meal);
    
    order_meal1=to_String1(count)+order_meal;
      command="./check_menu.sh ";
      command+=order_meal1;
       const char* command_restaurant=command.c_str();
        fp=popen(command_restaurant,"r");
        fread(buffer,1,sizeof(buffer),fp);
}
    for(size_t i = 1; i < result.size(); i++)
            {sql_com2+=result[i];
   const char* sql_com1=sql_com2.c_str();
status = mysql_query(&conn, sql_com1);
                res_set = mysql_store_result(&conn);
                 count = mysql_num_rows(res_set);
                while ((row = mysql_fetch_row(res_set)) != NULL){
                                printf("一份 %s ", row[0] != NULL ? row[0] : "NULL");
content=content+" 一份 "+row[0];
total=total+atof(row[1]);
cout<<endl;
}
sql_com2="select menu_name,price from menu_2 where menu_id=";



}

}
else{
cout<<"你选择的是";
int status = mysql_query(&conn, "set names utf8");

                 status = mysql_query(&conn, "SELECT restaurant_name FROM restaurant where restaurant_id=3");
                res_set = mysql_store_result(&conn);
                int count = mysql_num_rows(res_set);
                while ((row = mysql_fetch_row(res_set)) != NULL){
                        for (int i = 0; i<mysql_num_fields(res_set); i++){
                                printf("%s \t", row[i] != NULL ? row[i] : "NULL");
}}
cout<<endl<<"菜单： 编号       菜名           价格(请选择要点的菜编号)"<<endl;
status = mysql_query(&conn, "SELECT *  FROM menu_3");
                res_set = mysql_store_result(&conn);
                 count = mysql_num_rows(res_set);
                while ((row = mysql_fetch_row(res_set)) != NULL){
                        for (int i = 0; i<mysql_num_fields(res_set); i++){
                                printf("\t %s ", row[i] != NULL ? row[i] : "NULL");}
cout<<endl;}
while(cin>>meal_id){
    order_meal=order_meal+" "+meal_id;
    if(cin.get()=='\n') break;
}
 vector<string> result = split(order_meal);
string order_meal1=to_String1(count)+order_meal;
 command="./check_menu.sh ";
      command+=order_meal1;
        const char* command_restaurant1=command.c_str();
        FILE *fp;
        char buffer[1024]={0};
        fp=popen(command_restaurant1,"r");
        fread(buffer,1,sizeof(buffer),fp);
              while(buffer[0]!='1'){
       cout<<"输入有误请重新输入(不能输入菜单以外的id或菜单只能以单空格分开):"<<command_restaurant1<<endl;
order_meal="";
while(cin>>meal_id){
    order_meal=order_meal+" "+meal_id;
    if(cin.get()=='\n') break;
}
   result = split(order_meal);
    
    order_meal1=to_String1(count)+order_meal;
      command="./check_menu.sh ";
      command+=order_meal1;
       const char* command_restaurant=command.c_str();
        fp=popen(command_restaurant,"r");
        fread(buffer,1,sizeof(buffer),fp);
}
    for(size_t i = 1; i < result.size(); i++)
            {sql_com3+=result[i];
   const char* sql_com1=sql_com3.c_str();
status = mysql_query(&conn, sql_com1);
                res_set = mysql_store_result(&conn);
                 count = mysql_num_rows(res_set);
                while ((row = mysql_fetch_row(res_set)) != NULL){
                                printf("一份 %s ", row[0] != NULL ? row[0] : "NULL");
content=content+" 一份"+row[0];
total=total+atof(row[1]);
cout<<endl;}
sql_com3="select menu_name,price from menu_3 where menu_id=";
}
mysql_close(&conn);
}
    	mysql_close(&conn);
    
}
if(flag==2){
string time ;
cout<<"请输入你想预约的时间:"<<endl;

       cin>>time;

   string  command="./time.sh ";

      command+=time; 

      const char* command_time =command.c_str();

        FILE *fp;

        char buffer[1024]={0};

        fp=popen(command_time,"r");

        fread(buffer,1,sizeof(buffer),fp);

       while(buffer[0]!='1'){

       cout<<"预约的时间不符合规则,请重新输入:"<<endl;

       cin>>time;

      command="./time.sh ";

      command+=time;

       const char* command_time =command.c_str();

        fp=popen(command_time,"r");

        fread(buffer,1,sizeof(buffer),fp);

}
cout<<"时间预约成功,请输入你的联系方式： "<<endl;
cin>>phone;
   string  command1="./phone.sh ";

      command1+=phone; 

      const char* command_phone =command1.c_str();

        FILE *fp1;

        char buffer1[1024]={0};

        fp1=popen(command_phone,"r");

        fread(buffer1,1,sizeof(buffer1),fp1);

       while(buffer1[0]!='1'){

       cout<<"联系方式不符合规则,请重新输入:"<<endl;

       cin>>phone;

      command1="./phone.sh ";

      command1+=phone;

       const char* command_phone =command1.c_str();

        fp1=popen(command_phone,"r");

        fread(buffer1,1,sizeof(buffer1),fp1);
}
cout<<"联系方式正确，请输入你的地址： "<<endl;
cin>>address;
cout<<"输入地址正确，订单已生成如下："<<endl;
string sum="insert into takeoutorder values(NULL,'";
sum=sum+name+"','"+content+"',"+to_string1(total)+",'"+time+"','"+phone+"','"+address+"')";
const char* sum1=sum.data();
	MYSQL conn1;  
    	mysql_init(&conn1);
    
    	if (!mysql_real_connect(&conn1, "localhost", "root", "123", "mysql", 3306, NULL, 0)){
    		fprintf(stderr, "Failed to connect to database: Error: %s\n",
    			mysql_error(&conn1));
    	}
    	else{
                int status = mysql_query(&conn1, "set names utf8");

    		 status = mysql_query(&conn1, sum1);	
			 
    	}
    
    	mysql_close(&conn1);
cout<<"你的姓名:"<<name<<"  你的菜单:"<<content<<" 你的费用:"<<to_string(total)<<" 你的预期送达时间"<<time<<"你的电话号码："<<phone<<"你的地址："<<address<<endl;

}else{
cout<<"你的堂食订单已生成如下："<<endl;
string sum="insert into foodorder values(NULL,'";
sum=sum+name+"','"+content+"',"+to_string1(total)+")";
const char* sum2=sum.data();
	MYSQL conn2;  
    	mysql_init(&conn2);
    
    	if (!mysql_real_connect(&conn2, "localhost", "root", "123", "mysql", 3306, NULL, 0)){
    		fprintf(stderr, "Failed to connect to database: Error: %s\n",
    			mysql_error(&conn2));
    	}
    	else{
                int status = mysql_query(&conn2, "set names utf8");

    		 status = mysql_query(&conn2, sum2);	
			 
    	}
    
    	mysql_close(&conn2);
cout<<"你的姓名:"<<name<<"  你的菜单:"<<content<<" 你的费用:"<<to_string1(total)<<endl;}


        return 0;
}
