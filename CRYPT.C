#include<stdio.h>
#include<conio.h>
void encrypt()
{
 int i,j;
 char a[10];
 printf("enter the size of the word to be encrypted:");
 scanf("%d",&j);
 if(j<=10)
 {
  printf("enter the word to encrypt:");
  for(i=0;i<=j;i++)
  {
   a[i]=0;
   scanf("%c",&a[i]);
  }
  for(i=0;i<=j;i++)
  {
   a[i]=a[i]+3;
   printf("%c",a[i]);
  }
 }
 else
 {
  printf("the word is too large to encrypt update program!");
 }
}
void mcencrypt()
{
 int i,j,k;
 char a[10];
 printf("enter the size of the word to be encrypted:");
 scanf("%d",&j);
 printf("enter the key to be used for encryption:");
 scanf("%d",&k);
 if(j<=10)
 {
  printf("enter the word to encrypt");
  for(i=0;i<=j;i++)
  {
   a[i]=0;
   scanf("%c",&a[i]);
  }
  for(i=0;i<=j;i++)
  {
   a[i]=a[i]+k;
   printf("%c",a[i]);
  }
 }
 else
 {
  printf("the word is too large to encrypt update program!");
 }
}
void decrypt()
{
 int i,j;
 char a[10];
 printf("enter the size of the word");
 scanf("%d",&j);
 if(j <= 10)
 {
  printf("enter the word to decrypt");
  for(i=0;i<=j;i++)
  {
   a[i]=0;
   scanf("%c",&a[i]);
  }
  for(i=0;i<=j;i++)
  {
   a[i]= a[i]-3;
   printf("%c",a[i]);
  }
 }
 else
 {
  printf("word too long to decrypt");
 }
}
void mcdecrypt()
{
 int i,j,k;
 char a[10];
 printf("enter the size of the word");
 scanf("%d",&j);
 printf("enter the key to be used for decryption");
 scanf("%d",&k);
 if(j <= 10)
 {
  printf("enter the word to decrypt");
  for(i=0;i<=j;i++)
  {
   a[i]=0;
   scanf("%c",&a[i]);
  }
  for(i=0;i<=j;i++)
  {
   a[i]= a[i]-k;
   printf("%c",a[i]);
  }
 }
 else
 {
  printf("word too long to decrypt");
 }
}
void main()
{
	int d;
	clrscr();
	printf("select your choice of algorithm \n1. ceaser encryption \n2. ceaser decryption \n3. modified ceaser encryption \n4. modified ceaser decryption \n:");
	scanf("%d",&d);
	switch(d)
	{
		case 1 : encrypt();
			break;
		case 2 : decrypt();
			break;
		case 3 : mcencrypt();
			break;
		case 4 : mcdecrypt();
			break;
		default : printf("have a good day sir");
			break;

	}
	getch();
}
