using System;
using System.IO;
using System.Diagnostics;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ContactManager
{
	public partial class Form1 : Form
	{
		public Form1()
		{
			InitializeComponent();

			listView1.View = View.Details;
			listView1.FullRowSelect = true;

			listView1.Columns.Add("First name", 150);
			listView1.Columns.Add("Last name", 150);
			listView1.Columns.Add("Phone", 150);

		}
		private void Add(string name, string lastname, string phone)
		{
			String[] row = { name, lastname, phone };
			ListViewItem item = new ListViewItem(row);
			listView1.Items.Add(item);
		}
		private void Update()
		{
            bool alreadyExists = false;

            foreach (ListViewItem item in listView1.Items)
            {
                if (string.Equals(item.SubItems[2].Text, PhoneTxt.Text))
                {
                    alreadyExists = true;
                    MessageBox.Show("Phone number already exists");
                }
            }

            if (!alreadyExists)
            {
                listView1.SelectedItems[0].SubItems[0].Text = Nametxt.Text;
                listView1.SelectedItems[0].SubItems[1].Text = LastNametxt.Text;
                listView1.SelectedItems[0].SubItems[2].Text = PhoneTxt.Text;
            }

			Nametxt.Text = "";
			LastNametxt.Text = "";
			PhoneTxt.Text = "";
		}
		private void Delete()
		{
			if (MessageBox.Show("Sure?", "DELETE", MessageBoxButtons.OKCancel, MessageBoxIcon.Warning) == DialogResult.OK)
			{
				listView1.Items.RemoveAt(listView1.SelectedIndices[0]);
				Nametxt.Text = "";
				LastNametxt.Text = "";
				PhoneTxt.Text = "";
			}
		}
		private void ADDButton_Click(object sender, EventArgs e)
		{
            bool alreadyExists = false;
		    if(Nametxt.Text=="" || LastNametxt.Text=="" || PhoneTxt.Text=="")
			{
				MessageBox.Show("Please fill all empty fields");
			}
            foreach (ListViewItem item in listView1.Items)
            {
                if (string.Equals(item.SubItems[2].Text, PhoneTxt.Text))
                {
                    alreadyExists = true;
                    MessageBox.Show("Phone number already exists");
                }
            }

            if(!alreadyExists)
            {
                Add(Nametxt.Text, LastNametxt.Text, PhoneTxt.Text);
            }

			Nametxt.Text = "";
			LastNametxt.Text = "";
			PhoneTxt.Text = "";	
		}

		private void ClearBtn_Click(object sender, EventArgs e)
		{
			listView1.Items.Clear();

			Nametxt.Text = "";
			LastNametxt.Text = "";
			PhoneTxt.Text = "";
		}

		private void UpdateBtn_Click(object sender, EventArgs e)
		{
			Update();
		}

		private void DeleteBtn_Click(object sender, EventArgs e)
		{
			Delete();
		}

		private void ListView1_MouseClick(object sender, MouseEventArgs e)
		{
			Nametxt.Text = listView1.SelectedItems[0].SubItems[0].Text;
			LastNametxt.Text = listView1.SelectedItems[0].SubItems[1].Text;
			PhoneTxt.Text = listView1.SelectedItems[0].SubItems[2].Text;
		}

		private void FileBtn_Click(object sender, EventArgs e)
		{
			try
			{
				SaveFileDialog save = new SaveFileDialog();
				save.ShowDialog();
				string location = save.FileName;
				StreamWriter sw = new StreamWriter(location);

				foreach(ListViewItem itm in listView1.Items)
				{
					for(int i=0; i<itm.SubItems.Count; i++)
					{
						sw.Write(itm.SubItems[i].Text);

						if(i!= itm.SubItems.Count - 1)
						{
							sw.Write(",");
						}
					}
					sw.WriteLine();
				}
				sw.Close();
				MessageBox.Show("File saved to:" + location);
			}
			catch(Exception ex)
			{
				MessageBox.Show(ex.Message);
			}
		}

		private void PhoneTxt_KeyPress(object sender, KeyPressEventArgs e)
		{
			Char number = e.KeyChar;
			if(!Char.IsDigit(number) && number !=8)
			{
				e.Handled = true;
			}
		}
	}
}
