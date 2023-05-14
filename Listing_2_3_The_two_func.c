
#include <stdio.h>
void butler(void);  /* ANSI/ISO C function prototyping*/
// prototype是C90添加的内容
// prototype其实就是function （forward）declaration，提前告诉编译器，这个函数的存在。
// 它会提供一个函数的名称，返回值类型和参数，但是不提供函数的内容//
// 这里的第一个void表示butler函数不返回任何值，第二个void表示butler函数不接收任何参数。
// prototype一般在程序的最顶端，或是头文件中，这样即使没定义函数，也可以使用函数（因为已经declare）。
// 旧版的编译器识别void butler(); 但是这不是prototype，不建议使用。
int main(void)  // 无论main函数在哪里，
{
  printf("I will summon the butler function.\n");
  butler();  // 这才是butler函数执行的位置
  printf("Yes. Bring me some tea and writeable DVDs. \n");

  return 0;
}

void butler(void)  /* start of function definition*/
{
  printf("You rang, sir.\n");
}

