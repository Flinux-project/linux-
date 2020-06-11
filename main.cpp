#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include"mysql.h"
#include"split.h"
#include <bits/stdc++.h>
using namespace std; 
int main()
{
  string restaurant_id;
  string meal_id;
  string order_meal;
  string content;
  string sql_com="select menu_name from menu_1 where menu_id=";
  string sql_com2="select menu_name from menu_2 where menu_id=";
  string sql_com3="select menu_name from menu_3 where menu_id=";
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
cout<<"你选择了堂食,请输入你的名字:"<<endl;}
else{
cout<<"你选择了外卖,请输入你的名字:"<<endl;}
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
       cout<<"不能选择除1，2,3以外的编号"<<buffer[0]<<endl;
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
    order_meal=order_meal+meal_id+" ";
    if(cin.get()=='\n') break;
}
cout<<order_meal<<endl;
 vector<string> result = split(order_meal);
    for(size_t i = 0; i < result.size()-1; i++)
            {sql_com+=result[i];
   const char* sql_com1=sql_com.c_str();
status = mysql_query(&conn, sql_com1);
                res_set = mysql_store_result(&conn);
                 count = mysql_num_rows(res_set);
                while ((row = mysql_fetch_row(res_set)) != NULL){
                        for (int i = 0; i<mysql_num_fields(res_set); i++){
                                printf("一份 %s ", row[i] != NULL ? row[i] : "NULL");}
cout<<endl;}
sql_com="select menu_name from menu_1 where menu_id=";



}}
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
    order_meal=order_meal+meal_id+" ";
    if(cin.get()=='\n') break;
}
cout<<order_meal<<endl;
 vector<string> result = split(order_meal);
    for(size_t i = 0; i < result.size()-1; i++)
            {sql_com2+=result[i];
   const char* sql_com1=sql_com2.c_str();
status = mysql_query(&conn, sql_com1);
                res_set = mysql_store_result(&conn);
                 count = mysql_num_rows(res_set);
                while ((row = mysql_fetch_row(res_set)) != NULL){
                        for (int i = 0; i<mysql_num_fields(res_set); i++){
                                printf("一份 %s ", row[i] != NULL ? row[i] : "NULL");}
cout<<endl;}
sql_com2="select menu_name from menu_22 where menu_id=";



}}
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
    order_meal=order_meal+meal_id+" ";
    if(cin.get()=='\n') break;
}
cout<<order_meal<<endl;
 vector<string> result = split(order_meal);
    for(size_t i = 0; i < result.size()-1; i++)
            {sql_com3+=result[i];
   const char* sql_com1=sql_com3.c_str();
status = mysql_query(&conn, sql_com1);
                res_set = mysql_store_result(&conn);
                 count = mysql_num_rows(res_set);
                while ((row = mysql_fetch_row(res_set)) != NULL){
                        for (int i = 0; i<mysql_num_fields(res_set); i++){
                                printf("一份 %s ", row[i] != NULL ? row[i] : "NULL");}
cout<<endl;}
sql_com3="select menu_name from menu_3 where menu_id=";

}
mysql_close(&conn);
}
    	mysql_close(&conn);
    	getchar();
}
        return 0;
}
