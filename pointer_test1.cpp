#include <iostream>

using namespace std;

int main()
{
	int a [3] = {100, 200, 300};
	int *p= a;	// 代表指標變數p 為d陣列起始位址
	int **pn = &p;	// 代表指標變數pn 為p位址


	*p -= 1;		//p指向d起始位址之值 -1 => 100-1=99
	p = &a[1];		//p改指定為d[1]位址
	*p += 1;		//p指向d[1]位址之值 +1 => 200+1=201
	p--;			//p往前位移到d[0]
	*(p+2) += 2;	//(p+2)位址之值+2 => 300+2=302, 實際p無移動
					//所以最後p在d[0]位址, *p=d[0]=99, **pn=指向p位址之值=99
	printf("*p= %d, **pn= %d ", *p, **pn);
	printf("*a[0]= %d, a[1]= %d, a[2]= %d \n\n", a[0], a[1], a[2]);

  //*p= 99, **pn= 99 *a[0]= 99, a[1]= 201, a[2]= 302
    return 0;
}