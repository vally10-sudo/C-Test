using System.Collections;
using System.Diagnostics.Contracts;
using System.Text.RegularExpressions;
using System.Drawing;
using System.Threading.Tasks.Dataflow;
using Microsoft.Win32.SafeHandles;
using System.Data.Common;
using System.Runtime.Serialization.Json;
using System.ComponentModel.Design.Serialization;
using System.Net.Http.Headers;
using System.Collections.Concurrent;
using Internal;
using System.Net.WebSockets;
using System.Runtime.InteropServices.ComTypes;
using System.Reflection.Metadata;
using System.Data;
using System.Net.Mime;
using System.Reflection.PortableExecutable;
using System.Security.AccessControl;
using System.Xml;
using System.Diagnostics;
using System.Globalization;
using System.Threading;
using System.Reflection.Emit;
using System.Runtime.Serialization.Formatters;
using System.Runtime.Serialization;
using System.Runtime.CompilerServices;
using System.ComponentModel.DataAnnotations;
using System.IO.Enumeration;
using System.Xml.Schema;
using System.Net.Http;
using System.Text;
using System.Net;
using System.IO;
using System.Data.SqlTypes;
using System.Dynamic;
using System.Security.Principal;
using System.Runtime.InteropServices;
using System.Reflection;
using System.Runtime;
using System.Xml.Xsl.Runtime;
using System.ComponentModel;
using System.Net.Cache;
using System.Security.Cryptography;
using System;


2.6 运算符与表达式
C#的表达式是由一个或多个操作数以及零个以上运算符，可以计算结果为单个值、对象、方法或命名空间的代码片段组成。
表达式可以包含文本值、方法调用、运算符以及操作数，或简单名称。
简单名称可以是变量、类型成员、方法参数、命名空间或类型的名称。

C#运算符主要可以分为以下三类：
1.一元运算符：接受一个操作数操作的运算符，如增量运算符（++）或new
2.二元运算符：接受两个操作数的运算符，如+、-、*、/
3.三元运算符：接受三个操作数，条件运算符?:是C#中唯一的三元运算符。

2.6.6 位运算符

2.6.7 条件运算符
布尔类型表达式？表达式1 ： 表达式2
先计算布尔表达式的值，,若为真，则计算表达式1 的值 ，若为假，则计算表达式2的值。

例子：计算三个数中的最大值
private void button1_Click(object sender,EventArgs e)
{
    int num1,num2,num3;
    int max;
    num1 = int.Parse(textBox1.Text);
    num2 = int.Parse(textBox2.Text);
    num3 = int.Parse(textBox3.Text);
    max = num1 > num2 ? (num1 > num3? num1:num3) : (num2>num3?num2:num3);
    MessageBox.Show("三个数中的最大值为"+ max,"最大数");

}

第三章 程序流程控制
1.顺序结构：一条一条执行，无分支
2.选择结构：根据判断条件的成立与否，再决定要执行哪些语句的结构
语句中加上选择结构，根据不同的选择，程序的运行会有不同的方向和结果
提供if 和 switch语句

两种形式：
if(布尔表达式){语句序列}
if(布尔表达式){语句序列}else{语句序列}

private void button1_Click(object,EventArgs e)
{
    if((textBox1.Text.Length == 8)&&(textBox1.Text == "password"))
    MessageBox.Show("输入正确，欢迎进入系统！","欢迎");
    else{
        MessageBox.Show("输入错误，请输入8位密码！","提示",MessageBoxButtons.OK,MessageBoxIcon.Exclamation);
        textBox1.Text = "";
        textBox1.Focus();
    }
}

3.2.2 switch语句
开关语句，专门用于多分支的选择结构
switch(控制表达式)
{
 case 常量表达式1:
 语句序列1;
 break;
 case 常量表达式2;
 语句序列2;
 break;
 ...
 case 常量表达式n:
 语句序列n;
 break;

 default:
 语句序列n+1;
 break;
}

计算控制表达式的值，根据表达式的值在各个case后的常量表达式寻找匹配的值，如果找到匹配的case,执行其相应的语句序列，指导遇到break,否则执行default后面的语句序列。


private void button1_Click(object sender,EventArgs e)
{
    int score;
    score = ColorConverter.ToInt32(textBox1.Text1);
    if(score >= 0 && score <= 100)
    {
        switch(score / 10)
        {
            case 10:

            case 9:
                textBox2.Text = "优秀";
                break;

            case 8:
            textBox2.Text = "良好":
            break;

            case 7:
            textBox2.Text = "中等";
            break;

            case 6:
            textBox2.Text = "及格";
            break;

            default:
            textBox2.Text = "不及格";
            break;
        }
    }
    else 
    textBox2.Text = "输入成绩有误";
}
private void button2_Click(object sender,EventArgs e)
{
    textBox1.Text = "";
    textBox2.Text = "";
    textBox1.Focus();
}




3.循环结构

3.3.1 for 语句
for(表达式1;表达式2;表达式3)
{语句序列}

表达式1:定义for 循环的初始值
表达式2:一个关系或逻辑表达式，值为false时循环结束
表达式3:指出每次循环时所进行的计算或循环控制变量的更改
判断素数
private void button1_Click(object sender,EventArgs e)
{
    int m,i,k;
    double j;
    m = int.Parse(textBox1.Text);
    j = Match.Sqrt(m);
    k = (int)j;
    for(i=2;i<=k;i++)
    {
        if(m % i == 0) break;
    }
    if(i>k)
    MessageBox.Show("您输入的是素数");
    else
    MessageBox.Show("您输入的不是素数");
}


3.3.2 while语句
while(条件表达式)
{
    语句序列
}
先计算条件表达式的值，若为true则执行循环以内的语句序列，直到条件表达式的值为false时，退出循环
int i=1,s=0;
while(i<100)
{
    s=s+i;
    i++;
    Console.WriteLine("{0}",s);
}

3.3.3 do-while语句
do-while语句与while语句的执行过程基本一致，差别在于while是先测试条件是否为真再执行循环体，而do-while语句是先执行循环体再测试循环表达式的值
do{
    语句序列
} while(条件表达式)

计算两个整数的最大公约数和最小倍数
//采用辗转相除法
private void button1_Click(object sender,EventArgs e)
{
    int m,n,r,g,h,p;
    m = Convert.ToInt32(textBox1.Text); //取两个数
    n = Convert.ToInt32(textBox2.Text);
    p = m*n;
    while((r = m % n)!=0)  //余数不为0时的循环
    {
        m = n;//将上一次的除数作为新的被除数
        n = r;//将上一次的余数作为新的除数
    }
g = n;
h = p / g;
//余数为0时的除数为最大公约数
textBox3.Text = Convert.ToString(g);
//两数之积除以最大公约数是最小公倍数
textBox4.Text = Convert.ToString(h);

}

3.3.4 foreach语句
foreach语句来实现遍历出集合中的所有元素，常常与数组一起使用。
foreach (类型 循环变量 in 表达式)
{
语句序列
}

每一次循环时，从集合中取出一个新的元素值
如果括号内的整个表达式返回值为true,foreach块中的语句就执行
一旦集合中的元素都已被访问到整个表达式的值为false,控制流程就转到foreach后面的执行语句

    //  从键盘输入一组数，将他们显示出来并求出其中的最大值
    int[] arr = new int[6];
    Console.WriteLine("请输入一组数据");
    //arr.Length表示数组的长度
    for(int i = 0; i<ArrayList.Length;i++)
    arr[i] = Convert.ToInt32(Console.ReadLine());
    int max;
    Console.WriteLine("数组中的元素：");
    foreach(int i in arr)
    {
        Console.WriteLine("{0}",i);

    }
    max = arr[0];
    foreach(int i in arr)
    {
        if(max < i)
        max = i;
    }
    Console.WriteLine("最大值为{0}",max);
    Console.ReadLine();


3.3.5 循环的嵌套
private void buuton1_Click(object sender,EventArgs e)
{
    textBox1.Text="水仙花数有：";
    int m;
    for(int i=1;i<10;i++)
        for(int j=0;j<10;j++)
            for(int k=0;k<10;k++)
            {
                m = i*100 + j*10 + k;
                if(i*i*i+j*j*j+k*k*k==m)
                textBox1.Text = textBox.Text +"\r\n" + Convert.ToString(m);
            }
}


3.4 跳转
3.4.1 break 语句
在循环中使用break能够让程序强行跳出循环。
当程序执行到break语句时，就会跳出循环，继续执行循环外的下一条语句
如果break语句出现在循环嵌套的内层循环，则break语句只会跳出本层循环，而不是跳转到所有循环的最外层。
输出1~10之前不能被3整除的数字，break语句在i=3时终止了整个循环
private void button1_Click(object sender,EventArgs e)
{
    for(int i=1;i<=10;i++)
    {
        if(i % 3 ==0)
        break;
        textBox1.Text= textBox1.Text+"\r\n"+Convert.ToString(i);
    }
}

3.4.2 continue语句
continue语句与break语句不同，它并不是跳出循环，而是终止continue后面的语句
将程序的执行流程提前进入下一次循环

凡是满足被3整除的数都没被输出，其他数字正常输出
private void button2_Click(object sender,EventArgs e)
{
    for(int i=1;i<=10;i++)
    {
        if(i % 3 ==0)
        continue;
        textBox2.Text= textBox2.Text+"\r\n"+Convert.ToString(i);
    }
}

3.4.3 goto语句

goto语句的作用是停止执行当前正在执行的语句，然后跳转到一个已标记的语句位置，从标记语句的位置重新执行代码
Label:
goto Label;

3.4.4 return语句
用于退出当前正在执行的函数或返回值

表达式是可选项，如果被调用的方法类型是void,必须说那个表达式返回同一个类型的值；如果被调用的方法是void,则省略return语句

3.4.5 throw语句
用于异常处理，当发生异常时，可以使用它改变程序的正常执行流程








3.5.1 枚举
可能只需要变量取值范围内的一个或几个值，此时可以用枚举

enum 枚举名称：类型
{
    枚举值1,
    枚举值2,
    ...
    枚举值n
}

类型 名；
名 = 枚举名称.枚举值;

namespace aa
{
    enum aa:byte   //定义一个枚举aa，并设置其类型为byte,分别设置四个枚举值，并分别赋值
    {
        aa1=2,
        aa2=3,
        aa3=4,
        aa4=5
    }
    class Program
    {
    static void Main(string[] args)
        {
        byte mm;
        string nn;
        aa mn; //分别定义三个变量，其中mn是枚举类型，并设置mn的值为aa3的值
        mn = aa.aa3;
        Console.WriteLine("myDirection = {0}",mn);
        mm = (byte)mn; //对枚举值mn进行显示转换，并通过Convert.ToString(mn)获得枚举字符串的值
        nn = Convert.ToString(mn);
        Console.WriteLine("byte 是 = {0}",mn);
        Console.WriteLine("string 是= {0}",nn);
        Console.ReadKey();
        }
    }
}

3.5.2结构
结构是指由几个数组构成的数据结构，这些构成数据可以是不同数据类型，并且根据结构可以定义需要的变量类型。
使用struct定义结构

struct 名 {
    结构变量1;
    枚举变量2;
    ...
    枚举变量n;
}

3.5.3数组
数组是一个变量的下拉列表，通过数据可以同时存储多个数值，并且能够同时存储类型相同的值。
每个数组都有自己的类型，并且数组内的各个数值都是这个类型。
类型[]数组名;

类型可以是任何变量的类型，包括本节介绍的结构和枚举类型

1.数组初始化
1）.字面值指定，使用逗号对各数组值进行分割
int [] mm={1,3,5,6,9,10};

2）指定大小，指定大小的范围
类型[] 数组名=new 类型（大小值）;

指定数组有5个值：
int[] mm=new int(5);

int[] mm=new int[5] {1,3,5,6,9};




、、、plantuml
@startmindmap
*设计模式
**面向对象分析OOA
**面向对象设计OOD
**面向对象变成OOP
@endmindmap
、、、

3.6基本.NET框架类

3.6.1 Console类
为控制台应用程序提供字符的读写支持
4个方法：
WriteLine():输出控制台内的指定数据，并在字符的后面自动输出一个换行符
Write()
Read()
ReadLine()


第4章 面向对象技术
类是对象概念在面向对象
每一个有明确意义的事物都可以看做一个对象
每个对象都有属性和行为
可以把具有相似特殊的事物归为一类，例如，所有的电视机都可以归为“电视机类”


类是一种数据类型
对象是一个类的实例


6.1面向对象
OOP:object oriented programming，面向对象变成，建立一个对象模型，反应应用领域内的实体之间的关系。
OOP基于如下两周方式产生对象：
1.以原型对象为基础产生新对象
通过提供一个有代表性的对象为基础来产生各种新的对象，并由此继续产生更符合实际应用的队形

2.以类为基础产生新对象
一个类提供一个或多个对象的通用性描叙。类与类型有关，所以一个类相当于从该类中产生的实例的集合。

6.1.2 C#面向对象编程
a.使用对象建模技术OMT来分析目标问题，抽象出相关对象的共性
b.对他们分类，分析各类之间的关系
c.使用类来描述同一类对象，归纳出类之间的关系

对象建模-系统分析设计-对象交互分析-面向对象设计-类和对象 

6.2统一建模语言
描述分析过程和结果
1.静态图
描述不发生任何变化的软件元素的逻辑结构，描述了类，对象和数据结构以及它们之间的关系

2.动态图
展示软件实体在运行期间的变化，主要描述执行流程，实体改变状态的方式等。

3.物理图
显示软件实体不变化的物理结构，主要用来描绘库文件，字节文件，和数据文件，以及它们之间的相互关系等

6.2.2类图和对象图

1.类图
表示了不同实体间的相互关系，显示系统的静态结构。
类图表示逻辑类，通常指事物的种类，如球队，电影等之类的抽象描述
类图还可以表示实现类，实现类就是程序员要编写的类。


1.实现类
2.接口
3.工具类


2.对象类
能够表示类的实例化对象，上层标识对象名和类名，在下层标识对象的实例化属性值。
Lei mm = new Lei("mm",'F',24);

在同一个应用项目中，类之间存在多种类别的相互关系。
继承inheritance：指一个类从其父类派生而来，继承了父类的属性和方法，基于类的继承叫做一般化generalization,基于结构的继承叫实现realization
关联association:通常用类之间的关联来表示变量实例持有对其他对象的引用，这种关系是半永久的，并没有包含关系。
依赖dependency,是不同类的实例之间的暂时关系
聚合aggregation,是关联的一种特殊形式，代表着一种整体和部分的关系，并且里面的部分可以作为其他部整体的部分，而部门和整理之间也没有生命期的依赖。
组合composition,是聚合的一种特殊形式，组合的关联性比聚合更强，而部门只能作为唯一的一个整体的部分，而且部分的声明周期依赖于整体的生命周期。

UML是一种设计语言，他的目的不是变现细节而是表现结构，仅仅用于展示必要的细节。
UML不可能与源代码一一对应，只存在结构上的对应关系。


6.2.3序列图和状态图
除类图和对象图外，还可以使用序列图和状态图来表示项目内程序类的结构和各元素之间的对应关系。

1.序列图
用来显示用例或用例的一部分的详细流程。
显示流程中不同对象之前的交互关系，同事可以很详细的显示对不同对象的各种调用。


4.3.3.方法
1.方法的声明
方法用来定义类内可执行的操作，通过方法实现对类和对象的数据进行操作。
另外方法也是实现代码重用的一个载体，是代码组织逻辑化，合理化的一种方式。

2.方法分类
静态方法：static,不对特定实例进行操作，在静态方法找那个引用this关键字会导致编译错误
非静态方法：没有static，对类的某个给定的实例进行操作，可以用this关键字实现两个整数相加

3.方法的重载
指在同一个类中声明两个或两个以上的名称相同，但参数类型和参数个数不同的方法，以实现对不同数据类型的相同处理。

4-8，创建一个控制台应用程序，定义重载方法分别实现两个整数相加和两个字符串连接的结果
class Program
{
    public int Add(int x, int y) //定义实例方法实现整数相加
    {
        return x+y;
    }

    public string Add(string a, string b) //定义实例方法实现字符串连接
    {
        return a + b;
    }
    static void Main(string[] args)
    {
        Program n = new Program();//实例化类的对象
        Program str = new Program();
        //输出两个数相加的结果
        Console.WriteLine("{0}+{1}={2}",23,24,n.Add(23,24));
        //输出两个字符串连接的结果
        Console.WriteLine("{0}+{1}={2}","wel","com",str.Add("wel","com"));
        Console.ReadLine();
    }
}

4.3.4 构造函数 和 析构函数

声明构造函数的格式
public 构造函数名([参数列表])
{
函数体
}
a.构造函数与类同名
b.构造函数没有返回值类型
c.一般来讲，构造函数总是public类型的，如果是private类型，表明该类不能被实例化
d.构造函数可以带参数，也可以不带参数
4-9：创建一个控制台程序，定义一个Bird类，在类中声明一个无参的构造函数和一个有参的构造函数，创建该类的两个对象，输出鸟的心声。
class Birds
{
    public Bird() //定义构造函数，输出鸟的心声
    {
        Console.WriteLine("小鸟说：“我是小鸟，飞翔是我的选择！”");
    }
    public Bird(string name) //定义构造函数输指定鸟的心声
    {
        Console.WriteLine(name + "说：我是一只小小鸟，在怎么飞也飞不高");
    }
    static void Main(string[] args)
    {
        Bird bird = new Bird(); //使用无参构造函数实例化类的对象
        Bird sparrow = new Bird("麻雀"); //使用有参构造函数实例化的对象
        Console.ReadLine();
    }
}


2.构造函数
用于在创建类的实例时，完成初始化工作。
而析构函数是在删除实例时执行的操作，用于回收类的实例占用的资源。
析构函数的名称与类名相同，同时在前面加符号"~"
一个类只能有一个析构函数，无法继承或重载，也不能显式地调用

4.3.5索引器
是一种特殊的类成员，可以使用索引器来操作数组中的元素。

1)索引器的名称必须是关键字this,this后面一定要跟一对方括号，在方括号之间指定索引的参数表，其中至少必须有一个参数
2)索引器不能被定义为静态的，而只能是非静态的

4-10，定义一个类CollClass ，在该类中声明一个用于操作字符串数组的索引器
在Main方法中创建CollClass类的对象，并通过索引器为数组中的元素赋值
最后使用for语句并通过索引器取出所有元素的值


4.4类的面向对象特性
4.4.1类的封装

public class Person //定义Person类
{
public string name; //定义name成员，该成员的访问修饰符为public
private int age;//定义age成员，该成员的访问修饰符为private
public void sayAge() //定义sayAge的方法，该方法没有参数
{
MessageBox.Show("I am"+age.ToString()+"yeas old");
}

public Boolean setAge(int a) //定义setAge方法，设置age成员的值
{
if(a>0 && a<=120) //校验值是否符合age成员要求
{
age = a; //通过校验，给成员age赋值
return true; //通过校验，令方法的返回值为true
}
else 
return false; //未通过校验，令方法的返回值为false

}
}


private void button1_Click(object sender,EventArgs e)
{
    Person p = new Person(); //定义属于Person类的对象p
    //调用setAge方法为age成员赋值
    if(p.setAge(ConvertBinder.ToInt16(textBox2.Text)))
    p.sayAge();//调用sayAge方法
    else
    MessageBox.Show("输入的年龄不在0~120之间");
}

封装是面向对象程序设计最重要的特点之一。

4.4.2 类的继承
通过继承可以实现代码重用，可以在类之间建立一种关系，使得新定义的派生类的实例可以继承已有基类的特征和能力，同时加入新的特性或修改已有的特性。
4-12 创建一个控制台应用程序，其中自定义一个Fruit类，然后





第7张.ADO.NET数据库编程

7.4. 使用ADO.NET访问数据库
无论是实验SQL Server还是Access 数据库创建连接对象，都可以使用Open HE Close方法打开和关闭数据库连接

private void button1_Click(object sender,EventArgs e)
{
    try
    {
        SqlConnection conn = new SqlConnection();//创建连接对象
        conn.ConnectionString = "Server=.;database=School_DB;Intergrated Security=True";
        //设置连接字符串
        //打开连接
        conn.Open(); //打开连接
        MessageBox.Show("已经正确建立连接","连接正确对话框");
        //连接正确对话框
        //关闭连接
        conn.Close(); 
    }
    catch (SqlException SQL)
    {
        MessageBox.Show(SQL.Message,"连接失败对话框"); //连接失败对话框
    }
}


7.4.2 ADO.NET联机模式的数据存取
整个数据的存取步骤如下：
1）、使用SqlConnection对象与数据库建立连接
2）、使用SqlCommand对象向数据库检索所需数据，或者直接进行编辑操作
DataReader 对象提供了用顺序的，只读的方式读取用Command对象获取的数据结果集。

private void radioButton1_CheckdChanged(object sender,EventArgs e)
{

}


7.4.3 ADO.NET脱机模式的数据存取

在脱机模式下，应用程序并不一直保持连接到数据库的连接


Command类对象最常用的方法有以下3个：

（1）ExecuteNonQuery方法：
执行非SELECT语句，如插入INSERT,删除DELETE，更新UPDATE等SQL语句，返回值显示命令影响的行数。对于其他类型的语句，返回值为-1

例子7-2 使用Command对象访问SQL Server数据库School_DB,向Teacher表中插入一条记录
程序界面

添加名称空间：
using System.Data.SqlClient;
编写事件过程代码如下：
private void button1_Click(object sender,EventArgs e)
{
    string str = "data source=.;Initial Catalog=School_DB;Integrated Security=true";
    SqlConnect conn = new SqlConnection(str);
    Conn.Open();
    SqlCommand cmd= new SqlCommand();
    Cmd.CommandText = "Insert Into Teacher values(49,'049','loginpwd','汪洋','男','08',1)";
    cmd Connection = conn;
    cmd.ExecuteNonQuery();
    MessageBox.Show("记录已插入！","提示");
    conn.Close();
}

2.DataReader对象
Command对象可以对数据源的数据直接操作，但是如果执行的是返回结果集的查询命令或存储过程，需要先获取结果集的内容，然后再加工或者输出，这就需要DataReader对象来配合。



第8章 文件

输入流和输出流
文本流
二进制流

操作系统对文件的方位是通过文件名来实现的，每个文件除了文件名外，还有文件路径，创建时间，操作权限等属性

1.通过Create方法创建非UTF-8编码文本
public static FileStream Create(string path,int bufferSize,FileOptions options)

path:要创建文件的路径和名称
创建一个位图文件
File CreateText(@"D:\Mytest.tmp")
打开一个可读写的文件
FileStream fs=File.Open(path,FileMode,Open)  //path变量为打开文件的路径

也可以使用FileInfo类实现
FileInfo fileInfo = new FileInfo("D:\\test.txt");
using(Stream stream = FileInfo.Open(UploadFileCompletedEventArgs.Open)) //以读写的方式打开文件
{
//以字符编码UTF-8设置文本格式
Byte[] info = new UTF8Encoding(true).GetBytes("民以食为天");
Stream.Write(info,0,InferenceOption.Length);   //写入文本
}


2.以只读方式打开文件
以只读方式打开文件使用File类的OpenRead方法来实现

8.2.4 判断文件是否存在
根据指定的文件路径，判断文件是否存在
string Path="test.txt"; //如果不指明路径，默认为应用程序当前路径
if(File.Exists(Path))
{
    MessageBox.Show("文件存在");

}

else
{
    MessageBox.Show("文件不存在");
}


8.2.5 复制或移动文件

1.文件的复制
File的Copy方法和FileInfo的CopyTo方法实现


将C盘下的test.txt文件复制到D盘下

File.Copy("C:\\test.txt","D:\\test.txt");


将C盘下的test.txt文件移动的C盘下
File.Move("C:\\test.txt","D:\\test.txt");

File.Delete("D:\\test.txt");

8.3.2 创建文件夹
Directory.CreateDirectory("E:\\soft");
8-22 创建一个控制台应用程序，命名为FileStreamWrite，在默认类文件Program.cs的Main方法中，首先获取源文件和目标文件的FileStream类，然后调用FileStream类的Read方法从源文件的FileStream流中读取数据，最后调用FileStream类的Write方法把读取的数据写入目标文件对应的FileStream类。

代码如下：
static void Main(string[] args)
{
    try
    {
       string strReadFile = AppDomain.CurrentDomain.SetupInformation.AppplicationBase+"\\Test.txt";
       //源文件路径
       FileInfo finfo = new FileInfo(strReadFile); //实例化FileInfo
       FileStream fsReadStream = finfo.OpenRead(); //获取源文件的FileStream流
        //目标文件路径
        string strWriteFile = AppDomain.CurrentDomain.SetupInformation.ApplicationBase + "\\MR.txt";
        //获取目标文件的FileStream流
        FileStream fsWriteStream = FileOpen(strWriteFile,FileMode.Create);
        int intSize = 1024;
        byte[] buffer = new byte[intSize];
        int intReadSize;
        //从源文件读取数据

    }
    catch (System.Exception)
    {
        
        throw;
    }
}


9.1.1 .NET图形图像处理命名空间
（1）System.Drawing ，提供了对GDI+基本图形功能的访问，Graphics类在此命名空间中，用于使用GDI+绘图对象，利用此命名控件中的类，几乎可以再控件和窗体上绘制任何形状的图形图像。


9.1.2 Graphics类


第10章 异常、调试与程序部署

当有异常发生时，程序应当能够捕获并合理处理异常，如果可能还要消除产生异常的原因，然后继续运行而不是中断应用程序的执行，称为异常处理

10.1.2 异常类

.NET平台下的异常都是以类的形式出现
结构化异常处理方法用到三个关键字: try ,catch, finally，在执行期间自行检查、捕获和处理错误代码

（1）try 块 包含程序可能出现异常的程序语句，也即为catch 规定异常捕获的语句范围
（2）catch 块 指明需要捕获异常事件的类型并针对该类型的异常所对应的处理代码
（3）finally 块包含的代码总是执行清理的代码，程序从此处继续向后执行，从而到达统一的出口，如在其中实现关闭文件，清楚系统资源等。finally块是可选的。

例10-2 
private void button1_Click(object sender,EventArgs)
{
    try
    {
        int month=Convert.ToInt32(textBox4.Text);
        int day = Convert.ToInt32(textBox5.Text);
        if(month <1 || month >12)
        {
            throw new Exception("月份错误");
            //抛出异常
        }
        if (day <1 || day>31)
        {
            throw new Exception("日期错误");
            //抛出异常
        }
    }
    catch (Exception Ex)
    {
        
        MessageBox.Show(ex.Message);
    }
}

1.进程

程序是一段静态的代码，进程是程序的一次动态执行过程。
它对应了从代码加载、执行到执行完毕的过程。
创建产生进程、调度执行进程、撤销进程
作为执行标志的同一段程序，可以被多次加载到系统的不同内存区域分别执行，形成不同的进程。

2.线程

比进程更小的执行单位





1.问题领域
问题领域：包含与所面对的应用问题直接相关的所有类和对象
主要根据需求的变化来对面向对象分析阶段产生的模型中的类和对象、结构、属性和操作进行组合和分解，根据面向对象设计原则来增加必要的类、属性和关系。
2.用户界面
通常在面向对象分析阶段给出所需的属性和操作，在面向对象设计阶段必须根据需求把交互的细节加入用户界面设计中，包括有效的人机交互所必须的实际显示和输入。
用户界面设计主要包括7个方面：
（1）用户分类
（2）描述人及其任务的脚本
（3）设计命令层
（4）设计详细的交互
（5）继续扩展用户界面原型
（6）设计人机交互类
（7）根据图形用户界面进行设计任务管理部分的设计



（1）打开Visual Studio,新建---项目
（2）模板--选中--windows窗体应用程序，名称：oop
(3)工具栏--button空间，将其放入Form1中央
（4）双击 button1,为其鼠标单击事件添加处理代码
namespace oop{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        //在Form1窗体内添加一个Button按钮控件，这个按钮可以称为一个对象
        //添加一个事件的处理程序button1_Click,用于监听Button对象所产生的Click事件
        //设置单击button1后，改变按钮上面的显示文本，并创建一个新的按钮
        private void button1_Click(object sender,EventArgs e)
        {
            ((button)sender).Text = "单击了";
            Button newButton = new Button();
            newButton.Text = "New Button!";
            newButton.Click += new EventHandler(newButton_Click);
            Control.Add(newButton);
        }

        //为新创建的按钮添加一个处理程序newButton_Click,用于监听新Button对象所产生的的Click事件，功能：设置用户单击新按钮后，将改变按钮上面的显示文本
        private void newButton_Click(object sender,System.EventArgs e)
        {
            ((Button).sender).Text = "单击了";

        }
    }
}


第7章 方法
方法也称为函数，由对象和类组成，用于执行特定功能的代码段
方法是函数的最基本成员，其他函数构成成员都是以方法为基础实现的。

特性 
修饰符 返回类型 方法名{
方法语句
}

特性和修饰符是可选的，修饰符用来控制方法的可访问性范围
修饰符用来控制方法的可访问性的范围
返回类型即方法处理结果的返回类型
方法名是定义的方法名称
方法语句是方法的核心，通过定义执行语句，设置这个方法所能执行的功能。

如果使用void作为返回类型，则在方法语句中不需要使用return,也可以使用不带表达式的return语句，用来返回调用方法。

在具体使用时

K8s

namespace
resource
label

自由策略

服务调度和编排
  健康检查
  调度策略
  部署策略
  深入POD

落地与实践
  Ingress-Ngnix
  PV/PVC/StorageClass
  Api


日志与监控
  日志主流方案
  从日志采集到日志展示
  Prometheus

Istio
  架构设计
  环境部署
  数据展现

全面，系统，深入
效率提升，避免踩坑

环境参数

kubernetes 1.14.0
docker17.03.x
java1.8
harbor1.6.0
Prometheus 2.8.1
Istio 1.1.2


以服务为中心
自动化

kubernetes 以docker为基础，支持自己的容器技术


ASP.NET4.0
<caching>
<outputCache defaultProvider="AspNetInternalProvider">
<provider>

还可以针对每个空间和每个请求选择不同的输出缓存提供程序

由于一个因公程序池可包含多个应用程序，因此需要通过使用applicationHost.config文件中的以下配置分别指定要自动启动的各个应用程序
<sites>
<site name="MySite" id="1">


3.永久重定向页面
4.会话状态压缩
默认情况下，ASP.NET提供两个用于存储整个web场中会话状态的选项；
第一个选项是一个调用进程外会话状态服务器的会话状态提供程序
第二个选项是一个在microsoft SQL server数据库中存储数据的会话状态提供程序。

1.ASP.NET MVC: 5.2.7

connected service:链接外界服务

Assemble.cs（assemblyInfo）:配置信息,发布后，项目的dll文件一个总的描述
App_Data:数据脚本、数据库文件
App_Start:包含了程序初始化需要的一个类
Content:保存CSS文件
fonts:保存字体文件
Scripts:保存JS文件



MVC:
Controller:存放控制器，控制业务逻辑，选择数据传输
Models:存放实体对象
View:变现层，和用户直接交互的界面
Global:全局的配置文件，MVC程序的启动是从这里开始的
Web.config:MVC的配置文件

ASP.NET开发： webform开发
1.aspx文件： 涵盖了MVC三个元素的事儿


二.项目发布
1.依赖于WINDOW-依赖IIS--无法跨平台
2.安装IIS---作为服务器（本地）
3,.启动或关闭window功能
4.安装interface information Service(建议全部安装)
5.window服务器版（window云服务器）--通过服务器管理器增加角色和功能

准备发布

添加网站
myAsp.MVC.web
浏览本地根目录
端口：8090
主机名：空--公网
应用程序池里面会显示
编译一下：右键重生成

打开IIS
添加一个网站，物理路径指向--项目的根目录，设定一个端口号：5000-10000
直接访问


发布：
右键，选择发布按钮--设置一些配置，就可以发布了
问题：权限问题
没有网站备案，没公网
配置网站的物理路径的权限：
增加两个账号：IUSR-设置权限为完全控制
增加账号:iis_IUSR--设置权限为完全控制

三、开发功能开发--数据传值方式
MVC开发开始，新建控制器，实现数据传递
1.ViewData
2.ViewBag
3.Models
4.TempDatas
5.session

1.ViewBag和ViewData，如果指定的key是一样的，后者会覆盖前者
2.TempData和session传值，跳转到其他的额方法，仍然可以获取到值----TempData其实是通过Session来实现的
3.model传值不要把数据定义成一个string类型，因为有重载支持，放回指定的视图类型

四、ASP.NET MVC 集成日志log4net
如果让没有日志监控的系统上线，就是给自己挖坑
log4net:多种方式记录日志---日志组件，第三方开发的程序集
控制器输出
文本记录
记录到数据库中去
如何集成log4net到ASP.NET MVC中呢？
1.NuGet引入程序集log4net
2.准备配置文件，配置文件的属性设置为始终复制
3.读取配置文件，准备帮助类库

C4D
Appl

zhongjian 

with specific field delimiters and row terminators
使用特定的字段分隔符和行终止符


rows are terminated by a carriage return / new line.
行由回车/换行符终止。


Delimited text files
Data is often stored in plain text format with specific field delimiters and row terminators. The most common format for delimited data is comma-separated values (CSV) in which fields are separated by commas, and rows are terminated by a carriage return / new line. Optionally, the first line may include the field names. Other common formats include tab-separated values (TSV) and space-delimited (in which tabs or spaces are used to separate fields), and fixed-width data in which each field is allocated a fixed number of characters. Delimited text is a good choice for structured data that needs to be accessed by a wide range of applications and services in a human-readable format.

The following example shows customer data in comma-delimited format:

分隔文本文件

数据通常以纯文本格式存储，带有特定的字段分隔符和行终止符。分隔数据最常见的格式是逗号分隔值（CSV），其中字段用逗号分隔，行用回车/换行符终止。可选地，第一行可以包括字段名。其他常见格式包括制表符分隔值（TSV）和空格分隔（其中制表符或空格用于分隔字段）以及固定宽度数据，其中每个字段分配了固定数量的字符。对于需要由各种应用程序和服务以人类可读的格式访问的结构化数据，分隔文本是一个不错的选择。



以下示例以逗号分隔格式显示客户数据：


grocery:杂货店
elastic:灵活的，有弹性的

schema:模式；计划；图解；概要

Delimited：限定


系统开发模型
1.瀑布模型
软件计划，需求分析，软件设计，程序编码，软件测试，运行维护

软件设计：主要根据需求分析的结果，对整个软件系统进行设计，如系统框架设计，数据库设计，包括总体设计和详细设计

2.快速原型模型
3.演化模型：在快速开发一个原型的基础上，根据用户在调用原型的过程中提出反馈建议和意见，对原型进行改进，获取原型的新版本
4.螺旋模型：将瀑布模型和变换模型相结合，增加风险分析
5.喷泉模型
6.智能模型
7.V模型
8.增量模型，强调每一个增量均发布一个可操作产品

1.黑盒法：测试人员完全不考虑程序的内部结构和处理过程，只在软件的接口处进行测试，依据需求说明书，检查程序是否满足功能要求。又称功能测试或数据驱动测试
黑盒测试用例的设计方法有等价类划分、边值分析、错误猜测、因果图和功能图等。

2.白盒法：把测试对象看做一个打开的盒子，测试人员需了解程序内部结构和处理过程，以检查处理过程的细节为基础，对程序中尽可能多的逻辑路径进行测试，检验内部控制结构和数据结构是否有错。实际的运行状态与预期的状态是否一致。常用的测试用例设计方法有基本路径测试、循环覆盖测试、逻辑覆盖测试。

3.灰盒法

1.单元测试
2.集成测试
3.确认测试
4.验收测试
-

namespace mm{
    class Program
    static void Write()
    {
        Console.WriteLine("这是方法！！！");
    }
    static void Main(string[] args)
    {
        Write();
        Console.Readkey(); 
    }
}
1)使用static修饰符定义一个静态方法Write()
2)通过WriteLine()方法输出文本
3)使用Write()调用创建的方法

7.1.1 方法的返回值
通过方法的返回值可以进行最基本的数据交换，通过返回值可以计算方法的这个值。

有一个方法mm(),其返回值是一个字符串，可以使用如下代码使用这个方法：
string nn;
nn=mm();

可以通过两种方式修改方法：
-在方法声明中指定返回值的类型，但不会使用void关键字
-使用return关键字结束方法的运行，并把返回值传送给调用代码

当在程序中使用return语句时，程序会立即返回调用代码，而这个语句后面的代码都不会执行。但是return不一定是整个方法的最后行。
static double getVal()
{
    double mm;
    if (mm<6);
    return 4.5;
    return 3.5;

}

7.1.2 方法参数简介
当在方法内使用参数时，必须指定如下内容：
1.定义方法时设置的接受参数以及对应的类型
2.在方法调用中设置的接受参数

static double mm(double a, double b)
{
    return a*b;

}

例子15：实现借钱和借给别人钱的操作
说明在方法内使用参数和返回值的具体流程。
namespace hanshu{
    class bb{ 
        private decimal yuanlai;
        private string name;
        public bb(string name) //定义方法bb(),设置最初拥有的钱数为0，并调用方法Print()输出指定的文本字符
        {
            this.yuanlai = 0;
            this.name = name;
            Print("我的钱数",0);
        }
        public bool Deposit(decimal jine)   //定义借钱处理方法Deposit(),并调用方法Print()输出指定的文本
        {
            if(jine <= 0)
            return false;
            yuanlai +=jine;
            Print("借了别人",jine);
            return true;
        }
        public bool Withdraw(decimal jine) //定义借出钱处理方法Withdraw,并调用方法Print()输出指定的文本。
        {
            if (jine > yuanlai || jine <= 0)
            return false;
            yuanlai -= jine;
            Print("借给别人",jine);
            return true;
        }
        private void Print(string operation,decimal jine)
        {
            Console.WriteLine("名字：{0}",name);
            Console.WriteLine("{0}:{1}",operation,jine);
            Console.WriteLine("现金金额：{0}",yuanlai);
            Console.WriteLine("-----------------------");
            Console.ReadKey();
        }
        public static void Main() //定义Main(),设置用户的名字为“我是善良的人”，最初钱数是0
        {
            bb acc = new bb("我是善良的人");
            bool succeed =acc.Deposit(10000);  //定义变量succeed,判断处理钱数是否合法。
            if(!succeed)
            Console.WriteLine("aaaaa!");
            succeed = acc.WithDraw(5000);
            if(!succeed)
            Console.WriteLine("bbb!");
        }
    }
}

定义方法时，设置的接受参数以及对应的类型
在方法调用中设置的接受参数


7.2 变量作用域

只能从代码的本地作用域内访问变量
在方法内的变量都有其对应的作用域，当访问这个变量时，需要通过这个作用域来实现
某方法的变量只能在这个方法中使用。

namespace zuoyongyu{
    class Program
    {
       static void Write() //使用static修饰符定义一个静态方法Write()
       {
            string mm="大家好，我是方法！！！"; //在方法内定义string类型的变量mm,并赋值给对应的文本值
            Console.WriteLine("mm={0}",mm);
       }
       static void Main(string[] args)
       {
           Write();  //使用Write()调用创建的方法，将变量值输出
           Console.Readkey();
       }
    }
}

如果将上述代码中的变量mm在方法Main()内定义，程序执行后将会出现运行错误。
