/*

一個費式數列定義第一個數為0 第二個數為1 之後
的每個數都等於前兩個數相加，如下所示:
0、1、1、2、3、5、8、13、21、34、55、89…。
右列的程式用以計算第N 個(N≥2)費式數列的數值，
請問 (a) 與 (b) 兩個空格的敘述(statement)應該為
何？

(A) (a) f[i]=f[i-1]+f[i-2] (b) f[N]
(B) (a) a = a + b (b) a
(C) (a) b = a + b (b) b
(D) (a) f[i]=f[i-1]+f[i-2] (b) f[i]

*/

int a=0;
int b=1;
int i, temp, N;
…
for (i=2; i<=N; i=i+1) {
  temp = b;
  __(a)__ ;
  a = temp;
  printf ("%d\n", __(b)__ );
}
