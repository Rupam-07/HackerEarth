//Follow me for solutions and you can contact me on rupamkarmakarcr7@gmail.com 
//please give it a star thank you


#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<limits.h>
#define ll long long
double solve (double** arr, double K ,int n) {    //fun
double mn = INT_MIN;
for(int i=0;i<n;i++){
if(-1*arr[i][1]>mn){
 mn = -1*arr[i][1];
}
}
double high,low;
high = 1e7; double ans = 0.0;
low= 1e-7+mn;
while(high>=low){
 double mid = (high+low)/2.0f;
 double sum=0.0f;
 for(int i=0;i<n;i++){
 sum+=(arr[i][0])/(arr[i][1]+mid+0.0);
 }
 if(sum<K){
 high = mid-1e-7;
 }else {
 low = mid+1e-7;
 }
}
 return low;
}
 
int main() {
 int N;
 scanf("%d", &N);
 int col;
 scanf("%d", &col);
 int i_arr, j_arr;
 double **arr = (double **)malloc(N*sizeof(double *));
 for(i_arr=0; i_arr<N; i_arr++)
 {
 arr[i_arr] = (double *)malloc(col*sizeof(double));
 }
 for(i_arr=0; i_arr<N; i_arr++)
 {
 for(j_arr=0; j_arr<col; j_arr++)
 {
 scanf("%lf", &arr[i_arr][j_arr]);
 }
 }
 double K;
 scanf("%lf", &K);
 
double out_ = solve(arr, K ,N);
 printf("%.6lf", out_);
}