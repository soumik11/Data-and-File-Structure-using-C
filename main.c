#include<stdio.h>
int main(){
int row,col,i,j,k,l,z;
int val1=0, val2=0, val3=0;
//matrix row and column declaration
printf (" enter the number of rows you want- " );
scanf("%d", &row);
printf(" enter the number of rows you want- ");
scanf("%d", &col);

int a[row][col],b[row][col];
//printf("\n");
//matrix creation
printf("enter the value of the matrix now \n" );
for (i=0;i<row;i++){
	for (j=0;j<col;j++){
		printf( "enter value of a matrix the position of which is %d %d \n", i, j);
		scanf(" %d", &a[i][j]);
                printf( "enter value of b matrix the position of which is %d %d \n", i, j);
                scanf(" %d", &b[i][j]);
                            }
                    }
printf("\n");
//finding count of non-zero numbers in sparse matrix a and b
for(i=0;i<row;i++){
	for(j=0;j<col;j++){
			if (a[i][j]!=0)
				val1++;

			if((b[i][j])!=0)
				val2++;
					}
				}
val3=val1+val2;

//initializing sparse matrix a and b
int aspa[val1+1][3],bspa[val2+1][3],cres[val3+1][3];
//creation of sparse matrix a and b
aspa[0][0]=row,aspa[0][1]=col,aspa[0][2]=val1, bspa[0][0]=row, bspa[0][1]=col, bspa[0][2]=val2;
z=1,cres[0][0]=row,cres[0][1]=col,cres[0][2]=val3;

for (i=0;i<row;i++){
	for (j=0;j<col;j++){
		if((a[i][j])>0){
			for(k=0;k<3;k++){

					if(k==0)
					aspa[z][k]=i;
					else if(k==1)
					aspa[z][k]=j;
					else if(k==2)
					aspa[z][k]=a[i][j];
                                        else
                                            printf(" ");
					}
                                          z++;
                                }
                            }
                    }
z=1;
for (i=0;i<row;i++){
	for (j=0;j<col;j++){
		if((b[i][j])>0){

			for(k=0;k<3;k++){
					if(k==0)
					bspa[z][k]=i;
					if(k==1)
					bspa[z][k]=j;
					if(k==2)
					bspa[z][k]=b[i][j];
                                        }
                                     z++;
                                    
                                }
                             }
      		    }
printf("\n");

//printing of the sparse matrix 
for(i=0;i<=val1;i++){
          for(j=0;j<3;j++){
              printf(" %d",aspa[i][j] );
                           }
                      printf("\n");
                     }

for(i=0;i<=val2;i++){
          for(j=0;j<3;j++){
              printf(" %d", bspa[i][j]);
                           }
                      printf("\n");
                     }
int tempx=0;

//sparse addition
if(val1>val2){
    int val4=val1-val2;
    for(i=0;i<val3;i++){
        for(j=0;j<val2;j++){
                for(k=0;k<2;k++){
                        if(k==0){
                            if(aspa[j+1][k]>bspa[j+1][k])
                                cres[j+1][k]=bspa[j+1][k];
                            else if(aspa[j+1][k]<bspa[j+1][k])
                                cres[j+1][k]=aspa[j+1][k];
                            else
                                cres[j+1][k]=aspa[j+1][k];
                                 }
                        if(k==1){
                            if(aspa[j+1][k]>bspa[j+1][k]){
                                cres[j+1][k]=bspa[j+1][k];
                                tempx=aspa[j+1][k];
                            }
                            else if(aspa[j+1][k]<bspa[j+1][k]){
                                cres[j+1][k]=aspa[j+1][k];
                                tempx=bspa[j+1][k];
                            }
                            else{
                                cres[j+1][k]=aspa[j+1][k];
                             tempx=aspa[j+1][k];    
                            }    
                                }
                        tempx=0;
                                }   
                cres[j+1][3]=tempx;
                            }
        
                for(l=2*val2;l<val3;l++){
                        for(k=0;k<3;k++){
                                if(k==0)
                                    cres[l+1][k]=aspa[i+1][k];
                                else if(k==1)
                                    cres[l+1][k]=aspa[i+1][k];
                                else if (k==2)
                                    cres[l+1][k]=aspa[i+1][k];
                                else
                                    printf(" ");
                                        }
                                        }
                        }


}
else if (val1<val2){
    int val4=val2-val1;
    for(i=0;i<val3;i++){
        for(j=0;j<val1;j++){
                for(k=0;k<2;k++){
                        if(k==0){
                            if(aspa[j+1][k]>bspa[j+1][k])
                                cres[j+1][k]=bspa[j+1][k];
                            else if(aspa[j+1][k]<bspa[j+1][k])
                                cres[j+1][k]=aspa[j+1][k];
                            else
                                cres[j+1][k]=aspa[j+1][k];
                                 }
                        if(k==1){
                            if(aspa[j+1][k]>bspa[j+1][k]){
                                cres[j+1][k]=bspa[j+1][k];
                                tempx=aspa[j+1][k];
                            }
                            else if(aspa[j+1][k]<bspa[j+1][k]){
                                cres[j+1][k]=aspa[j+1][k];
                                tempx=bspa[j+1][k];
                            }
                            else{
                                cres[j+1][k]=aspa[j+1][k];
                             tempx=aspa[j+1][k];    
                            }    
                                }
                        tempx=0;
                                }   
                cres[j+1][3]=tempx;
                            }
        
                for(l=2*val1;l<val3;l++){
                        for(k=0;k<3;k++){
                                if(k==0)
                                    cres[l+1][k]=aspa[i+1][k];
                                else if(k==1)
                                    cres[l+1][k]=aspa[i+1][k];
                                else if (k==2)
                                    cres[l+1][k]=aspa[i+1][k];
                                else
                                    printf(" ");
                                        }
                                        }
                        }

    }
else {
    int val4=val1-val2;
    for(i=0;i<val3;i++){
        for(j=0;j<val2;j++){
                for(k=0;k<2;k++){
                        if(k==0){
                            if(aspa[j+1][k]>bspa[j+1][k])
                                cres[j+1][k]=bspa[j+1][k];
                            else if(aspa[j+1][k]<bspa[j+1][k])
                                cres[j+1][k]=aspa[j+1][k];
                            else
                                cres[j+1][k]=aspa[j+1][k];
                                 }
                        if(k==1){
                            if(aspa[j+1][k]>bspa[j+1][k]){
                                cres[j+1][k]=bspa[j+1][k];
                                tempx=aspa[j+1][k];
                            }
                            else if(aspa[j+1][k]<bspa[j+1][k]){
                                cres[j+1][k]=aspa[j+1][k];
                                tempx=bspa[j+1][k];
                            }
                            else{
                                cres[j+1][k]=aspa[j+1][k];
                             tempx=aspa[j+1][k];    
                            }    
                                }
                        tempx=0;
                                }   
                cres[j+1][3]=tempx;
                            }
                        }



}


//printing of sum of sparse matrix

for(i=0;i<val3;i++){
	for(j=0;j<3;j++){
		printf(" %d",cres[i][j]);
					  }
        printf("\n");
					}

}