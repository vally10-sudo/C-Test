public partial class Form1 : Form
{
    string s;
    public Form1()
    {
        InitializeComponent();
    }
    private void button1_Click(object sender,EventArgs e)
    {
        s = textBox1.Text;
        string b = s.ToUpper;
        textBox1.Text = b;
    }
    private void button2_Click(object sender,EventArgs e)
    {
        s = textBox1.Text;
        string b = s.ToLower();
        textBox1.Text = b;
    }
    private void button3_Click(object sender,EventArgs e)
    {
        
    }
}