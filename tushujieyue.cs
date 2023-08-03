using System.Net;
using System.Reflection;
using System.Reflection.Metadata;
using System;
namespace BOOKS
{
    public partial class Mid:Form
    {
        public Mid()
        {
            InitializeComponent();
        }
        public Module.Admin admin;
        private void borrow_Click(object sender,EventArgs e)
        {
            Borrow b = new Borrow();
            b.Show();
            this.Dispose();
        }
        private void AddBook_Click(object sender,EventArgs e)
        {
            (new AddBook()).Show();
            this.Dispose();
        }
        private void returnbook_Click(object sender,EventArgs e)
        {
            (new Return()).Show();
            this.Dispose();
        }
        private void useManager_Click(object sender,EventArgs e)
        {
            (new UserManager()).Show();
            this.Dispose();
        }
        private void UpdateBook_Click(object sender,EventArgs e)
        {
            (new Updatebook()).Show();
            this.Dispose();
        }
        private void button1_Click(object sender,EventArgs e)
        {
            Application.Exit();
        }
    }
}


//第二段,输入图书和学生编号，其他系统自动带出
namespace BOOKS
{
    public partial class Borrow:FormatException
    {
    public Borrow()
    {
        InitializeComponent();
    }
    private void borrowed_Click(object sender,EventArgs e)
    {
        if(!String.IsNullOrEmpty(bookid.Text) && !String.IsNullOrEmpty(usedid.Text))
        if(BLL.BorrowBook.Borrow(bookid.Text,usedid.Text,DateTime.Text))
        {
            MessageBox.Show("借书成功！");
            (new Mid()).Show();
            this.Dispose();

        }
    }
    private void noborrow_Click(object sender,EventArgs e)
    {
        (new Mid()).Show();
        this.Dispose();
    }
    private void bookid_Leave(object sender,EventArgs e)
    {
        Model.Book b = BLL.BorrowBook.GetBook(bookid_Leave.Text);
        if(b != null)
        {
            bookname.Text = b.Bname;
            Author.Text = b.Author;
            date.Text = DateTime.Now.ToShortDateString();
            if(BLL.BorrowBook.GetBookFromBorrow(bookid.Text))
            {
                MessageBox.Show("此书已被借阅");
                bookid.Clear();
                bookname.Clear();
                Author.Clear();
                date.Clear();
            }
        }
        else
        {
            MessageBox.Show("未找到此书！请检查是否输入错误~");
            bookid.Clear();
            bookname.Clear();
        }
    }
    }
}

