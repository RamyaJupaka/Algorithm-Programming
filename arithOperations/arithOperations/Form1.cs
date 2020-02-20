using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace arithOperations
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            byte button2_result = 0;
            button2_result = Convert.ToByte(
            MessageBox.Show("Do you really want to exit the app?", "Exit", MessageBoxButtons.YesNo));
            this.Close();
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            textBox3.Text = "";
            textBox2.Text = "";
            textBox1.Text = "";
            comboBox1.Text = "";
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double num1 = 0, num2 = 0, finalanswer = 0;
            try
            {
                num1 = Convert.ToDouble(textBox1.Text);
                num2 = Convert.ToDouble(textBox2.Text);
                if (comboBox1.SelectedIndex == 0)
                {
                    finalanswer = num1 + num2;
                    textBox3.Text = finalanswer.ToString();
                }
                if (comboBox1.SelectedIndex == 1)
                {
                    finalanswer = num1 - num2;
                    textBox3.Text = finalanswer.ToString();
                }
                if (comboBox1.SelectedIndex == 2)
                {
                    finalanswer = num1 * num2;
                    textBox3.Text = finalanswer.ToString();
                }
                if (comboBox1.SelectedIndex == 3)
                {
                    finalanswer = num1 / num2;
                    textBox3.Text = finalanswer.ToString();
                }
            }
            catch (Exception e1)
            {
                MessageBox.Show(e1.Message, "warning", MessageBoxButtons.OKCancel, MessageBoxIcon.Warning);
            }
        }
    }
}
