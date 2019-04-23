//program to find the braces
#include<stdio.h>
#include<string.h>
int main(){
char st[100];
char x1[100];
int a1=0,a2=0,b1=0,b2=0,c1=0,c2=0,z=0,f1=0,f2=0;
        int p,i;
//input of the braces
printf(" enter the string now ");
gets(st);
p=strlen(st);
//brace counting
for(i=0;i<p;i++){
	if (st[i]==('('))
		a1++;
	else if (st[i]== (')'))
		a2++;
	else if (st[i]== ('{'))
		b1++;
 	else if (st[i]==('}'))
		b2++;
	else if (st[i]==('['))
		c1++;
	else if (st[i]==(']'))
		c2++;
        else
            z++;
			}


if(a1>a2){
    printf("wrong expression \n");
printf("( number of extra open brace %d \n", a1-a2);
        printf("number of closed brace %d \n", a2);
		}
else if(a1<a2){
    printf("wrong expression \n");
printf(" ) number of extra closed brace %d \n", a2-a1);
printf("number of open brace %d \n", a1);
}
else if(b1>b2){
    printf("wrong expression \n");
printf("{ number of extra open brace %d \n", b1-b2);
printf("number of extra closed brace %d \n", b2);
		}

else if(b1<b2){
    printf("wrong expression \n");
printf("} number of extra closed brace %d \n", b2-b1);
printf("number of extra open brace %d \n", b1);
		}
		
else if(c1>c2){
    printf("wrong expression \n");
printf("[ number of extra open brace %d \n", c1-c2);
printf("number of extra closed brace %d \n", c2);
		}

else if(c1<c2){
            printf("wrong expression \n");
printf("] number of extra closed brace %d \n", c2-c1);
printf("number of extra open brace %d \n", c1);
		}
else{
for(i=0;i<p;i++){
    if (st[i]==('(')){
               
                x1[f1]=st[i];
                f1++;
                        }
	else if (st[i]== (')')){
		
                x1[f1]=st[i];
                f1++;
        }
	else if (st[i]== ('{')){
		
                x1[f1]=st[i];
                f1++;
                                 }
 	else if (st[i]==('}')){
                x1[f1]=st[i];
                f1++;
        }
	else if (st[i]==('[')){
                x1[f1]=st[i];
                f1++;
        }
	else if (st[i]==(']')){
                x1[f1]=st[i];
                f1++;
        }
        else
            z++;    

                   }

for (i=0;i<=((a1+b1+c1)/2);i++){
   if ((x1[i]==')')||(x1[i]=='}')||(x1[i]==']'))
       f2++;
                                }
if(f2>0)
    printf("wrong expression ");
    
}



}
