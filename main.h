#include<stdio.h>
#include<string.h>
char list[11][5]={"零","一","二","三","四","五","六","七","八","九","十"}; 
int swap(char a[]){
	int i;
	for(i=0;i<11;i++){
		if(strcmp(list[i],a)==0) return i;	
	}
}
int num(char a[]){char b[10],c[10];
	if(strlen(a)==2) return swap(a);	
	else if(strlen(a)==4){b[0]=a[2];b[1]=a[3];b[2]='\0';		
			if(swap(b)!=10) return 10+swap(b);
			else{b[0]=a[0];b[1]=a[1];b[2]='\0';
				return 10*swap(b);
			}
	}
	else if(strlen(a)==6){b[0]=a[4];b[1]=a[5];b[2]='\0';
		c[0]=a[0];c[1]=a[1];c[2]='\0';
		return swap(b)+swap(c)*10;
	}
}
int judge(int n,char a[],char b[]){
	int sum1;
	sum1=num(b);
	if(strcmp(a,"增加")==0) return n+sum1;
	else if(strcmp(a,"减少")==0) return n-sum1;
}
void change_print(int sum){
	if(sum>=0&&sum<=10){printf("%s\n",list[sum]);}
	else {
		if(sum%10==0) printf("%s十\n",list[sum/10]);
		else if(sum<=19) printf("十%s\n",list[sum%10]);
		else printf("%s十%s\n",list[sum/10],list[sum%10]);
	}	
}
