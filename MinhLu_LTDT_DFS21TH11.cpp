#include <stdio.h>
#include <stdlib.h>

int a[10][10];
int n;

void read_file() {
  FILE *fp;
  fp = fopen("D:\\mltestDFS.txt", "r");
  if (fp == NULL) {
    printf("\nFile khong ton tai:");
    exit(1);
  } else {
    fscanf(fp, "%d", &n);
    for (int i = 1; i <= n; i++)
      for (int j = 1; j <= n; j++)
        fscanf(fp, "%d", &a[i][j]);
  }
  fclose(fp);
}

void print_file() {
  printf("\nMa tran: \n");
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++)
      printf(" %d ", a[i][j]);
    printf("\n");
  }
}

void dfs(int a[10][10], int n, int x) {
	int d[10];
	int t=0; int k=0;
	int S[10];
for( int i=1; i<=n; i++){ d[i]=0; } 
  	S[0]=x;
  	t++;
while(t>0){
  	k=S[t-1];
  	t--;
  
  if( d[k]==0 ){
  	printf(" %d ", k);
  	d[k]=-1;
  }
  for( int i=n; i>=1; i--) {
  	if((a[i][k] != 0) && d[i]==0 ){
  	S[t]=i;
  	t++;
 	 } 
   }
}
}

int main() {
  read_file();
  print_file();

  int x;
  printf("\nNhap phan tu bat dau: ");
  scanf("%d", &x);
  printf("\nDFS(%d):",x);
  dfs(a, n, x);
  

  return 0;
}

