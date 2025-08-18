#include<stdio.h>
int i,j,k,temp;
  void getarray(int a[2][2]){
	for(i=0;i<2;i++){
	   for(j=0;j<2;j++){
	   	printf("\n enter a[%d][%d]",i,j);
	   	scanf("%d",&a[i][j]);
	   }
	}
}
    void showarray(int a[2][2]){
	for(i=0;i<2;i++){
	   for(j=0;j<2;j++){
	   	printf("\t enter a[%d][%d]=%d",i,j,a[i][j]);
	   }
	   printf("\n");
     }
	  }
	void add(int a[2][2],int b[2][2],int c[2][2]){
	for(i=0;i<2;i++){
	   for(j=0;j<2;j++){
	    c[i][j]=a[i][j]+b[i][j];
		}
	}
}
    void setarray(int x[3][3]){
	for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
	   	printf("\n enter a[%d][%d]",i,j);
	   	scanf("%d",&x[i][j]);
	   }
	}
}
     void givearray(int x[3][3]){
	for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
	   	printf("\t enter a[%d][%d]=%d",i,j,x[i][j]);
	   }
	   printf("\n");
    }
	}
   void mul(int x[3][3],int y[3][3],int z[3][3]){
   		for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
	   	z[i][j]=x[i][j]+y[i][j];
	   }
   }
   }
main(){
    int a[2][2],b[2][2],c[2][2];
	getarray(a);
	getarray(b);
	showarray(a);
    showarray(b);
	add(a,b,c);
	showarray(c);
	int x[3][3],y[3][3],z[3][3];
	setarray(x);
	setarray(y);
	givearray(x);
    givearray(y);
	mul(x,y,z);
	givearray(z);
}
