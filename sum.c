#define _CRT_SECURE_NO_WARNINGS 1

//int g_val = 10;//全局变量
//static int g_val = 10;//当static被加上之后，就改变了变量的作用域
                       // - 让静态的全局变量只能在自己所在的源文件内部使用
                         //那出了源文件就没法使用了


//int Add(int x, int y)
//{
//    int z = x + y;
//    return z;
//}

static int Add(int x, int y)
{
    int z = x + y;
    return z;
}
