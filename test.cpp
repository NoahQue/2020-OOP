#include"main.h"
void test(int a,int b){
	if(a==b) printf("Pass\n");
	else printf("Error\n");
}
int main(){
	printf("swap函数测试开始\n"); 
	char swap_test[11][5]={"零","一","二","三","四","五","六","七","八","九","十"};
	test(swap(swap_test[0]),0);
	test(swap(swap_test[1]),1);
	test(swap(swap_test[2]),2);
	test(swap(swap_test[4]),4);
	test(swap(swap_test[5]),5);
	test(swap(swap_test[7]),7);
	test(swap(swap_test[10]),10);
	printf("swap函数测试结束\n");
	printf("num函数测试开始\n");
	char num_test[6][10]={"五","十","十八","三十六","六十","九十八"};
	test(num(num_test[0]),5);
	test(num(num_test[1]),10);
	test(num(num_test[2]),18);
	test(num(num_test[3]),36);
	test(num(num_test[4]),60);
	test(num(num_test[5]),98);
	printf("num函数测试结束\n");
	printf("judge函数测试开始\n");
	int n=50;char a[]={"增加"},b[]={"减少"}, c[6][10]={"十一","二十","六","四十八","三","零"};
	test(judge(n,a,c[0]),61);
	test(judge(n,b,c[1]),30);
	test(judge(n,a,c[2]),56);
	test(judge(n,b,c[3]),2);
	test(judge(n,a,c[4]),53);
	test(judge(n,b,c[5]),50);
	printf("judge函数测试结束\n");
	printf("chang_print函数测试开始\n");
	printf("sum=6 ");change_print(6);
	printf("sum=20 ");change_print(20);
	printf("sum=11 ");change_print(11); 
	printf("sum=79 ");change_print(79);
	printf("sum=34 ");change_print(34);
	printf("sum=0 ");change_print(0);
	printf("chang_print函数测试结束\n");
	printf("测试完成\n");
	return 0;      
}
