#include <stdio.h>

#include<dos.h>

#include<stdlib.h>

#include<string.h>

 

char a[50] ,b[50],d[200],e[10],c[50];

char ch;

int n1,i1=0,flag=1,n=5;

int total=0;/*���������*/

 

int E();

int E1();

int T();

int G();/*E��*/

int S();/*T��*/

int F();

void input();

void input1();

void output();

 

 

void main()                      /*�ݹ����*/

{

       int f,p,j=0,k=0;

       char x;

    d[0]='E';

    d[1]='=';

    d[2]='>';

    d[3]='T';

    d[4]='G';

    d[5]='#';
	   printf("�ݹ��½��������򣬱����ˣ������ã�20171310640���ƿ�1701\n");

       printf("������#�����ķ��Ŵ�(����+-*/����i#)��");

       do{
              scanf("%c",&ch);

              a[j]=ch;
			  c[k]=ch;
			  k++;
              j++;

       }while(ch!='#');

       n1=j;

       ch=b[0]=a[0];

       printf("����\t�ķ�\t������\t\t�����ַ�\tʣ�മ\n");

       f=E1();

       if (f==0) return;

       if (ch=='#') 

       {   printf("%sΪ�Ϸ����Ŵ�\n ",c);

        p=0;

              x=d[p];

              while(x!='#') {

                     printf("%c",x);p=p+1;x=d[p];          /*����Ƶ�ʽ*/

              }

       }

       else {

              printf("error\n");

              printf("�س�����\n");

              getchar();getchar();

              return;

       }

       printf("\n");

       printf("�س�����\n");

       getchar();

       getchar();

}

 

int E1()

{   int f,t;

       printf("%d\tE-->TG\t",total);total++;

   flag=1;

       input();

       input1();

       f=T();

       if (f==0) return(0);

       t=G();

       if (t==0) return(0);

              else return(1);

}

 

int E()

{   int f,t;

       printf("%d\tE-->TG\t",total);total++;

    e[0]='E';e[1]='=';e[2]='>';e[3]='T';e[4]='G';e[5]='#';

       output();

       flag=1;

       input();

       input1();

       f=T();

       if (f==0) return(0);

       t=G();

       if (t==0) return(0);

              else return(1);

}

 

int T()

{   int f,t;

       printf("%d\tT-->FS\t",total);total++;

       e[0]='T';e[1]='=';e[2]='>';e[3]='F';e[4]='S';e[5]='#';

    output();

       flag=1;

       input();

       input1();

       f=F();

       if (f==0) return(0);

       t=S();

       if (t==0) return(0);

              else return(1);

}

 

int  G()

{   int f;

       if(ch=='+') { 

              b[i1]=ch;

              printf("%d\tG-->+TG\t",total);total++;

        e[0]='G';e[1]='=';e[2]='>';e[3]='+';e[4]='T';e[5]='G';e[6]='#';

              output();

           flag=0;

              input();input1();

              ch=a[++i1];

              f=T();

              if (f==0) return(0);

              G();

              return(1);

       }

       printf("%d\tG-->^\t",total);total++;

       e[0]='G';e[1]='=';e[2]='>';e[3]='^';e[4]='#';

       output();

       flag=1;

       input();input1();

       return(1);

}

 

int S()

{

       int f,t;

       if(ch=='*') {

              b[i1]=ch;printf("%d\tS-->*FS\t",total);total++;

        e[0]='S';e[1]='=';e[2]='>';e[3]='*';e[4]='F';e[5]='S';e[6]='#';

              output();

              flag=0;

              input();input1();

              ch=a[++i1];

              f=F();

              if (f==0) return(0);

              t=S();

              if (t==0) return(0);

                                   else return(1);}

       printf("%d\tS-->^\t",total);total++;

       e[0]='S';e[1]='=';e[2]='>';e[3]='^';e[4]='#';

       output();

       flag=1;

       a[i1]=ch;

       input();input1();

       return(1);

}

 

int F()

{   int f;

       if(ch=='(') {

              b[i1]=ch;printf("%d\tF-->(E)\t",total);total++;

              e[0]='F';e[1]='=';e[2]='>';e[3]='(';e[4]='E';e[5]=')';e[6]='#';

              output();

              flag=0;

              input();input1();

              ch=a[++i1];

              f=E();

              if (f==0) return(0);

              if(ch==')') {

                     b[i1]=ch;printf("%d\tF-->(E)\t",total);total++;

                  flag=0;input();input1(); 

                     ch=a[++i1];

              }

               else {

                      printf("error\n");

                      return(0);

               }

       }

       else if(ch=='i') {

              b[i1]=ch;printf("%d\tF-->i\t",total);total++;

              e[0]='F';e[1]='=';e[2]='>';e[3]='i';e[4]='#';

              output();

              flag=0;input();input1();

              ch=a[++i1];

       }

          else {printf("�Ƿ��ķ��Ŵ�\n");return(0);}

         return(1);

}

 

void input()                      

{

        int j=0;

        for (;j<=i1-flag;j++)

        printf("%c",b[j]);                    /*���������*/

        printf("\t\t");

        printf("%c\t\t",ch);                  /*��������ַ�*/ 

}

 

void input1()

{

        int j;

        for (j=i1+1-flag;j<n1;j++)

        printf("%c",a[j]);                     /*���ʣ���ַ�*/

     printf("\n");

}

 

void output(){                              /*�Ƶ�ʽ����*/

       int m,k,j,q;

    int i=0;

       m=0;k=0;q=0;

    i=n;

       d[n]='=';d[n+1]='>';d[n+2]='#';n=n+2;i=n;

       i=i-2;

       while(d[i]!='>'&&i!=0) i=i-1;

       i=i+1;

       while(d[i]!=e[0]) i=i+1;

       q=i;

       m=q;k=q;

       while(d[m]!='>')  m=m-1;

       m=m+1;

       while(m!=q) {

              d[n]=d[m];m=m+1;n=n+1;

       }

       d[n]='#';

    for(j=3;e[j]!='#';j++){

              d[n]=e[j];

              n=n+1;

       }

       k=k+1;

       while(d[k]!='=')  {

              d[n]=d[k];n=n+1;k=k+1;

       }

       d[n]='#';

}