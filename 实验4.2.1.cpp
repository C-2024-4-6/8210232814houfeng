#include <iostream>
using namespace std;

/*第（1）问 
int main() {
    int i, j, *pi, *pj;  
    pi = &i;  
    pj = &j;  
    i = 5;   
    j = 7;    
    cout << i << '\t' << j << '\t' << pi << '\t' << pj << endl;
    cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j << endl;

    return 0;
}
*/

/*第（2）问 
int main()   
{
    int a[]={1,2,3};
    int *p,i;
    p=a;    
    for (i=0;i<3;i++)
    printf("%d,%d,%d,%d\n",a[i],p[i],*(p+i),*(a+i));  
} 
*/


/*第（3）问 
void f(char *st, int i) {
    st[i] = '\0';  // 截断字符串
    cout << st << endl;  // 输出当前截断后的字符串
    if (i > 1) {
        f(st, i - 1);  // 递归调用，逐步缩短字符串
    }
}

int main() {
    char st[] = "abcd";  // 定义字符串
    f(st, 4);  // 调用递归函数
    return 0;
}
*/

/*第（4）问
#include <iostream>
using namespace std;

int* f() {
    // 使用new动态分配数组
    int* list = new int[4]{1, 2, 3, 4};  // 动态分配并初始化数组
    return list;  // 返回动态分配的数组
}

int main() {
    int* p = f();  // 获取动态分配的数组指针
    cout << p[0] << endl;  
    cout << p[1] << endl;  

    delete[] p;  // 释放动态分配的内存
    return 0;
}
*/
 
