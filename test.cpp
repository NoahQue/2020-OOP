#include"main.h"
void test(int a,int b){
	if(a==b) printf("Pass\n");
	else printf("Error\n");
}
int main(){
	printf("swap�������Կ�ʼ\n"); 
	char swap_test[11][5]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};
	test(swap(swap_test[0]),0);
	test(swap(swap_test[1]),1);
	test(swap(swap_test[2]),2);
	test(swap(swap_test[4]),4);
	test(swap(swap_test[5]),5);
	test(swap(swap_test[7]),7);
	test(swap(swap_test[10]),10);
	printf("swap�������Խ���\n");
	printf("num�������Կ�ʼ\n");
	char num_test[6][10]={"��","ʮ","ʮ��","��ʮ��","��ʮ","��ʮ��"};
	test(num(num_test[0]),5);
	test(num(num_test[1]),10);
	test(num(num_test[2]),18);
	test(num(num_test[3]),36);
	test(num(num_test[4]),60);
	test(num(num_test[5]),98);
	printf("num�������Խ���\n");
	printf("judge�������Կ�ʼ\n");
	int n=50;char a[]={"����"},b[]={"����"}, c[6][10]={"ʮһ","��ʮ","��","��ʮ��","��","��"};
	test(judge(n,a,c[0]),61);
	test(judge(n,b,c[1]),30);
	test(judge(n,a,c[2]),56);
	test(judge(n,b,c[3]),2);
	test(judge(n,a,c[4]),53);
	test(judge(n,b,c[5]),50);
	printf("judge�������Խ���\n");
	printf("chang_print�������Կ�ʼ\n");
	printf("sum=6 ");change_print(6);
	printf("sum=20 ");change_print(20);
	printf("sum=11 ");change_print(11); 
	printf("sum=79 ");change_print(79);
	printf("sum=34 ");change_print(34);
	printf("sum=0 ");change_print(0);
	printf("chang_print�������Խ���\n");
	printf("�������\n");
	return 0;      
}
