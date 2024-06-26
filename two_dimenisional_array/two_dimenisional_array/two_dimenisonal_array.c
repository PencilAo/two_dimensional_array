#define _CRT_SECURE_NO_WARNINGS
//数组
//数组是一类元素的集合
//数组在内存中是连续存放的
//二维数组
// int arr[3][4];//表示三行四列
// int arr[3][4] = { { 1,2 },{ 3,4 },{ 5,6 } };   //用  { }
// int arr[][4] = { 0 };  //只能省略行，不能省略列
// int* p = arr[0];   //这里arr[0]没放在sizeof内，也没取地址，所以这里的arr[0]表示首元素的地址，即arr[0][0] 
//int main()
//{
//    int i, j;
//    int arr[3][4];
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 4; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//}//自定义二维数组
// 可以把二维数组理解为:一维数组的数组.
// 二维数组的数组名，表示首元素的地址，其实是第一行的地址
// 冒泡排序的算法，对数组进行排序
// 数组传参的时候，形参有2种写法    二维数组传参时也只能省略行，列不能省略
// 1.数组
// 2.指针


//数组
       //数组名本质上是，数组首元素的地址
       // //数组名确实是表示首元素的地址
//但有两个例外
//1.sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//其他地方所有用数组名的都是数组首元素地址
//int main()
//{
//    int arr[10];
//    printf("%p\n", arr);//首元素的地址
//    printf("%p\n", &arr[0]);//首元素的地址
//    printf("%p\n", &arr);//数组的地址
//    return 0;
//}
// 
// 
//形参是指针的形式
//void bubble_sort(int* arr,int sz)
// 
// 
//形参是数组的形式
//void bubble_sort(int arr[],int sz)//地址是应该使用指针来接受，所以arr这里看似是数组，本质是指针变量
//{
//    int i;
//    for (i = 0; i < sz; i++)
//    {
//        int j = 0;
//        for (j = 0; j <sz - i - 1  ; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                //升序
//                int tem = arr[j + 1];
//                arr[j + 1] = arr[j];
//                arr[j] = tem;
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 3,4,5,7,2,4,7,5,9 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    bubble_sort(arr, sz);//如果用数组的方式写的话,这里不仅要传数组，还得传数组的个数
//    return 0;
//}
//二维数组的数组名的理解
//int main()
//{
//    int arr[3][4];
//    int sz = sizeof(arr);//3*4*4(字节)
//    //计算有几行
//    int hang = sizeof(arr) / sizeof(arr[0]);//arr[0]也表示第一行
//    //计算有几列
//    int lie = sizeof(arr[0]) / sizeof(arr[0][0]);
//    arr;//二维数组的数组名也表示数组首元素的地址，这里的首元素的地址是第一行(0)的地址，
//    return 0;
//}
//int mun( int n)
//{
//    if (n>9)
//    {
//        mun(n/10);
//    }
//    printf("%d", n % 10);
//}
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    mun(a);
//    return 0;
//}