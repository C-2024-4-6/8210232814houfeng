#include <iostream>
using namespace std;

/*�ڣ�1���� 
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

/*�ڣ�2���� 
int main()   
{
    int a[]={1,2,3};
    int *p,i;
    p=a;    
    for (i=0;i<3;i++)
    printf("%d,%d,%d,%d\n",a[i],p[i],*(p+i),*(a+i));  
} 
*/


/*�ڣ�3���� 
void f(char *st, int i) {
    st[i] = '\0';  // �ض��ַ���
    cout << st << endl;  // �����ǰ�ضϺ���ַ���
    if (i > 1) {
        f(st, i - 1);  // �ݹ���ã��������ַ���
    }
}

int main() {
    char st[] = "abcd";  // �����ַ���
    f(st, 4);  // ���õݹ麯��
    return 0;
}
*/

/*�ڣ�4����
#include <iostream>
using namespace std;

int* f() {
    // ʹ��new��̬��������
    int* list = new int[4]{1, 2, 3, 4};  // ��̬���䲢��ʼ������
    return list;  // ���ض�̬���������
}

int main() {
    int* p = f();  // ��ȡ��̬���������ָ��
    cout << p[0] << endl;  
    cout << p[1] << endl;  

    delete[] p;  // �ͷŶ�̬������ڴ�
    return 0;
}
*/
 
