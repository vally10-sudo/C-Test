interface zz{
    class Lei :zz   //Lei类实现了zz接口
    {
        void Read(mm mm)
        {
            //...
        }
    }
    class Author : Lei //Author类继承了Lei类
    {
        public mm[] mms; //mm类与Author类之前的关联是一对多的，即一本书可能有一个或多个作者:Lei 读书，这是暂时的单向依赖
    }
    class mm //mm由一个或多个Page页组成，每一个Page页只能作为一本mm的一部分，这是一种组合关系
    {
        public Author author;
        public Pnianling [] pnianlings;
    }
    class Pnianling
    {
    }
    class mmshelf  //mmshelf可以不放或放多本mm,mm也可以放其他的mmshelf中，mmshelf的存在并不能影响mm的存在性，这是一种聚合关系。
    {
        public mm[] mms;
    }
}