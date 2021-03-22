using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace suma_dwoch_liczb
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void rownaSie_Click(object sender, EventArgs e)
        {
            wynik.Text = Convert.ToString(Convert.ToInt32(liczba1.Text) + Convert.ToInt32(liczba2.Text));
        }
    }
}
